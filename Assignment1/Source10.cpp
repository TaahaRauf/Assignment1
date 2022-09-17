#include <iostream>
using namespace std;
int main() {
	int var1 = 5;
	int var2 = 10;
	cout << "Var 1 before swap is " << var1 << " and Var2 is " << var2 <<endl;

	swap(var1, var2);
	cout << "Var 1 after swap is " << var1 << " and Var2 is " << var2;
	return 0;
}