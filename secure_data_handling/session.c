#include <stdlib.h>
#include <string.h>
#include "session.h"

session_t *session_create(const char *id, unsigned int uid,
                          const unsigned char *data, size_t data_len)
{
    session_t *s = malloc(sizeof(*s));
    if (!s)
        return NULL;

    /* Duplicate ID safely */
    s->id = strdup(id);
    if (!s->id) {
        free(s);
        return NULL;
    }

    s->uid = uid;

    /* Allocate and copy data */
    if (data_len > 0) {
        s->data = malloc(data_len);
        if (!s->data) {
            free(s->id);
            free(s);
            return NULL;
        }
        memcpy(s->data, data, data_len);
        s->data_len = data_len;
    } else {
        s->data = NULL;
        s->data_len = 0;
    }

    return s;
}

int session_set_data(session_t *s, const unsigned char *data, size_t data_len)
{
    unsigned char *newbuf;

    if (!s)
        return 0;

    /* Clearing data */
    if (data_len == 0) {
        free(s->data);
        s->data = NULL;
        s->data_len = 0;
        return 1;
    }

    /* Allocate new buffer */
    newbuf = malloc(data_len);
    if (!newbuf)
        return 0;

    memcpy(newbuf, data, data_len);

    /* Replace old buffer */
    free(s->data);
    s->data = newbuf;
    s->data_len = data_len;

    return 1;
}

void session_destroy(session_t *s)
{
    if (!s)
        return;

    free(s->id);
    free(s->data);
    free(s);
}
