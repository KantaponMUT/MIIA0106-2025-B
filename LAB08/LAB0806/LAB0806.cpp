#include <iostream>
#include <string>
using namespace std;

struct Student {
    //TODO 1) àµÔÁ field ã¹ struct Student ãËé¤Ãº: studentID, nickname
    string studentID;
    string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    // TODO 2) ãªé pointer p ªÕéä»·Õè s1
        // TODO: p = &s1;
    p = &s1;

    // TODO 3) ¡ÓË¹´¤èÒâ´Âãªé p->
        // TODO: p->studentID = ...
        // TODO: p->nickname = ...

    p->studentID = "6812100017";
    p->nickname = "Palm";

    //(*p).nickname = "Bird"; // µÑÇÍÂèÒ§¡ÒÃãªé (*p).field
    //(*p).studentID = "62050124";

    // TODO 4) áÊ´§¼Åâ´Âãªé p->
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}
