#include<stdio.h>
int main()
{ 
	int a[20],b[20],c[40],a1,a2,j,i;
	printf("Enter the Number of elements forArray 1: ");
	scanf("%d",&a1);
	printf("Enter the Number of elements forArray 2: ");
	scanf("%d",&a2);
	
	printf("Enter The elements for array 1:");
	for(int i=0;i<a1;i++) scanf("%d",&a[i]);
	
	printf("Enter The elements for array 2:");
	for(int j=0;j<a2;j++) scanf("%d",&b[j]);
	
	
	for(i=0;i<a1;i++)
	{c[i]=a[i];
	if(i==a1-1){
		for(int j=0;j<a2;j++)
	c[j+a1]=b[j];
	}
	}
	printf("Appended array is:");
	for(i=0;i<a1+a2;i++)
	{
		printf("%d | ",c[i]);
	}
	
	
	
	
}
