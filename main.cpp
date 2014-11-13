/*
*Фибоначчи 1 задача
*/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    int i, q;
    printf(" Введите число <20 ");
    scanf("%d", &q);
    if(q<20) {
        printf("\n");
        int x = 0, y = 1;
        for (i = 1; i <= q; i++) {
            int r = x + y;
            x = y;
            y = r;
            printf(" %d ", y);
        }
        printf("\n\n");
        printf(" Число Фибоначчи числа %d = %d\n\n",q,y);
        return x;
    }
    else{
        printf("ERROR, число больше 20!");
        return 0;
    }
}
