#include <stdio.h>

int main()
{
    int i=0;
    char ciag[] = "ala ma kota";

        while (ciag[i]){

            printf("%c", ciag[i]);
            ++i;


        }
       //printf("\n %d", i);
    i = sizeof(ciag)-2;

    printf("\n");
    while (i>=0){

        printf("%c", ciag[i]);
        --i;
    }

    return 0;

}