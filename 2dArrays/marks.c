#include<stdio.h>
int main(){
    int r;
    printf("enter the number of students: ");
    scanf("%d",&r);
        int arr[r][4];
        printf("Enter the roll number & marks of physics,chemistry and maths\n");
    for(int i = 0;i<r;i++){
        for(int j =0 ;j<4;j++){
        scanf("%d",&arr[i][j]);
        }
    }
       for(int i = 0;i<r;i++){
        for(int j =0 ;j<4;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}