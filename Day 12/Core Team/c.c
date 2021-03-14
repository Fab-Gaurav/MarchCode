#include <stdio.h>

int main()
{
	int n, m, i, j, flag;
	printf("Enter lower bound ");
	scanf("%d", &n);
	printf("Enter upper bound ");
	scanf("%d", &m);
    printf("\nPrime numbers between %d and %d are " ,n,m);
	for (i = n; i <= m; i++) {
		if (i == 1 || i == 0)
			continue;
        flag = 1;
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d \t", i );
	}

	return 0;
}