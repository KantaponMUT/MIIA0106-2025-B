#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string ninkname;
    string lineid;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
		cout << "Enter ID: ";
		cin >> students[i].id;

		cout << "Enter Nickname: ";
		cin >> students[i].ninkname;

		cout << "Enter Line ID: ";
		cin >> students[i].lineid;

		cout << "Enter Phone: ";
		cin >> students[i].phone;

        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    cout << "ID\tninkname\tLine ID\tPhone \n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].ninkname << "\t" << students[i].lineid << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }

    return 0;
}
