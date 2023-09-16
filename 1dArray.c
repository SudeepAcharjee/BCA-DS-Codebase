#include<stdio.h>
int main()
{
    //Declaring two variable that will be used here
    int arr[3];
    int i;

    printf("Enter 3 numbers\n");

    //using loop to enter the numbers
    for(i=0; i<3; i++)
    {
        printf("Enter Number %d: ", i +1);
        scanf("%d", &arr[i]);
    }

    //using loop again to print
    printf("######MENU######\n");
    printf("You Entered the following numbers\n");
    for(i=0; i<3; i++)
    {
        printf("Number %d: %d \n", i + 1, arr[i]);
    }

 return 0;
}