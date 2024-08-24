#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    }firstperson,secondperson;

    //struct Person.firstperson;
    strcpy(firstperson.name,"mahesh");
    firstperson.salary =10000;
    firstperson.age = 23;

    //struct Person.secondperson;
    strcpy(secondperson.name,"rahul");
   secondperson.salary= 20000;
    secondperson.age = 25;

    printf("%s",firstperson.name);
    printf("%d",secondperson.age);
    return 0;
}