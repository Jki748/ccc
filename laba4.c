#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "RUS");
    int c, i, ch;
    i = 0;
    c = 0;

    for (i = 0; i < 30; i++) {
        ch = getchar();
    if (ch == 'x')
        c++;
    if (ch = '\n')
        break;
    //printf ("%c\n", ch);

}
    if (c == 0)
        printf("нет х");
    else
        printf("%d\n", c);
}
