#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr; //pointer initialized
    ptr = (int*)malloc(2*sizeof(int));
    if( ptr == NULL)
    {
        printf("Memory is not allocated");
    }
    else{
        printf("Memory is allocated");
    }
    return 0;
}
