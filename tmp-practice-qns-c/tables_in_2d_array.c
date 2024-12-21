#include <stdio.h>
int main(){
    int input;
    printf("Enter the number for tables : ");
    scanf("%d",&input);
    int table[input][input];

    for(int i = 1; i<=10;i++){

        for(int j = 1; j<=input; j++){
            table[i][j] = i*j;
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }

    return 0;
}