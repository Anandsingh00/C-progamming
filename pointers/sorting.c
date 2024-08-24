#include<stdio.h>
void sort(int *arr, int size);
int main(){
    int i,arr[10], *ptr;
    ptr=arr;
      printf("Enter the array of 10 number\n");
    for( i = 0 ; i < 10 ; i++)
      scanf("%d",(ptr+i));
    printf("\n original array: \n");
      for( i = 0 ; i < 10 ; i++)
    printf("%d  ",*(ptr+i));
      sort(arr ,10);
    printf("\n sorted array : \n");
     for ( i = 0 ; i < 10 ; i++)
    printf("%d  3",*(ptr+i));
    return 0;
}

    void sort(int *arr,int size){
        int i,j,t,*ptr;
        ptr=arr;
        for ( i = 0; i < size; i++)
        {
         for( j = 0; j< size-1-i;j++){
            if(*(ptr+j)>*(ptr + j + 1))
            {
                t = *(ptr + j);
                *(ptr + j)=*(ptr + j + 1);
                *(ptr + j + 1) = t ;

            }

         }   
        }
        

    }