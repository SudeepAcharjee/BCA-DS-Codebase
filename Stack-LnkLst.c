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


//Creating a push function that is used to push data in the array 
 void push(int data)
    {
        struct node* newNode
        newNode = malloc(sizeof(newNode));

        if(newNode == NULL)
            {
                printf("Stack Overflow");
                return 0;
            }
        newNode -> data = data;
        newNode -> link = NULL;

        newNode -> link = top;
        top = newNode;
    }
//////////////////////////////////////////////////////////


//Creating a pop function that is used to pop out 
int pop()
    {
        struct node* temp;
        int val;
        
        if(isEmpty())
            {
                printf("Stack Underflow");
                return 0;
            }

        temp = top;
        val = temp -> data;
        top = top -> link;
        free(temp);
        temp = NULL;
        return val;
    }
//////////////////////////////////////////////////////////////


//Creating a peek function that is used to print the top element of the array
