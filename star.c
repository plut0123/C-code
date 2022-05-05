#include <stdio.h>
void star(unsigned int size);
int main(void) {
    int x = 10;
    star(x);
    return 0;
}

void star(unsigned int size) {
    int i;
    int j;
    int k;
    for (i = 0; i <= size *2 ; i++)
    {
        for (j = 0; j <= size * 2 ; j++)
        {
            if (j == size + i || j == size - i || j == i && j <=size || j == 2 * size - i && i <=size )
            
            printf("%d",j);
            else
            printf (" ");
        }
        printf ("\n");
    }

}