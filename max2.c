// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[100],n,i,index,smax;
	printf("N:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=1;i<n;i++) {
	    if(a[i]>max) {
	        max=a[i];
	        //index=i;
	    }
	    smax=max;
	    if(a[i]!=max ) smax=a[i];
	}
	/*int max1=a[0];
	for(i=0;i<n;i++) {
	    if(i == index) continue;
	    if(a[i]>=max1) {
	        max1=a[i];
	    }
	}*/
	printf("Max=%d",smax);
    return 0;
}
