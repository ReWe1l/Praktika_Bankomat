#include "Header.h"

map<int, int> BANC::withdraw(int amount) { // Метод withdraw класса BANC, возвращает map с целочисленными ключами и значениями, принимает один параметр - сумму для снятия.
    vector<int> denominations = { 5000, 1000, 500, 100, 50, 10 }; 
    map<int, int> result; // Создание map для хранения результата выдачи купюр.

    for (int denom : denominations) { // Цикл по номиналам.
        int count = amount / denom; // Вычисление количества купюр данного номинала.
        if (count > 0) { 
            result[denom] = count; // Записываем количество купюр данного номинала в map.
            amount %= denom; // Вычисляем остаток суммы после выдачи данных купюр.
        }
    }

    return result;
}

int vivod() {

    BANC banc;
    int amount;

    cout << "Введите сумму для вывода: ";
    cin >> amount;

    map<int, int> result = banc.withdraw(amount); 

    cout << "Запрошенная сумма " << amount << " рублей была успешно выдана!" << endl << endl;

    cout << "Выданы купюры на сумму " << amount << " рублей" << ":\n";
    for (const auto& pair : result) { // Цикл по элементам map result.
        cout << pair.first << " рублей: " << pair.second << " шт.\n";
    }
   
    return 0;
}