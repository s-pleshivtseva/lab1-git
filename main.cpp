// Лабораторная работа № 1. Вариант 21.
// Выполнила: Плешивцева С. В., группа ПИ-62.
#include <iostream>
using namespace std;

// ===== Расчётные функции варианта =====

// Путь при равномерном движении
double distance(double v, double t) {
    return v * t;
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double v, t, s;

    do {
        cout << "\n=== Вариант 21: расчёты для равномерного движения ===\n";
        cout << "1. Путь (s = v * t)\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите скорость v и время t: ";
            cin >> v >> t;
            cout << "Путь = " << distance(v, t) << "\n";
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
