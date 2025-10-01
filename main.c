#include <stdio.h>
#include <stdlib.h>
int input;
int main()
{
    printf("bir sayi giriniz pls: \n");
    scanf("%d", &input);
    int i;
    for(i = 0; i<= input; i++) {
        if(i%3!=0) {
            printf("%d\n",i);
        }
        else if(i>50){
            break;
        }

    }
}
