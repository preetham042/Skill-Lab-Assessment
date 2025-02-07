#include <stdio.h>

int main() {
    int a[100],b[100],n,i,j=0,cur,flag;
	printf("N:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("A: ");
	for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}printf("\n");
	for(i=n-1;i>=0;i--) {
	    b[j++] = a[i];
	}
	
	printf("B: ");
	for(i=0;i<n;i++) {
		printf("%d\t",b[i]);
	}
    return 0;
}
