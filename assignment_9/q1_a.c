#include<stdio.h>

int main(){

   char ch1[20],ch2[20];
   int i = 0;
  
  
   printf("Enter the string: ");
   fgets(ch1,sizeof(ch1),stdin);
   
    while(ch1[i]!='\n'){
  	
	  ch2[i]=ch1[i];
	  i++;
  }

  printf("%s\n",ch2);
  
 
	return 0;
}

