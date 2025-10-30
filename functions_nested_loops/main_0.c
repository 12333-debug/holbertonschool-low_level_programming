#include "main.h"

/**
 * test_isalpha - check the _isalpha function
 *
 * Return: 0
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');  // affiche 1
    r = _isalpha('o');
    _putchar(r + '0');  // affiche 1
    r = _isalpha(108);  // 108 = 'l'
    _putchar(r + '0');  // affiche 1
    r = _isalpha(';');
    _putchar(r + '0');  // affiche 0
    _putchar('\n');     // retour à la ligne

    return (0);
}
