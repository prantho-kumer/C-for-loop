#include <stdio.h>

int main(void) {

//print the number with range of 7 til 35
//   int i;
// for(i=0;i<35;i+=7){

//   printf("%d \n", i);
// }


//find the sum of continuous number till user inputed number 

int i;
int n;
int sum = 0;

printf("Enter a number:");
scanf("%d", &n);

for(i=0;i<=n;i++){
  sum = sum + i;
}
printf("The Sum of first %d are %d",n, sum);



// print name 20 time
/*
int i;
for(i=1;i<=20;i++){
  printf("%d : Pranto kumer \n", i);
 
}
*/







  return 0;
}
