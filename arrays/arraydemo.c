#include<stdio.h>
int main(){
    int sum=0,avg;
    int i;

    // array declaration
    int marks[10];

    for(i=0;i<=9;i++){
        printf("\nEnter Marks:");
        //stores data in array
        scanf("%d", &marks[i]);
    }

    for(i=0;i<=9;i++){
        sum=sum+marks[i];  //reads data from an array
    }
    avg=sum/30;
    printf("average marks of students : %d",avg);
    return 0;
}