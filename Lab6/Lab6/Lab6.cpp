#include "Airport.h"

int main()
{
    setlocale(0, "");
    //AirConditioner obj[7];
    Airport temp;
    Airport obj[7];
    int r = 0;

    for (int a = 0; !a;) {
        system("cls");
        cout << endl;
        cout << "1. �������� ������\n";
        cout << "2. ����������� ����\n";
        cout << "3. ������� ����\n";
        cout << "4. �����\n";
        cout << "> ";
        int choose;
        cin >> choose;
        switch (choose) {
        case 1: {
            
            temp.autocomplete();
            r = 1; cout << endl; cout << "� ���� ���� ��������� ������." << endl; system("pause");
            break;
        }

        case 2: {
            if (r == 0) { cout << "� ���� ��� �������."; }
            else if (r == 1) { temp.Sort(); cout << endl; cout << "���� �����������." << endl; system("pause"); }
            break;
        }

        case 3: {
            if (r == 0) { cout << "� ���� ��� �������."; }
            else if (r == 1) { temp.Show(); cout << endl; cout << "���� �������� �� �����." << endl; system("pause"); }
            break;
        }

        case 4: {
            a = 1;
            cout << endl; cout << "������ ��������� ���������." << endl; system("pause");
            break;
        }

        default: {
            cout << "�������� �����"; cout << endl;
            break;
        }
        }
    }
}

