#include <iostream>
#include "mult.h"
using namespace std;

int main() {

	double x = 0, y = 0;

	cout << "かけたい値を2つ入力してください。 > " << endl;
	cin >> x >> y;

	cout << "積は" << Mult(x, y) << "です。" << endl;
}