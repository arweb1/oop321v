// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Kolkhoz.h"
int main()
{
	setlocale(0, "");
	string name;
	float dz;
	int moveEl;
	int moveDir;
	int q1, q2;
	int chooseId;
	Kolkhoz obj[N];
	cls();
	while (true) {
		cout << "������� �������� ��������:\n1. ���������� ��������� ���������� �����.\n2. ���������� ��������� ���������� ������.\n3. ���������� ��������� ������������ (==).\n4. ���������� ��������� ������������.\n5. ���������� ��������� �����.\n6. ���������� ��������� '()'.\n7. ���������� ��������� '[]'" << endl;
		cin >> chooseId;
		switch (chooseId) {
		case 1:
			cout << "\n���������� ��������� ���������� ����� '>>'.";
			cout << "\n������� ����� ���������� ������: ";
			cin >> q1;
			if ((q1 > N - 1) || (q1 < 0)) { cout << "������! ���������� � ����� �������� �� ����������."; exit(-1); }
			cin >> obj[q1];
			break;
		case 2:
			cout << "\n���������� ��������� ���������� ������ '<<'.";
			cout << "\n������� ����� ���������� ������: ";
			cin >> q1;
			if ((q1 > N - 1) || (q1 < 0)) { cout << "������! ���������� � ����� �������� �� ����������."; exit(-1); }
			cout << obj[q1];
			break;
		case 3:
			cout << "���������� ��������� ������������ '=='.\n";
			cout << "������� ������ ����������� ������ ������� ����� ��������\n";
			cin >> q1;
			cin >> q2;
			if (q1 != q2 && q1 >= 0 && q2 >= 0) {
				obj[q1] == obj[q2];
			}
			else {
				cout << "���������� ������ �����" << endl;
			}
			break;
		case 4:
			cout << "���������� ��������� �������������� '='.\n";
			cout << "������� ������ ����������� ������: ���������� � ����������\n";
			cin >> q1;
			cin >> q2;
			if (q1 != q2 && q1 >= 0 && q2 >= 0) {
				obj[q1] = obj[q2];
			}
			else {
				exit(-1);
			}
			break;
		case 5:
			cout << "���������� ��������� ����� '+'.\n";
			cout << "������� ������ ����������� ������: ������� ����� �������\n";
			cin >> q1;
			cin >> q2;
			if (q1 >= 0 && q2 >= 0 && q1 < N && q2 < N) {
				Kolkhoz obj2 = obj[q1];/////////////////////////////////////
				cout << obj2;
			}
			cout << endl;
			break;
		case 6:
			cout << "���������� ��������� '()'" << endl;
			for (int i = 0; i < N; i++) {
				cout << "��������, ������� ����, �������� ���������, �������� �����: ";
				cin >> name;
				cin >> dz;
				cin >> moveEl;
				cin >> moveDir;
				obj[i].operator()(name, dz, moveEl, moveDir);
			}
			break;
		case 7:
			Kolkhoz ob2;
			cout << "���������� ��������� '[]'" << endl;
			for (int i = 0; i < N; i++) {
				cout << obj[i][2] << endl;
			}
			break;
		}
	}
	return 0;
}
