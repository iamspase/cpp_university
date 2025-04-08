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
	int arr[SIZE];
	int count = 0;

	while (count < SIZE) {
		if (isPrime(count)) {
			arr[count] = 1;
		}
		else {
			arr[count] = 0;
		}

		count++;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
