#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
#include <map>
#include <Windows.h>
using namespace std;

class BANC {
public:
    map<int, int> withdraw(int amount); // ����� withdraw ������ BANC, ���������� map � �������������� ������� � ����������, ��������� ���� �������� - ����� ��� ������.
};

int vivod();

#endif
