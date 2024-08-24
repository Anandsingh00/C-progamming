#include<stdio.h>
void areaperi(int ,float *,float *);
int main(){
    int radius;
    float area , perimeter;
    printf("Enter the radius of circle : \n");
    scanf("%d",&radius);
    areaperi(radius, &area, &perimeter);
    printf("the area of circle is = %f\n",area);
    printf("the perimeter of circle is = %f\n",perimeter);

    return 0;
}

    void areaperi(int r,float *a,float *p){
        *a = 3.14 * r * r;
        *p = 2 * 3.14 * r;

    }