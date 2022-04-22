#include<stdio.h>
int main(){
int c_273,first_273,last_273,middle_273,n_273,key_273,array[100];
printf("enter the number of elements");
scanf("%d",&n_273);
printf("enter %d integers",n_273);
for(c_273=0;c_273<n_273;c_273++)
scanf("%d",&array[c_273]);
printf("enter the value to find");
scanf("%d",&key_273);
first_273=0;
last_273=n_273-1;
middle_273=(first_273+last_273)/2;
while(first_273<=last_273)
{
if(array[middle_273]<key_273)
first_273=middle_273+1;
else
if(array[middle_273]==key_273)
{
printf("%d found at location %d",key_273,middle_273+1);
break;
}
else
last_273=middle_273-1;
middle_273=(first_273+last_273)/2;
}
if(first_273>last_273)
printf("not found! %d is not present in the list",key_273);
return 0;
}