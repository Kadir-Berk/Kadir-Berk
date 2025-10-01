#include <stdio.h>
#include <stdlib.h>
int sayi1;
int main()
{
    printf("1 sayi giriniz:\n");
    scanf("%d", &sayi1);
    if(sayi1>0){
        printf("pozitif");
    }
    else if(sayi1<0){
        printf("negatif");
    }
    else if(sayi1==0){
        printf("notr");
    }
    else{
        printf("uzgunum ama bu veri tipini algilayamiyorum!!");
    }

}
