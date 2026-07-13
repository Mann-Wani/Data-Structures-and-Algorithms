#include <stdio.h>

void swap(int* array,int j,int* sorted)
{
    if((*(array+j))>(*(array+j+1)))
    {
        int temp = *(array+j);
        *(array+j)=*(array+j+1);
        *(array+j+1)=temp;
        *sorted=0;
    }
}

void sortArray(int* array, int length)
{
    int i=0;
    int j=0;

    for (i=0;i<length-1;i++)
    {   
        int sorted=1;

        for (j=0; j<length-i-1;j++)
        {            
            swap(array,j,&sorted);
        }


        if (sorted==1)
        {
            break;
        }
    }
}

void printArray(int* array, int length)
{
    int i=0;

    printf("\n{");
    for (i=0; i<length; i++)
    {
        if(i<length-1)
            printf("%d,", *(array+i));
        else
            printf("%d", *(array+i));
    }
    printf("}\n");
}


void main()
{
    int nums[]={64550,2,10,2,4,9,54,321,6,37,40,4,56,76,234,98,656};
    int length = sizeof(nums)/sizeof(int);

    sortArray(nums, length);
    printArray(nums, length);

}