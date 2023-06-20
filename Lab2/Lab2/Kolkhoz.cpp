#include "Kolkhoz.h"
void cls() {
	system("CLS");
}

istream& operator >> (istream& in, Kolkhoz& ob) {
	cout << "��������: "; in >> ob.name;
	cout << "������� ����: "; in >> ob.type;
	cout << "�������� ��������: "; in >> ob.square;
	cout << "�������� �����: "; in >> ob.count;
	cout << endl;
	return in;
}
ostream& operator << (ostream& out, Kolkhoz& ob) {
	out << ob.name << " " << ob.type << " " << ob.square << " " << ob.count << endl;
	return out;
}
Kolkhoz Kolkhoz::operator = (Kolkhoz& ob) {
	name = ob.name;
	type = ob.type;
	square = ob.square;
	count = ob.count;
	return *this;
}

Kolkhoz operator + (Kolkhoz& ob1, Kolkhoz& ob2) {
	Kolkhoz temp;
	temp.name = ob1.name + ob2.name;
	temp.type = ob1.type + ob2.type;
	temp.square = ob1.square + ob2.square;
	temp.count = ob1.count + ob2.count;
	return temp;
}
Kolkhoz operator ==(Kolkhoz& ob1, Kolkhoz& ob2) {
	if (ob1.type != ob2.type)
	{
		cout << "������! ������ �� ��������� (������� ����)";
	}
	else if (ceil(ob1.square) != ceil(ob2.square))
	{
		cout << "������! ������ �� ��������� (�������� ��������)";
	}
	else if (ceil(ob1.count) != ceil(ob2.count))
	{
		cout << "������! ������ �� ��������� (�������� �����)";
	}
	else if (ob1.name != ob2.name)
	{
		cout << "������! ������ �� ��������� (��������)";
	}
	else cout << "��������� �������";
	return ob1;
}
//int Provodnik::operator [] (Provodnik& o1) {
//	int k;
//	k = o1.name.length();
//	return k;
//}
int Kolkhoz::operator [] (int i) {
	int k;
	k = name.length();
	return k;
}
Kolkhoz Kolkhoz::operator () (string _name, float _dangerZone, int _movementEl, int _movementDir) {
	name = _name;
	type = _dangerZone;
	square = _movementEl;
	count = _movementDir;
	return *this;
}
void Kolkhoz::PrintAll(void) {
	cout << name << " ";
	cout << type << " ";
	cout << square << " ";
	cout << count << " ";
}