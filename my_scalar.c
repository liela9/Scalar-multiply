#include <stdio.h>
#define SIZE 100000
int scalar_product(int vec_1[SIZE], int vec_2[SIZE], int len);

int main(void)
{
	int i;
	int len;
	int vec_1[SIZE], vec_2[SIZE];
	
	printf("Please enter the vector's length");
	scanf("%d", &len);
	printf("Enter the first vector");
	for(i = 0; i < len; ++i)
		scanf("%d", &vec_1[i]);
	printf("Enter the second vector");
	for(i = 0; i < len; ++i)
		scanf("%d", &vec_2[i]);
	printf("%u\n", scalar_product(vec_1, vec_2, len));
}

int scalar_product(int vec_1[SIZE], int vec_2[SIZE], int len)
{
	int num = 0;
	for(int i = 0; i < len ; ++i)
		num += vec_1[i] * vec_2[i];

	return num;
}

















