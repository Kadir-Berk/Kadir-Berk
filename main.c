#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char sesli_harfler[] = "AEIOUaeiou";
char input;

int main() {

    printf("Bir harf giriniz:\n");
    scanf(" %c", &input);
    printf("%d",a);
    if(strchr(sesli_harfler, input) != NULL)
        printf("'%c' bir sesli harftir.\n", input);
    else
        printf("'%c' bir sesli harf degildir.\n", input);

    return 0;
}
