#include <stdio.h>

/*
2d array is Array of Array;
visual representation of 2d array.
arr[3] which means rows that contains arr[2] colum.
arr[3][2]= {
            {1,45},
            {2,43},
            {3,66}
};

how this looks in for loop
i = is row 
j = colum
arr[3][2]= {
            {i=0 , j=0}
            {i=1 , j=1}
            {i=2 , j=2}
}

*/
int main (){
    int arr[3][3];

    for (int i = 0; i<3; i++){
        for (int j=0; j<3; j++){

            printf("Enter the value of I = %d J = %d \n",i , j);
            scanf("%d",&arr[i][j]);
        }
        printf("Loop %d is completed \n",i);
        printf("\n");
    }

    for (int i = 0; i<3; i++){
        for (int j=0; j<3; j++){

            printf("%d\t", arr[i][j]);
            
        }
        printf("\n");
    
    }


    return 0;
}