#include<stdio.h>
int SumOfArray(int num){
	return num;
}
void main(){
	int n,sum=0,i;
	printf("Enter the Size of Array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the Elements: ");
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the Element A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("\nThe Sum of Array is : %d",SumOfArray(sum));
}
