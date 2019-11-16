#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

class matrix {
private:
	int row;
	int col;
	int** k;
public:
	matrix(int a, int b) {
		row = a;
		col = b;
		k = new int* [row];
		for (int i = 0; i < col; i++) {
			k[i] = new int[col];
		}
	}

	void setdata() {
		cout << "Input Data for " << row << "x" << col << " Matrix :" << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cin >> k[i][j];
			}
		}
	}

	void display() {
		
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << k[i][j] << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}

	int getrow() { return row; }
	int getcol() { return col; }

	matrix operator+(matrix m) {
		matrix result(row,col);
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				result.k[i][j] = k[i][j] + m.k[i][j];
			}
			
		}
		return result;
	}


	matrix operator*(matrix m) {
		matrix result(row, col);
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				result.k[i][j] = 0;
				for (int p = 0; p < col; p++) {
					result.k[i][j] += (k[i][p]) * (m.k[p][j]);
				}
			}
		}

		return result;
	}


};
int main() {
	matrix m1(3, 3);
	matrix m2(3, 3);
	matrix m3(3, 3);
	matrix m4(3, 3);
	
	m1.setdata();
	cout << "Matrix M1 : " << endl;
	m1.display();
	
	m2.setdata();
	cout << "Matrix M2 : " << endl;
	m2.display();

	m3 = m1 + m2;
	cout << "Addition of Matrix M1 and M2 : " << endl;
	m3.display();

	m4 = m1 * m2;
	cout << "Multiplication of Matrix M1 and M2 : " << endl;
	m4.display();

	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;

}

//Yeh Sample Input
//Input Data for 3x3 Matrix :
//7 4 3 6 8 1 5 9 7
//
//
//Input Data for 3x3 Matrix :
//6 7 4 8 3 2 5 1 9

