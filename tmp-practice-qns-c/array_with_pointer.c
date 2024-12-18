#include <stdio.h>
void arr_with_pointer();
void pointer_basic();
int main (){
arr_with_pointer();
return 0;
}

void arr_with_pointer(){
int arr [] = {22,33,44,55,66};
int *ptr = &arr[0];

//changing first element in array using pointer;
	*ptr = 69;

for (int a = 0 ; a<5; a++){
	
	//print changes made by pointers,also print arrays vaules using pointer de-refrence;
	printf("Array Index : %d , Address : %p , Value : %d \n",a+1,ptr,*ptr);
	ptr++;
}
}


void pointer_basic(){
int i = 11;
int *ptr = &i;
printf("%u\n",ptr);
printf("%p\n",ptr);
ptr++;
printf("%u\n",ptr);
printf("%p\n",ptr);
}