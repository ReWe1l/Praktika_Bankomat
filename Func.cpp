#include "Header.h"

map<int, int> BANC::withdraw(int amount) { // ����� withdraw ������ BANC, ���������� map � �������������� ������� � ����������, ��������� ���� �������� - ����� ��� ������.
    vector<int> denominations = { 5000, 1000, 500, 100, 50, 10 }; 
    map<int, int> result; // �������� map ��� �������� ���������� ������ �����.

    for (int denom : denominations) { // ���� �� ���������.
        int count = amount / denom; // ���������� ���������� ����� ������� ��������.
        if (count > 0) { 
            result[denom] = count; // ���������� ���������� ����� ������� �������� � map.
            amount %= denom; // ��������� ������� ����� ����� ������ ������ �����.
        }
    }

    return result;
}

int vivod() {

    BANC banc;
    int amount;

    cout << "������� ����� ��� ������: ";
    cin >> amount;

    map<int, int> result = banc.withdraw(amount); 

    cout << "����������� ����� " << amount << " ������ ���� ������� ������!" << endl << endl;

    cout << "������ ������ �� ����� " << amount << " ������" << ":\n";
    for (const auto& pair : result) { // ���� �� ��������� map result.
        cout << pair.first << " ������: " << pair.second << " ��.\n";
    }
   
    return 0;
}