#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	printf("Enter the array of decleration: ");
	scanf("%d",&n);
	int *p = (int*)malloc(n * sizeof(int));
	if(p == NULL){
		printf("Memory cannot be allocated\nMemory was exceed..!!");
	}else{
		printf("Enter the elements of array:");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("Enter %d element: ",i+1);
			scanf("%d",&*(p+i));
		}
		printf("Elemets of  array are \n");
		for(i=0;i<n;i++){
			printf("%d\n",*(p+i));
		}
	}
	return 0;
}
