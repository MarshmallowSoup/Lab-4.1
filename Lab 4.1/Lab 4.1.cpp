#include <iostream>
#include <cmath>

using namespace std;
 
int main(){
	double i, S, N;
	cout << "N = "; cin >> N;

	i = N;
	S = 0;
		
	while (i <= 22) {
		S += sqrt(i * i + N * N) / i;
		i++;
	}

	cout << "S = " << S << endl;
	i = N;
	S = 0;

	do {
		S += sqrt(i * i + N * N) / i;
		i++;
	} while (i <= 22);

	cout << "S = " << S << endl;
	i = N;
	S = 0;

	for (i = N; i <= 22; i++)
	{
		S += sqrt(i * i + N * N) / i;
	}
	cout << "S = " << S << endl;
	S = 0;

	for (i = 22; i >= N; i--)
	{
		S += sqrt(i * i + N * N) / i;
	}

	cout << "S = " << S << endl;
	S = 0;

	return 0;
}