<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
>>>>>>> 89e03a71a6efc37b7521a312921eefd84af14811
