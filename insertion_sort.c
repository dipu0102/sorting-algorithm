#include<stdio.h>
int main(){
	int A[]={5,2,4,1,3};
	int size=5;
    insertion_sort(A,size);
}
void insertion_sort(int A[],int size){
	int j=0,i;
	int temp,k;
	for(i=1;i<size;i++){
		temp=A[i];
		j=i-1;
		while(j>=0 && A[j]>temp){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
	for(k=0;k<size;k++){
		printf(" %d ",A[k]);
	}
}