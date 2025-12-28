#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO
	cout << "Value of score   =\t" << score << endl;
    cout << "Value of *ptr    =\t" << *ptr << endl;

    cout << "address of score =\t" << *ptr << endl;
    cout << "address of score =\t" << &score << endl;
    return 0;
}
