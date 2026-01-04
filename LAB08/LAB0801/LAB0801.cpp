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
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cout << "Enter ID: ";
	cin >> s1.id;

	cout << "Enter Nickname: ";
	cin >> s1.ninkname;

	cout << "Enter Line ID: ";
	cin >> s1.lineid;

	cout << "Enter Phone: ";
	cin >> s1.phone;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
	cout << "ID\tninkname\tLine ID\tPhone \n";
	cout << s1.id << "\t" << s1.ninkname << "\t" << s1.lineid << "\t" << s1.phone << "\n";

    return 0;
}

