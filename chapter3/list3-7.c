#include <stdio.h>
int main(void){
    int n1,n2;
    printf("2つの整数を入力してください。:");
    printf("整数1:");
    scanf("%d",&n1);
    printf("整数2:");
    scanf("%d",&n2);
    if(n1!=n2){
        printf("それらの値は違います。\n");
    }
    else
        printf("それらの値は同じです。\n");
    return(0);
}