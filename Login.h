#ifndef LOGIN_H   //���Ǻ� ������ 
#define LOGIN_H

class Login{  //Ŭ���� ����� 
public:
	static string id;
	static int pw;
	static bool comfirm; //���� ���� Ȯ��
	static void signup(string name, int date); //ȸ������ -> (�̸� , �������) 
	static int login(string name,int date); //�α��� id:�̸� password: �������
	static void pwModity(int pw); //��й�ȣ����
	static void withDraw(); //ȸ��Ż��
};
#endif