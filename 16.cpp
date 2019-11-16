#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

class account {
protected:
	string name;
	string acc_no;
	double bal;
	
public:
	account(string a, string b,double c) {
		name = a;
		acc_no = b;
		bal = c;
	}
};

class Saving_Acc:public account{
public:
	Saving_Acc(string a, string b, double c) :account(a, b, c) {
		
	}

	void monthspassed(int n) {
		bal = bal * pow(1 + (0.06 / 12), n);
		cout << "Updated Balance after " << n << " months : Rs " << bal << endl;
	}

	void withdraw(int n) {
		bal -= n;
		cout <<     "Updated Balance : Rs " << bal << endl;
		if (bal < 2000) {
			bal -= 100;
			cout << "Fine imposed    : Rs 100" << endl;
			cout << "Updated Balance : Rs " << bal << endl;
		}
	}
	void deposit(int n) {
		bal += n;
		cout << "Updated Balance : Rs " << bal << endl;
	}
	void printdata() {
		cout << "Name            : " << name << endl;
		cout << "Account Number  : " << acc_no << endl;
		cout << "Type            : Saving Acc" << endl;
		cout << "Cheque Book     : Not Available" << endl;
		cout << "Balance         : Rs " << bal << endl;
	}

};

class Current_Acc :public account {
public:
	Current_Acc(string a, string b, double c) :account(a, b, c) {

	}

	void monthspassed(int n) {
		cout << "Updated Balance after " << n << " months : " << bal << endl;
	}

	void withdraw(int n) {
		bal -= n;
		cout << "Updated Balance : Rs " << bal << endl;
		if (bal < 2000) {
			bal -= 100;
			cout << "Fine imposed    : Rs 100" << endl;
			cout << "Updated Balance : Rs " << bal << endl;
		}
	}
	void deposit(int n) {
		bal += n;
		cout << "Updated Balance : Rs " << bal << endl;
	}
	void printdata() {
		cout << "Name            : " << name << endl;
		cout << "Account Number  : " << acc_no << endl;
		cout << "Type            : Current Acc" << endl;
		cout << "Cheque Book     : Available" << endl;
		cout << "Balance         : Rs " << bal << endl;
	}

};
int main() {
	Saving_Acc p1("Rahul Sharma", "1562487564", 5800);
	Current_Acc p2("Ajay Dubey", "1347895634", 6500);
	p1.printdata();
	cout << endl;
	p1.deposit(4500);
	p1.withdraw(2000);
	p1.withdraw(6500);
	p1.monthspassed(24);
	cout << endl << endl;;

	p2.printdata();
	cout << endl;
	p2.deposit(4250);
	p2.withdraw(2100);
	p2.withdraw(6400);
	cout << endl;
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}