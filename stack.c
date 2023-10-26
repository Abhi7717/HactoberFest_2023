//code for stack Data Structure in C programming. by Abhijit Kumar.
#include<stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int data)
{
    if(top==size-1)
    printf("stack overflow\n");
    else
    {
        top++;
        stack[top]=data;
    }
}

int pop()
{
    int data=-999;
    if(top==-1)
    printf("stack underflow\n");
    else{
        data=stack[top];
        top--;

    }
    return data;
}

void traverse()
{
    int i,j,n=size;
    if(top==-1)
    printf("stack is empty\n");
    else
    {
        for (i=0; i<n-1; i++){
           
      for (j=0; j<n-i-1; j++){
         if (stack[j] < stack[j+1]){ // if (stack[j] > stack[j+1]){
            int t = stack[j]; //int t = stack[j+1];
            stack[j] = stack[j+1];//stack[j+1] = stack[j];
            stack[j+1] = t;//stack[j] = t;    //this logic is fro decending order...
         }
      }

   }
//    top=

        j=top;
        while(j!=-1)
        {
            printf("%d ",stack[j]);
            j--;
        }
    }
}
int main()
{
    int n,i;
    printf("1. insert the element\n");
    printf("2. delete the element\n");
    printf("3. print the elemts\n");
    printf("4. exit\n");
    do{
    printf("\nenter your choice\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("enter the data\n");
        scanf("%d",&i);
        push(i);
        break;
    case 2:
        i=pop();
        printf("%d",i);
        break;
    case 3:
        traverse();
        break;
    default:
        printf("enter coreect chose\n");
        break;
    }
    }while(n!=4);
    return 0;
}

// Output:
// 1. insert the element
// 2. delete the element
// 3. print the elemts  
// 4. exit

// enter your choice
// 1
// enter the data
// 9

// enter your choice
// 1
// enter the data
// 8

// enter your choice
// 1
// enter the data
// 10

// enter your choice
// 1
// enter the data
// 11

// enter your choice
// 1
// enter the data
// 2

// enter your choice
// 3
// 2 8 9 10 11 
// enter your choice
// 2
// 2
// enter your choice
// 3
// 8 9 10 11 
// enter your choice
// 1
// enter the data
// 12

// enter your choice
// 3
// 8 9 10 11 12 
// enter your choice
// 4
