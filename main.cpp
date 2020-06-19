#include <iostream>
#include <string>
#include <map>
using namespace std;

#include "Login.h" 
#include "Diary.h" 

int main() {
	Diary d;
	while (true) { // login�ϴ� �κ�  
		cout << endl;
		cout << "�������������� L O G I N ��������������" << endl;
		cout << "�� (1) Sign up           ��" << endl;
		cout << "�� (2) Login             ��" << endl;
		cout << "�� (3) Modify Password   ��" << endl;
		cout << "�� (4) End               ��" << endl;
		cout << "��������������������������������������������������" << endl;
		cout << endl;

		int nLogin;
		cout << "����Ͻ� ����� ����ּ��� : ";
		cin >> nLogin;

		switch (nLogin) {									// �Է��� nLogin�������� switch�� ����
		case 1: {											//ȸ������  
			string name;
			int birth;
			cout << "ȸ�������Ϸ��� ����� �̸� > ";
			cin >> name;
			cout << "ȸ�������Ϸ��� ����� ������� >";
			cin >> birth;
			Login::signup(name, birth);
			break;
		}
		case 2: {											//�α��� -> �α��� ���� �� ���̾ �ۼ�����
			string id;
			int pw,c;
			cout << " id > ";
			cin >> id;
			cout << " password > ";
			cin >> pw;
			c=Login::login(id, pw);
			if (c != -1) {
				while (true) {
					cout << " ======== �� " << Login::id << " 's  D I A R Y �� ========" << endl;
					cout << endl;
					cout << "          (1)  Diary ���� " << endl;
					cout << "          (2)  Diary �˻� " << endl;
					cout << "          (3)  Diary ����" << endl;
					cout << "          (4)  Diary ����" << endl;
					cout << "          (5)  Diary ��ü����" << endl;
					cout << "          (6)  Diary ����" << endl;
					cout << endl;
					cout << " ======== �� ============== �� ========" << endl;

					int nDiary;
					cout << "����Ͻ� ����� ����ּ��� : ";
					cin >> nDiary;

					switch (nDiary) {							 //�Է��� nDiary�� ������ switch�� ����
					case 1: {									 //���̾ ����
						int date;
						cout << "�����ϰ� ���� diary ��¥�� �Է��ϼ��� > ";
						cin >> date;
						string text;
						cout << date << "��¥�� diary ������ �Է��ϼ���." << date << "��¥�� ������ ����ϰ� ���� ���� > ";
						cin >> text;
						d.MakeDiary(date, text);
						break;
					}
					case 2: {									  //���̾ �˻�
						int date;
						cout << "� ������ �˻��ұ��? ��¥�� �Է��ϼ��� > ";
						cin >> date;
						d.SearchDiary(date);
						break;
					}
					case 3: {									  //���̾ ����
						int date, t;
						string text;
						cout << "� ������ �����ұ��? ��¥�� �Է��ϼ��� > ";
						cin >> date;
						t = d.SearchDiary(date);
						if (t != -1) {
							d.DeleteDiary(date);
							cout << "��¥" ;
							cin >> date;
							cout << "����";
							cin >> text;
							d.MakeDiary(date, text);
						}
						break;
					}
					case 4: {									  //���̾ ����
						int date, t;
						char check;
						cout << "� ������ �����ұ��? ��¥�� �Է��ϼ��� > ";
						cin >> date;
						t = d.SearchDiary(date);
						if (t != -1) {
							cout << "������ �����ұ�� ? (Y/N) > ";
							cin >> check;
							if (check == 'Y') {
								d.DeleteDiary(date);
							}
						}
						break;
					}
					case 5: {									 //���̾���� ��ü����		
						d.ShowAllDiary();
						break;
					}
					case 6: {									//���̾���� ����	
						cout << "diary �����մϴ�." << endl;
						return 0;
					}
					default: {
						cout << " �ءء� (1)~(6)�� �� �Է����ּ��� �ءء� " << endl;
						break;
					}
					}
				}
			}
			return 0;
		}
		case 3: {										//��й�ȣ ���� 
			int newPassword;
			cout << "���ο� password�� �Է��ϼ��� > ";
			cin >> newPassword;
			Login::pwModity(newPassword);
			break;
		}

		case 4: {										//����				
			cout << "���α׷��� �����մϴ�." << endl;
			return 0;
		}
		
		default: {
			cout << " �ءء� (1)~(4)�� �� �Է����ּ��� �ءء� " << endl;
			break;
		}
		}
	}
	
}

