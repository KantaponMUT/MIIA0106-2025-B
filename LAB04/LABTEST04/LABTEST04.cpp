#include <iostream>
using namespace std;

int main()
{
    // 1. ประกาศตัวแปรเก็บผลรวม (ต้องเริ่มที่ 0 เสมอ)
    int sum = 0;

    // 2. วนลูปนับเลขตั้งแต่ 1 ถึง 100
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;  // เอาค่า i ในรอบปัจจุบัน ไปบวกเพิ่มใน sum
        // หรือเขียนย่อว่า sum += i; ก็ได้
    }

    // 3. แสดงผลลัพธ์สุดท้ายออกมา (ทำนอกลูป)
    cout << "Sum of 1 to 100 is: " << sum << endl;

    return 0;
}