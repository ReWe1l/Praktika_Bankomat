#include "Header.h"

map<int, int> BANC::withdraw(int amount) { // ����� withdraw ������ BANC, ���������� map � �������������� ������� � ����������, ��������� ���� �������� - ����� ��� ������.
    vector<int> denominations = { 5000, 1000, 100, 50, 10 }; // �������� ������� � ���������� �����.
    map<int, int> result; // �������� map ��� �������� ���������� ������ �����.

    for (int denom : denominations) { // ���� �� ���������.
        int count = amount / denom; // ���������� ���������� ����� ������� ��������.
        if (count > 0) { // ���� ���������� ������ ����.
            result[denom] = count; // ���������� ���������� ����� ������� �������� � map.
            amount %= denom; // ��������� ������� ����� ����� ������ ������ �����.
        }
    }

    return result;
}