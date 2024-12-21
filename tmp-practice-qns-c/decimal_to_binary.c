#include <stdio.h>
void binary(int n){
    int binary_array[50];
    int counter = 0;
    while(n>0){
        binary_array[counter] = n%2;
        n = n/2;
        counter++;

    }
    printf("\n");
    for (int i = counter-1 ; i>=0 ; i--){
        
        printf("%d",binary_array[i]);
    }
    printf("\n");

}
int main (){
    int input;
    printf("Enter Number : ");
    scanf("%d",&input);
    binary(input);

    return 0;
}