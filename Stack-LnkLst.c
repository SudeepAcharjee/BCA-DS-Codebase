//Creating a stack using linked list
#include<stdio.h>

//creating a structure
struct node
    {
        int data;
        struct node* link;
    }  *top = NULL;
//////////////////////////////////////////////////////


//Creating is-empty fuction to check the underflow
int isEmpty()
    {
        if (top == NULL)
            return 1;
        else
            return 0;
    }
///////////////////////////////////////////////////////