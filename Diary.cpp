#include <iostream>
#include <string>
#include<map>

using namespace std;

#include "Diary.h"    // ������ϰ� cpp���� �и� 

//Ŭ���� ������  
Diary::Diary() {
 it=diaryMap.begin();
 iter=like.begin();
}

void Diary::MakeDiary(int date, string text) {          
	if (diaryMap.find(date) == diaryMap.end()) { //diary�� ��¥ �ߺ������ʾƾ��Ѵ�.
		diaryMap.insert(make_pair(date, text)); 
		cout << date << "diary �����մϴ�. " << text << endl;
	}
	else {
		cout << date << "�� ��¥�� �̹� diary�� ������ �����մϴ�." << endl;
	}
}

void Diary::ShowAllDiary() {    
	cout << "diary ��ü ���� : " << diaryMap.size() << endl;
	cout << "diary ������ ������ �����ϴ� ~! " << endl;
	if (diaryMap.size() != 0) {
		for (auto it = diaryMap.begin(); it != diaryMap.end(); it++) {
			cout << "��¥ : " << it->first << " " << "diary���� : " << it->second << '\n';
		}
	}
}

int Diary::SearchDiary(int date) {               
	if (diaryMap.find(date) == diaryMap.end()) {
		cout << date << " ��¥�� diary�� �������� �ʽ��ϴ�. " << endl;
		date = -1;
		return date;
	}
	else {
		cout << date << " ��¥�� ������ [" << diaryMap[date] << "] �Դϴ� " << endl;
		return 1;
	}
}

int Diary::ModifyDiary(int date, string text) {
	if (diaryMap.find(date) == diaryMap.end()) {
		cout << date << " ��¥�� diary�� �������� �ʽ��ϴ�. " << endl;
		return -1;
	}
	else {
		it->second = text;
		SearchDiary(date);
		return 0;
	}
}
int Diary::DeleteDiary(int date) {
	if (diaryMap.find(date) == diaryMap.end()) {
		cout << date << " ��¥�� diary�� �������� �ʽ��ϴ�. " << endl;
		return -1;
	}
	else {
		cout << date << " ��¥�� diary�� �����մϴ�" << endl;
		diaryMap.erase(date);
		return 0;
	}
}
	

