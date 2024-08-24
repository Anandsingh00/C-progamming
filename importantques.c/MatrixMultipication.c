#include<stdio.h>
int main(){
  int arr[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int brr[3][3]= {{1,0,0},{0,1,0},{0,0,1}};
    int res[3][3];
   int rc =3;
        // program for multiplication
        for(int i=0;i<3;i++){
            for(int j =0;j<3;j++){
                   res[i][j]=0;
                for(int k=0;k<rc;k++){
                   res[i][j]+=arr[i][k]*brr[k][j];

                }
            }
        }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;

}
