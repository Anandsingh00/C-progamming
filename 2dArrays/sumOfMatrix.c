#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows in a matrix: ");
    scanf("%d",&m);

    int n;
    printf("Enter the number of columns in a matrix: ");
    scanf("%d",&n);
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){ 
       scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
        sum += arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
    }