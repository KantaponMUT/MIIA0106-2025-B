#include <iostream>
#include <string>
using namespace std;

int main() {
	for (int i = 10; i >= 0; i--) {
		if (i % 2 == 0) {
			cout << i;
			if (i > 0) {
				cout << ",";
			}
		}
	}
	return 0;
}
