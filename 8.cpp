#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

int getdig(int n) {
	int dig=0;
	while (n) {
		n = n / 10;
		dig++;
	}
	return dig;
}

bool chkarm(int n) {
	int sum = 0;
	
	int dig = getdig(n);
	int t = n;
	while (t) {
		sum += pow(t % 10, dig);
		t = t / 10;
	}
	return n == sum;
}


int main() {
	for (int i = 1; i < 1000; i++) {
		if (chkarm(i)) { cout << i << "\t"; }
	}
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}
