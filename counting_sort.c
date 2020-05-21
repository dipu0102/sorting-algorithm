#include<stdio.h>
//void counting_sort(int [],int,int [],int);
int main(){
	int A[]={5,9,4,5,3,6,8,5,4,8,7,4,6,9,7};
	int B[15];
	int K=10;
	int N=15;
	int i;
	counting_sort(A,N,B,K);
	for(i=0;i<N;i++){
		printf(" %d",B[i]);
	}
}
void counting_sort(int A[],int N,int B[],int K){
	int i,j,c[K];
	for(i=0;i<K;i++){
		c[i]=0;
	}
	for(j=0;j<N;j++)
		c[A[j]]=c[A[j]]+1;
	for(i=1;i<K;i++)
		c[i]=c[i]+c[i-1];
	for(j=N-1;j>=0;j--){
		B[c[A[j]]-1]=A[j];
		c[A[j]]=c[A[j]]-1;
	}
		
}