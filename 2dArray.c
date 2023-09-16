#include<stdio.h>
int main()
{
    //Declaring two variable that will be used here
    int arr[3][3];
    int i, j;

    printf("Enter numbers\n");

    //using loop to enter in array
     for(j=0; j<3; j++){
    for(i=0; i<3; i++)
    {
        printf("Enter Array element");
        scanf("%d", &arr[i][j]);
    }
    }


    //using loop again to print
    printf("\n\n######MENU######\n");
    printf("You Entered the following numbers\n");
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++){
        printf(" %d ", arr[i][j]);
         }
         printf("\n");
    }
    

 return 0;
}