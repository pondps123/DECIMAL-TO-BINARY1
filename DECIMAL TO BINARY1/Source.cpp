#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void binary(int num_dec)
{
	int num_bin, i = 0, j = 0;
	int a[128], * b;
	if (num_dec > 0)
	{
		while (num_dec != 0)
		{
			num_bin = num_dec % 2;
			a[i] = num_bin;
			num_dec /= 2;
			i++;
		}
		b = a;
		i--;
		printf("Binary Number : ");
		for (i; i >= 0; i--)
		{
			printf("%d", *(b + i));
		}
	}
	else if (num_dec < 0)
	{
		int num_dec_new = abs(num_dec), n = num_dec_new;
		while (num_dec_new != 0)
		{
			num_bin = num_dec_new % 2;
			a[i] = num_bin;
			num_dec_new /= 2;
			i++;
			j++;
		}
		b = a;
		i--;
		j--;
		printf("Binary Number (%d) : ", n);
		for (i; i >= 0; i--)
		{
			printf("%d", *(b + i));
			if (*(b + i) == 0)
			{
				*(b + i) = 1;
			}
			else if (*(b + i) == 1)
			{
				*(b + i) = 0;
			}
		}
		printf("\n1's complement = ");
		i = j;
		for (i; i >= 0; i--)
		{
			printf("%d", *(b + i));
		}
		*b += 1;
		for (int k = 0; k <= j; k++)
		{
			if (*(b + k) == 2)
			{
				*(b + k) = 0;
				*(b + k + 1) += 1;
			}
		}
		printf("\n2's complement = ");
		for (j; j >= 0; j--)
		{
			printf("%d", *(b + j));
		}
	}
	else if (num_dec == 0)
	{
		printf("Binary Number : 0");
	}
	return;
}
int main()
{
	int a;
	printf("Enter Decimal Number : ");
	scanf("%d", &a);
	binary(a);
	return 0;
}