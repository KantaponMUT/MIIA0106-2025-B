// TODO 1) àµÔÁ field ã¹ struct Student ãËé¤Ãº: id, nickname, lineId, phone
// TODO 2) à¢ÕÂ¹¿Ñ§¡ìªÑ¹ printStudent(Student s) ãËéáÊ´§¼Å¤Ãº·Ø¡ field
// TODO 3) ã¹ main ÃÑº¢éÍÁÙÅ 1 ¤¹ áÅéÇàÃÕÂ¡ printStudent(s1)

#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO: à¢ÕÂ¹¿Ñ§¡ìªÑ¹¹Õé
void printStudent(Student s1) {
    // TODO
    cout << "ID\tnickname\tLine ID\t Phone \n";
    cout << s1.id << "\t" << s1.nickname << "\t" << s1.lineId << "\t" << s1.phone << "\n";
}
// TODO: à¢ÕÂ¹¿Ñ§¡ìªÑ¹¹Õé à¾×èÍÃÑº¢éÍÁÙÅ¹Ñ¡ÈÖ¡ÉÒ
void inputStudent(Student& s1) {
    cout << "Enter ID: ";
    cin >> s1.id;

    cout << "Enter Nickname: ";
    cin >> s1.nickname;

    cout << "Enter Line ID: ";
    cin >> s1.lineId;

    cout << "Enter Phone: ";
    cin >> s1.phone;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
    inputStudent(s1);

    cout << "\n=== Output (from function) ===\n";
    // TODO: àÃÕÂ¡ printStudent
    printStudent(s1);

    return 0;
}