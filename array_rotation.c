#include <stdio.h>

void shift_to_left(int* array, int length);
void rotate_array (int* array, int length, int rotation_count);
void print_array(int* array, int length);

int main (void)
{
    int array[] = {1,2,3,4,5};
    int rotation_count=3;
    int length = sizeof(array)/sizeof(int);

    rotate_array(array, length, rotation_count);
    print_array(array, length);
}

void rotate_array (int* array, int length, int rotation_count)
{
    for (int i=0; i<rotation_count; i++)
    {
        shift_to_left(array, length);
    }
}

void print_array(int* array, int length)
{
    printf("\n");
    for (int i=0; i<length; i++)
    {
        printf("%d ", *(array+i));
    }
    printf("\n");
}

void shift_to_left(int* array, int length)
{
    int temp= *(array);
    for (int i=0; i<length-1; i++)
    {
        *(array+i)= *(array+i+1);
    }
    *(array+length-1)=temp;
}