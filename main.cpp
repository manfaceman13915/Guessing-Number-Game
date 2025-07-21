#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
    char playAgain;
    int guess;
    int choice;
    int minRange, maxRange;
    int tries;

    srand(time(0));

    do {
        tries = 0;
        minRange = 1;
        maxRange = 500;

        cout << "\n ==== เมนูเกม ==== \n";
        cout << "1. Easy: 1-50\n2. Medium: 1-100\n3. Hard: 1-500\n4. Difficult: 1-10,000\n0. ออกจากโปรแกรม\n";
        cout << "เลือกเมนู: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int secretNumber = rand() % 50 + 1;
                while (true) {
                    cout << "ทายเลข (1-50): ";
                    cin >> guess;
                    tries++;
                    if (guess == secretNumber) {
                        cout << "🎉 ถูกต้อง! ใช้ไปทั้งหมด " << tries << " ครั้ง" << endl;
                        break;
                    } else if (guess < secretNumber) {
                        cout << "🔼 สูงกว่านี้!" << endl;
                    } else {
                        cout << "🔽 ต่ำกว่านี้!" << endl;
                    }
                }
                break;
            }

            case 2: {
                int secretNumber = rand() % 100 + 1;
                while (true) {
                    cout << "ทายเลข (1-100): ";
                    cin >> guess;
                    tries++;
                    if (guess == secretNumber) {
                        cout << "🎉 ถูกต้อง! ใช้ไปทั้งหมด " << tries << " ครั้ง" << endl;
                        break;
                    } else if (guess < secretNumber) {
                        cout << "🔼 สูงกว่านี้!" << endl;
                    } else {
                        cout << "🔽 ต่ำกว่านี้!" << endl;
                    }
                }
                break;
            }

            case 3: {
                int secretNumber = rand() % 500 + 1;
                while (true) {
                    cout << "ทายเลข (1-500): ";
                    cin >> guess;
                    tries++;
                    if (guess == secretNumber) {
                        cout << "🎉 ถูกต้อง! ใช้ไปทั้งหมด " << tries << " ครั้ง" << endl;
                        break;
                    } else if (guess < secretNumber) {
                        minRange = guess + 1;
                        cout << "🔼 สูงกว่านี้! (ช่วง: " << minRange << " - " << maxRange << ")" << endl;
                    } else {
                        maxRange = guess - 1;
                        cout << "🔽 ต่ำกว่านี้! (ช่วง: " << minRange << " - " << maxRange << ")" << endl;
                    }
                }
                break;
            }

            case 4: {
                int secretNumber = rand() % 10000 + 1;
                while (true) {
                    cout << "ทายเลข (1-10,000): ";
                    cin >> guess;
                    tries++;
                    if (guess == secretNumber) {
                        cout << "🎉 ถูกต้อง! ใช้ไปทั้งหมด " << tries << " ครั้ง" << endl;
                        break;
                    } else if (guess < secretNumber) {
                        minRange = guess + 1;
                        cout << "🔼 สูงกว่านี้! (ช่วง: " << minRange << " - " << maxRange << ")" << endl;
                    } else {
                        maxRange = guess - 1;
                        cout << "🔽 ต่ำกว่านี้! (ช่วง: " << minRange << " - " << maxRange << ")" << endl;
                    }
                }
                break;
            }

            case 0:
                cout << "👋 ลาก่อน!" << endl;
                return 0;

            default:
                cout << "❌ ไม่มีเมนูนี้\n";
        }

        cout << "\nเล่นอีกครั้งไหม? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "ขอบคุณที่เล่นเกมครับ!" << endl;
    return 0;
}
