#include <iostream> 
#include <string>
using namespace std;

// กำหนดสถานะที่เป็นไปได้ของเส้น (Enum)
enum LinePosition {
    LEFT,   // เส้นอยู่ทางซ้าย
    CENTER, // เส้นอยู่ตรงกลาง
    RIGHT   // เส้นอยู่ทางขวา
};

// --- ส่วนจำลองการทำงานของฮาร์ดแวร์ (Mock Hardware) ---

// ฟังก์ชันจำลองการอ่านค่าจากเซนเซอร์ (ในใช้งานจริงต้องเขียนอ่านค่าจาก Pin)
LinePosition getSensorData() {
    // ในสถานการณ์จริง โค้ดส่วนนี้จะอ่านค่า Digital/Analog จากเซนเซอร์
    // เพื่อดูว่าเซนเซอร์ตัวไหนเจอสีดำ
    // แต่ในที่นี้ขอสมมติค่าเพื่อทดสอบ Logic
    return CENTER;
}

// ฟังก์ชันสั่งมอเตอร์
void moveTurnLeft() {
    cout << "[Action] Turning LEFT: (Left Motor: STOP/BACK, Right Motor: FORWARD)" << endl;
}

void moveTurnRight() {
    cout << "[Action] Turning RIGHT: (Left Motor: FORWARD, Right Motor: STOP/BACK)" << endl;
}

void moveForward() {
    cout << "[Action] Moving FORWARD: (Left Motor: FORWARD, Right Motor: FORWARD)" << endl;
}

// --- ส่วนโปรแกรมหลัก (Main Logic) ---

int main() {
    cout << "--- Line Following Robot System Started ---" << endl;

    // จำลองการทำงานวนลูปไปเรื่อยๆ (เหมือน void loop ใน Arduino)
    // ในการทดสอบจริงอาจใช้ while(true)
    for (int i = 0; i < 5; i++) {

        // 1. INPUT: รับข้อมูลจากเซนเซอร์
        LinePosition linePos = getSensorData();

        // 2. PROCESS & OUTPUT: ตรวจสอบเงื่อนไขและสั่งการ
        if (linePos == LEFT) {
            // เงื่อนไข 1: เส้นอยู่ทางซ้าย -> เลี้ยวซ้าย
            cout << "Sensor Detects: LINE ON LEFT" << endl;
            moveTurnLeft();
        }
        else if (linePos == RIGHT) {
            // เงื่อนไข 2: เส้นอยู่ทางขวา -> เลี้ยวขวา
            cout << "Sensor Detects: LINE ON RIGHT" << endl;
            moveTurnRight();
        }
        else if (linePos == CENTER) {
            // เงื่อนไข 3: เส้นอยู่ตรงกลาง -> วิ่งตรง
            cout << "Sensor Detects: LINE CENTER" << endl;
            moveForward();
        }

        cout << "-----------------------------------" << endl;
    }

    return 0;
}
