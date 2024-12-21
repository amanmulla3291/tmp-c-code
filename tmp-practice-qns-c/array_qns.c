#include <stdio.h>
int main (){
int arr [5];
for (int a = 0; a<5;a++){
	printf("Enter the value of Index %d : ",a+1);
	scanf("%d",&arr[a]);
}

for (int a = 0; a<5;a++){
	printf("FYI : %d \n",arr[a]);
}
return 0;
}