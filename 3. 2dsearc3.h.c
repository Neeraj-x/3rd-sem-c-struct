#include <stdio.h>

int main()
{
	int a[40][40], count = 0, item, r, c, i, j;
	printf("Enter how many rows adn column:\n");
	scanf("%d%d", &r, &c);
	printf("\n enter matrix elements");
	for (int i = 0; i < r; i++)
	for (int j = 0; j < c; j++)
		scanf("%d", &a[i][j]);
	printf("\n entered matrix");

	for (int i = 0; i < r; i++)
	for (int j = 0; j < c; j++)
		printf("%d", &a[i][j]);
	
printf("Enter element to search");
	scanf("%d", &item);
}
