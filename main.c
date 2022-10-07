#include<stdio.h>

void sort(int * array, int len)
{
    int tmp;
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(array[i] > array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}
int
main()
{
    printf("Hello World!");
    printf("%d", 1+2);
    
    int array[5] = {5, 4, 3, 1, 2};
    sort(array, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    return 0;
}