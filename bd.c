#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int greatest;
    printf("Enter ten values:");
   
    
    for (i = 0; i < 10; i++) {
if (a[i] > greatest) {
greatest = a[i];
    }
   
    
    Greatest of ten numbers is %d", greatest);
    return 0;
  }
