#include <iostream>

using namespace std;

bool isPrime(int n) {
	if (n == 0 || n == 1) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}


	return true;
}

int main()
{
	const int SIZE = 100;
	int primes[SIZE];
	int count = 0;
	int num = 2;

	while (count < SIZE) {
		if (isPrime(num)) {
			primes[count] = num;
			count++;
		}
		num++;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << primes[i] << endl;
	}

	return 0;
}
