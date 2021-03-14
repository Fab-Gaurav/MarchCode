#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, i, j, flag;
	cout << "Enter lower bound ";
	cin >> n;
	cout << "\nEnter upper bound  ";
	cin >> m;
   cout << "\nPrime numbers between "<< n << " and " << m << " are: ";
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
			cout << i << " ";
	}

	return 0;
}
