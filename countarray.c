#include <stdio.h>
int main(){
  char str[100];
  int len,counta=0,countd=0,counts=0;

  scanf("%s",str);
  len=strlen(str);
  for(int i=0;i<len;i++){
        if(isalpha(str[i])){
              counta++;
        }else if(isdigit(str[i])){
              countd++;
        }else{
            counts++;
        }
  }
printf("Alphabets:%d\n,Digits:%d\n;Char:%dn",counta,countd,counts);
}
