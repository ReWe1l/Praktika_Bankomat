#include "Header.h"

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    BANC banc;
    int amount;

    cout << "Введите сумму для вывода: ";
    cin >> amount;

    map<int, int> result = banc.withdraw(amount); // Если это непонятно, то смотри в cpp и в h, там объясняется, что это такое.

    cout << "Минимальное количество купюр для вывода суммы " << amount << ":\n";
    for (const auto& pair : result) { // Цикл по элементам map result.
        cout << pair.first << " рублей: " << pair.second << " шт.\n";
    }

    return 0;
}