#include <stdio.h>

int main() {
    int a[100],n,i,sum=0;
	printf("N:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("sum=%d",sum);
    return 0;
}
