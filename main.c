#include <stdio.h>
#include <stdbool.h>

int main(void) {

int a;
  for(a=1;a<=100;a++){
    if(a%3==0 || a%10==3){
      printf("Fizz\n");
    }
    else if(a%7==0 || a%10==7){
      printf("Buzz\n");
    }
    else if((a%3==0 || a%10==3)&&(a%7==0 || a%10==7)){
      printf("FizzBuzz\n");
    }
    else{
      printf("%d\n",a);
    }
  }
return 0;
}

