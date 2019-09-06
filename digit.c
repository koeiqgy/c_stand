#include "digit.h"

/***
 return digits of the digit
***/
int dig_get_digits(int num){
    int dnum=10;
    int count=0;
    if(num<0){
        return -1;
    }
    if(num==0){
        return 1;
    }
    while(num>0){
      num=num/10;
      count++;
    }
    return count;
}

/***
  check the digit is even or odd if d is even return 1 else return 0
***/
int dig_is_even(int num){
    if(num%2==0){
        return 1;
    }
    return 0;
}
/***
  return average
***/
int dig_get_average(int *arr, int len){
    int i,sum=0;
    for(i=0;i<len;i++){
        sum+=*arr;
        arr++;
    }
    return sum;
}

/***
  reverse the array
***/
void dig_reverse_arr(int *arr, int len){
    int i=0,j=len-1,temp=0;
    while(i!=j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

/***
  print array
***/
void dig_print_arr(int *a,int size){
    for(int *p=a;p<a+7;p++){
        printf("%d\n",*p);
    }
}

