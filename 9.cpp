#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;


bool chkperfect(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) { sum += i; }
	}
	return sum == n;
}


int main() {
	for (int i = 1; i < 100000; i++) {
		if (chkperfect(i)) { cout << i << "\t"; }
	}
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}
