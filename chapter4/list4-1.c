#include <stdio.h>
int main(void)
{
    int cont;
    do{
        int no;
        printf("整数を入力してください。:");
        scanf("%d",&no);
        if(no%2)
            puts("その数は奇数です。");
        else puts("その数は偶数です。");
    printf("もう一度？Yes-> 0/No ->9:");
    scanf("%d",&cont);
    }
    while (cont=0);
    
        printf("プログラムを終了します。");
    
}