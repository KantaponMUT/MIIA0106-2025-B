#include <iostream>
#include <string>
#include <iomanip>
#include <limits> // เพิ่ม library นี้เพื่อใช้เคลียร์ buffer

using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "---------------------------\n";
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 5; // กำหนดจำนวนคนตรงนี้
    string name[N], id[N];
    double score[N];
    char grade[N];

    cout << "=== Input Data for " << N << " Students ===\n";

    for (int i = 0; i < N; i++)
    {
        cout << "\nStudent #" << (i + 1) << endl;

        cout << "Enter student name: ";
        // ใช้ getline เพื่อรับชื่อที่มีเว้นวรรคได้
        getline(cin >> ws, name[i]);

        cout << "Enter student ID: ";
        // เปลี่ยนมาใช้ getline กับ id เผื่อมีการเว้นวรรค และป้องกัน buffer ค้าง
        getline(cin >> ws, id[i]);

        cout << "Enter student score: ";
        // รับค่าคะแนน
        while (!(cin >> score[i])) {
            // ลูปป้องกันการกรอก Score ผิดประเภท (เช่นกรอกตัวอักษร)
            cout << "Invalid input. Please enter a number for score: ";
            cin.clear(); // ล้างสถานะ error ของ cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ทิ้งค่าขยะใน buffer
        }

        calculateGrade(score[i], grade[i]);
    }

    cout << "\n=== Display Data ===\n";
    for (int i = 0; i < N; i++)
    {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    return 0;
}