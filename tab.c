#include <stdio.h>

int main()
{
    int i=0;
    char ciag[] = "ala ma3 kota";

        while (ciag[i]){

            printf("%c", ciag[i]);
            ++i;


        }
       //printf("\n %d", i);
    i = sizeof(ciag)-2;

    printf("\n");

    while (i>=0){
        if (ciag[i]>='a' && ciag[i]<='z') {
            //printf("%c", ciag[i]);
        }
        else{
            printf("%c ", ciag[i]);
    }
    --i;
    }

    return 0;

}