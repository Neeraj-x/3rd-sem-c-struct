#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c,r,j,i,s=0;
	printf("Enter Rows and columns");
	scanf("%d%d",&r,&c);
	printf("Enter the matrix:");
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
printf("The actual matrix:");
	for(i=0;i<r;i++){
		printf("\n");
		for(j=0;j<c;j++)
		printf("%d ",a[i][j]);
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			if(a[i][j]!=0){
			b[s][0]=a[i][j];
			b[s][1]=i;
			b[s][2]=j;
			s++;
		}
			
	}
	printf("\nThe sparse matrix is:");
	for(i=0;i<s;i++){
		printf("\n");
		for(j=0;j<c;j++)
			printf("%d ",b[i][j]);
	}
}
