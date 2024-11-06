#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    

    // Вывод верхней границы таблицы
    cout << "-" << setw(11) << setfill('-') << "-" << setw(10) << "-" << setfill(' ') << "-" << endl;

    // Вывод заголовка таблицы
    cout << "|" << setw(10) << "x" << "|" << setw(10) << "y" << "|" << endl;

    // Вывод разделительной горизонтальной линии
    cout << "-" << setw(11) << setfill('-') << "-" << setw(10) << "-" << setfill(' ') << "-" << endl;

    for (double x = 1.0; x <= 3.0; x += 0.1) {
        double y = x * x - pow(cos(M_PI * x), 2);
        cout << "|" << setw(10) << fixed << setprecision(5) << x
            << "|" << setw(10) << fixed << setprecision(5) << y << "|" << endl;

        // Вывод внутренней горизонтальной линии
        cout << "-" << setw(11) << setfill('-') << "-" << setw(10) << "-" << setfill(' ') << "-" << endl;
    }

    return 0;
}
