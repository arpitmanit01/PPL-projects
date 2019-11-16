#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class sample {
private:
	int n;
public:
	sample() {
	}
	sample(int n) {
		this->n = n;
	}

	sample operator+(sample obj) {
		sample result;
		result.n = this->n + obj.n;
		return result;
	}
	friend sample operator+(int, sample);
	sample operator-(sample obj) {
		sample result;
		result.n = this->n - obj.n;
		return result;
	}
	sample operator*(sample obj) {
		sample result;
		result.n = this->n * obj.n;
		return result;
	}
	sample operator/(sample obj) {
		sample result;
		result.n = this->n / obj.n;
		return result;
	}

	int display() {
		return n;
	}
};

sample operator+(int a, sample s) {
	sample result;
	result.n = s.n + a;
	return result;
}

int main() {

	sample obj1(2), obj2(4), obj3(9), obj4;
	obj4 = obj3 * obj2 + obj2 / obj1;
	cout << "Value in Obj1 : " << obj1.display() << endl;
	cout << "Value in Obj2 : " << obj2.display() << endl;
	cout << "Value in Obj3 : " << obj3.display() << endl;
	cout << "Value in Obj4 : " << obj4.display() << endl << endl;

	obj4 =  3 + obj2 - obj1 ;
	cout << "Value in Obj1 : " << obj1.display() << endl;
	cout << "Value in Obj2 : " << obj2.display() << endl;
	cout << "Value in Obj3 : " << obj3.display() << endl;
	cout << "Value in Obj4 : " << obj4.display() << endl << endl;
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}