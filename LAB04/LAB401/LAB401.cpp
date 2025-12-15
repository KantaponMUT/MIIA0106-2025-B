#include <iostream>
using namespace std;

// --- ฟังก์ชันตรวจสอบจำนวนเฉพาะ (isPrime) ---
// รับค่า: จำนวนเต็ม n
// คืนค่า: true (ถ้าเป็นจำนวนเฉพาะ), false (ถ้าไม่เป็น)
bool isPrime(int n) {
    // 1. กรณีเลขน้อยกว่าหรือเท่ากับ 1 ไม่ใช่จำนวนเฉพาะ
    if (n <= 1) {
        return false;
    }

    // 2. วนลูปตรวจสอบตัวหาร ตั้งแต่ 2 ไปจนถึง รากที่สองของ n
    // (ใช้ i * i <= n เพื่อไม่ต้องเรียกฟังก์ชัน sqrt ซึ่งทำงานช้ากว่า)
    for (int i = 2; i * i <= n; i++) {
        // ถ้าหารลงตัว (เศษเป็น 0) แสดงว่ามีตัวประกอบอื่น
        if (n % i == 0) {
            return false; // ไม่ใช่จำนวนเฉพาะ
        }
    }

    // 3. ถ้าวนลูปจนครบแล้วไม่เจอตัวหารเลย แสดงว่าเป็นจำนวนเฉพาะ
    return true;
}

// --- ส่วนโปรแกรมหลักสำหรับทดสอบ ---
int main() {
    int number;

    cout << "=== Prime Number Checker ===" << endl;
    cout << "Enter a number: ";
    cin >> number;

    // เรียกใช้ฟังก์ชัน isPrime
    if (isPrime(number)) {
        cout << number << " is a PRIME number." << endl;
    }
    else {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}