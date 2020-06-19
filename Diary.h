#ifndef DIARY_H   //���Ǻ� ������ 
#define DIARY_H

#include<map>

class Diary {  //Ŭ���� ����� 
public:
	Diary();
	map<int, string> diaryMap; //int -> ��¥ string -> ������ ���̾���� �Է�
	map<int, string>::iterator it;
	map<int, int> like; 
	map<int, int>::iterator iter;
	void MakeDiary(int date,string text);
	void ShowAllDiary();
	int SearchDiary(int date);
	int ModifyDiary(int date,string text);
	int DeleteDiary(int date);
};
#endif