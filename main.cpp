// Лабораторная работа № 1. Вариант 21.
// Выполнила: Плешивцева С. В., группа ПИ-62.
#include <iostream>
using namespace std;

// ===== Расчётные функции варианта =====

// Путь при равномерном движении
double distance(double v, double t) {
    return v * t;
}

// Скорость при равномерном движении
double speed(double s, double t) {
    return s / t;
}

// Время при равномерном движении
double travelTime(double s, double v) {
    return s / v;
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double v, t, s;

    do {
        cout << "\n--- Программа расчётов. Вариант 21 ---\n";
        cout << "1. Путь (s = v * t)\n";
        cout << "2. Скорость (v = s / t)\n";
        cout << "3. Время движения (t = s / v)\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите скорость v и время t: ";
            cin >> v >> t;
            cout << "Путь = " << distance(v, t) << "\n";
            break;
        case 2:
            cout << "Введите путь s и время t: ";
            cin >> s >> t;
            if (t == 0) {
                cout << "Ошибка: время не может быть равно нулю.\n";
            }
            else {
                cout << "Скорость = " << speed(s, t) << "\n";
            }
            break;
        case 3:
            cout << "Введите путь s и скорость v: ";
            cin >> s >> v;
            if (v == 0) {
                cout << "Ошибка: скорость не может быть равна нулю.\n";
            }
            else {
                cout << "Время = " << travelTime(s, v) << "\n";
            }
            break;
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}
