#include "logic.h"

int main() {
	int a, b, c;

	cout << "input three numbers: ";
	cin >> a >> b >> c;

	
	get_in_desc_order(&a,&b,&c);

	cout << "after: " << a << "  " << b << "  " << c << endl;

	return 0;
}