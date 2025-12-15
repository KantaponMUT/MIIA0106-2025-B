#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num = 17; // กำหนดตัวเลขแม่สูตรคูณ

    cout << "--- Multiplication Table of " << num << " ---\n";

    // วนลูปตั้งแต่ 1 ถึง 12
    for (int i = 1; i <= 12; i++)
    {
        // แสดงผลในรูปแบบ: 17 x 1 = 17
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    return 0;
}

