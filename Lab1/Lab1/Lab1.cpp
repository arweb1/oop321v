// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define N 3
#include "Kolkhoz.h"
int main()
{
    setlocale(0, "");
    string n;
    char dz;
    int moveEl;
    int moveDir;
    Kolkhoz provodnik[N];
    cout << "������� ��������� ��������: " << endl;
    cout << "1. ��������� �������� �������������" << endl;
    cout << "2. ������ �������� �������" << endl;
    cout << "> ";
    int choose;
    cin >> choose;
    switch (choose) {
    case 1: {
        string name1 = "����";
        string name2 = "�������";
        string name3 = "��������";
        char name1c = '�';
        char name2c = '�';
        char name3c = '�';
        provodnik[0].Set(name1, name1c, 300, 120);
        provodnik[1].Set(name2, name2c, 174, 27);
        provodnik[2].Set(name3, name3c, 56, 6);
        cout << "������ �������!" << endl;
        break;
    }

    case 2: {
        for (int i = 0; i < N; i++)
        {
            cout << "��������       ���        �������        ���. ����������:      ";
            cin >> n;
            cin >> dz;
            cin >> moveEl;
            cin >> moveDir;
            provodnik[i].Set(n, dz, moveEl, moveDir);
        }
        break;
    }
    default: {
        cout << "�������� �����";
        break;
    }
    }
    
    
    cout << "������� ������: " << endl;
    cout << "_______________________________________________________________\n";
    cout << "|              �������������������� �����������               |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "|   ��������       ���        �������        ���. ����������  |\n";
    cout << "|-------------------------------------------------------------|\n";
    for (int i = 0; i < N; i++)
    {
        provodnik[i].Print();
        cout << endl;
    }
    cout << "\n|-------------------------------------------------------------|\n";

    cout << "������ ������� ������ � ��������� ��������: " << endl;
    
    cout << "������� ������: " << endl;
    cout << "_______________________________________________________________\n";
    cout << "|              �������������������� �����������               |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "|   ��������       ���        �������        ���. ����������  |\n";
    cout << "|-------------------------------------------------------------|\n";
    for (int i = 0; i < N; i++)
    {
        provodnik[i].Get(n, dz, moveEl, moveDir);
        // provodnik[i].Print();
        cout << setw(10) << n << " ";
        cout << setw(10) << dz << " ";
        cout << setw(18) << moveEl << " ";
        cout << setw(17) << moveDir << " ";
        cout << endl;
    }
    cout << "\n|-------------------------------------------------------------|\n";
    system("pause");
}
