#include<stdio.h>
int main(){
	int n,i,a[100],j,temp;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("original array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nsorted array is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
