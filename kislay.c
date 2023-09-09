#include<stdio.h> 
 
int main() 
{ 
 int num[10],cp[10],i; 
 
 for(i=0;i<10;i++) 
 { 
 printf("\n Enter number in an array num[%d] :",i); 
 scanf("%d",&num[i]); 
 cp[i]=num[i]; 
 } 
 for(i=0;i<10;i++) 
 { 
 printf(" \n Main array element = %d and Copied array element =%d ",num[i],cp[i]); 
 } 
return 0; 
}
