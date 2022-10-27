#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k =  "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += abs(1+N/k);
		i++;
	}
	cout << S << endl;
		S = 0;
	i= k;
	do {
		S += abs(1 + N / k);
		i++;
	} while (1 <= N);
	cout << S << endl;
	S = 0;
	for (i= N; i = N; i++)
	{
		S += abs(1 + N / k);
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += abs(1 + N / k);
	}
	cout << S << endl;
	return 0;
}