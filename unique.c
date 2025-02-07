#include <stdio.h>

int main() {
    int a[100],b[100],n,i,j,cur,flag;
	printf("N:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) {
	    cur = a[i];
	    flag=1;
	    for(j=0;j<n;j++) {
	        if(i==j) continue;
	        if(cur == a[j]) flag=0;
	    }
	    if(flag==1) printf("%d\t",cur);
	}
    return 0;
}
