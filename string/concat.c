#include<stdio.h>
#include<string.h>
int main(){
  char str1[50]="anand";
  char str2[] = "kumar ";
  int i=0;
  while(str1[i] != '\0'){
    i++;
  }
  int j=0;
  while(str2[j] != '\0'){
        str1[i]=str2[j];
        i++;
        j++;
  }
  str1[i] = '\0';
  printf("Concatenated String:%s",str1);

    return 0;
}