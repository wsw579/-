#include <iostream>
#include <string>

using namespace std;

#include "Login.h"    

string Login::id=" ";  //static������� �ʱ�ȭ 
int Login::pw =0;
bool Login::comfirm=false; 

void Login::signup(string name, int date) {   
	if (comfirm == true) {
		cout << "�̹� ȸ�������� �Ǿ��ֽ��ϴ�. Ż���ϱ� ������ ȸ������ �Ұ��� �մϴ�." << endl;
	}
	comfirm = true;
	id = name;
	pw = date;
	cout << id <<  "ȸ������ �Ϸ�~!" << endl;
	cout << endl;
}

int Login::login(string name, int date) {
	if (id == name && pw == date) {
		cout << "login ���� ~! " << endl;
		return 0;
	}
	else {
		cout << "login ���� ! login���������� diary�� ����Ҽ������ϴ�. " << endl;
		return -1;
	}
}
void Login::pwModity(int newpassword){
	if (pw == newpassword) {
		cout << "���� password�� �����ϴ�. ���ο� password�� �Է����ּ��� !! " << endl;
	}
	else {
		pw = newpassword;
		cout << "��й�ȣ ���� �Ϸ�~! " << endl;
	}
}
void Login::withDraw() {
	cout << "Ż��Ǿ����ϴ�. �̿����ּż� �����մϴ�. " << endl;
}