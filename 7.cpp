#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

int fact(int n) {
	if (n == 0)return 1;

	return n * fact(n - 1);
}

int getseriessum(int pos) {
	int sum = 0;
	
	for (int i = 0; i <= pos - 1; i++) {
		sum += fact(i);
	}
	return sum;
}
int main() {
	cout << "Sum till 5th term : " << getseriessum(5) << endl;
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}
