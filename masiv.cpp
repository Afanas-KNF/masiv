#include <stdio.h>
#include <stdlib.h>

int construct_array(int data[][2], int, int);
//int sum_array(int data1[3][2],int data2[3][2], int data3[3][2]);
//int multiply_array(int data1[3][2], int data2[3][2], int data3[3][2]);

int main()
{
    int l1 = 3, w1 = 2, l2 = 3, w2 = 2;
    int** data1 = (int**) calloc (l1 * w1, sizeof(int));
    int** data2 = (int**) calloc (l2 * w2, sizeof(int));
    construct_array(data1, l1, w1);
    //construct_array(data2, l2, w2);
    //multiply_array(data1, data2, data3);
    //int* a = (int*) calloc(a, sizeof(int));
    //void *realloc( void *memblock, size_t size);
}

int construct_array(int** data, int length, int width)
{
    printf("what size will the array be?\n");
    scanf("length = %d\n", &length);
    scanf("width = %d", &width);
    int aria = length * width;
    int *realloc(int data, size_t aria);
    printf("fill in array\n");
    for(int i=0; i < length; i++)
    {
        for(int j=0; j < width; j++)
        {
            printf("array[%d][%d]\n", i, j);
            scanf("%d", &data[i][j]);
        }
    }
    printf("loading data\n");
    for(int i=0; i < length; i++)
    {
        for(int j=0; j < width; j++)
        {
            printf("data[%d][%d]=%d ", i, j, data[i][j]);
        }
    }
    return 0;
}


/*int sum_array(int data1[3][2], int data2[3][2], int data3[3][2])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            data3[i][j] = data1[i][j] + data2[i][j];
            printf("\narray[%d][%d]\n%d", i, j, data3[i][j]);
        }
    }
    return 0;

}

int multiply_array(int data1[3][2], int data2[3][2], int data3[3][2])
{

}*/


