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
    //%p stores is used to represent the memory address of the array
     printf("First number %p\n", &arr[0]);
     printf("Second number %p\n", &arr[1]);
     printf("Third number %p\n", &arr[2]);
//cr
    //%lu is used to represent the whole memory
     printf("The Value of arr %lu\n", &arr);

     //%lu with size of operator is used to find the total size used in memory by th array
     printf("The Value of arr %lu\n", sizeof(arr));
 return 0;
} 