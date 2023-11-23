#include<stdio.h>
int main(){
	int n,i,a[100],j,t;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\nsorted list is:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nThe minimum number in list is: %d",a[0]);
	printf("\nThe maximum niumber in list is: %d",a[n-1]);
	return 0;
}
