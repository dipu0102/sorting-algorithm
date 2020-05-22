#include<stdio.h>

int main()
{
	int a[] = {5 , 4 ,3 ,2 ,6,8 ,50,7};
	int n = 8 , i , j , temp; // length of the array
	
	for(i=0;i<n;i++)
	{
		for(j = 0 ; j < n-1-i; j++)
		{
			if(a[j] > a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;	
				}	
		}	
	}
	
	printf("\n");
	for(i = 0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	
return 0;	
}