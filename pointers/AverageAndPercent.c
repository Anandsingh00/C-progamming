#include<stdio.h>
    void ans(int , int , int , float *, float *);

    int main(){
        float average, percentage;
        int phy,mths,chem;

        printf("Enter the marks of phy: ");
        scanf("%d",&phy);

         printf("\nEnter the marks of mths: ");
        scanf("%d",&mths);

         printf("\nEnter the marks of chem: ");
        scanf("%d",&chem);
        ans( phy, mths, chem, &average, &percentage );

        printf("\naverage = %f",average);

        printf("\nPercentage = %f",percentage);
        return 0;
    }

    void ans(int ph, int mt, int ch, float *a, float *p){
        int sum;
        sum = ph + mt + ch ;

        *a = sum / 300;
        *p = (sum / 300) * 100;

    }