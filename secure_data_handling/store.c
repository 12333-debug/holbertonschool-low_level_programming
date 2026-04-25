#include <stdlib.h>
#include <string.h>
#include "store.h"
#include "session.h"

void store_init(store_t *st)
{
    if (st)
        st->head = NULL;
}

int store_add(store_t *st, session_t *s)
{
    node_t *cur, *n;

    if (!st || !s || !s->id)
        return 0;

    /* Check for duplicate ID */
    cur = st->head;
    while (cur) {
        if (cur->sess && cur->sess->id &&
            strcmp(cur->sess->id, s->id) == 0) {

            /* Duplicate → destroy session to avoid leak */
            session_destroy(s);
            return 0;
        }
        cur = cur->next;
    }

    /* Allocate new node */
    n = malloc(sizeof(*n));
    if (!n) {
        session_destroy(s);
        return 0;
    }

    n->sess = s;
    n->next = st->head;
    st->head = n;

    return 1;
}

session_t *store_get(store_t *st, const char *id)
{
    node_t *cur;

    if (!st || !id)
        return NULL;

    cur = st->head;
    while (cur) {
        if (cur->sess && cur->sess->id &&
            strcmp(cur->sess->id, id) == 0)
            return cur->sess;

        cur = cur->next;
    }

    return NULL;
}

int store_delete(store_t *st, const char *id, session_t **out)
{
    node_t *cur, *prev = NULL;

    if (!st || !id)
        return 0;

    cur = st->head;

    while (cur) {
        if (cur->sess && cur->sess->id &&
            strcmp(cur->sess->id, id) == 0) {

            /* Remove node from list */
            if (prev)
                prev->next = cur->next;
            else
                st->head = cur->next;

            /* Ownership logic */
            if (out)
                *out = cur->sess;   /* Caller takes ownership */
            else
                session_destroy(cur->sess); /* Store destroys */

            free(cur);
            return 1;
        }

        prev = cur;
        cur = cur->next;
    }

    return 0;
}

void store_destroy(store_t *st)
{
    node_t *cur, *next;

    if (!st)
        return;

    cur = st->head;
    while (cur) {
        next = cur->next;

        session_destroy(cur->sess);
        free(cur);

        cur = next;
    }

    st->head = NULL;
}
