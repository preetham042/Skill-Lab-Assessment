#include<stdio.h>
void main() {
	int array[100],n,i;
	printf("N:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&array[i]);
	}
	
	printf("Array: ");
	for(i=0;i<n;i++) {
		printf("%d\t",array[i]);
	}
}
	
