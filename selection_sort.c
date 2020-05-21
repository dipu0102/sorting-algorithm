#include<stdio.h>

int main()
{
	int a[50];
	int n , i , j ,k, temp; 
	
	printf("Enter the number of value:");
	scanf("%d",&n);
	printf("enter the value:\n");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j = i+1 ; j < n; j++)
		{
			if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;	
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