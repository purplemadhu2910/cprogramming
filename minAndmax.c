#include <stdio.h>

int main(){
  int a[] = {1,2,3,4,5},min,max;
  
  int n = sizeof(a)/sizeof(a[0]);
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  
  printf("\nSize:%d\n",n);
  
  for(int i=0;i<n;i++){
      min=a[0],max=a[0];
    if(min>a[i]){
      min=a[i];
    }else if(max<a[i]){
      max = a[i];
    }
  }
  printf("Min:%d\n",min);
  printf("Max:%d\n",max);
  
}
