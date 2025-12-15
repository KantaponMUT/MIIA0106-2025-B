#include <iostream>
#include <string>
#include <cstdlib> // ไลบรารีสำหรับคำสั่ง rand() และ srand()
#include <ctime>   // ไลบรารีสำหรับ time()

using namespace std;

int main()
{
    // 1. ตั้งค่า Seed สำหรับการสุ่ม (เพื่อให้เลขไม่ซ้ำเดิมทุกครั้งที่รัน)
    srand(time(0));

    // 2. สุ่มเลข 1 ถึง 100 เก็บไว้ในตัวแปรลับ
    // rand() % 100 จะได้ค่า 0-99 ดังนั้นต้อง +1 เพื่อให้เป็น 1-100
    int secretNumber = rand() % 100 + 1;

    int guess;      // ตัวแปรเก็บเลขที่ผู้เล่นทาย
    int attempts = 0; // ตัวแปรนับจำนวนครั้งที่ทาย

    cout << "=== Welcome to Guess the Number Game! ===" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    // 3. เริ่มวนลูปให้ทายซ้ำๆ จนกว่าจะถูก (ใช้ do-while loop)
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++; // นับจำนวนครั้งเพิ่มขึ้น 1

        // 4. ตรวจสอบเงื่อนไข
        if (guess > secretNumber)
        {
            cout << "Too High! Try again." << endl; // ทายมากไป
        }
        else if (guess < secretNumber)
        {
            cout << "Too Low! Try again." << endl;  // ทายน้อยไป
        }
        else
        {
            // ทายถูก! (เงื่อนไขสุดท้าย)
            cout << "\nCONGRATULATIONS! You got it!" << endl;
            cout << "The secret number was: " << secretNumber << endl;
            cout << "You took " << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber); // ทำซ้ำตราบใดที่ยังทายไม่ถูก

    return 0;
}
