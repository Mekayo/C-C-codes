#include<stdio.h>
int main(){
	
	int arr[100],n,key;
	printf("Enter the value of element :");
	scanf("%d",&n);
	printf("Enter %d integers: ",n);
	for(int i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<n;i++){
		key =arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=key;
			j--;
			}
		arr[j+1]=key;
	}
	printf("sorted array is ascending order ->\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
