#pragma once
#include "../inc/addContact.h"

void addContact(struct AddressBook* p) {
	// 首先判断通讯录是否存满
	if (p->size == MAX) {
		cout << "通讯录已存满！请删除部分联系人信息后再添加~";
		return;
	}

	string name;
	string sex;
	int age = 0;
	string tel;
	string address;

	cout << "请输入姓名：" << endl;
	cin >> name;

	cout << "请输入性别：（1.男 2.女）" << endl;
	string sexSeed[] = { "男", "女" };
	int sexSelect = 0;
	while (true) {
		cin >> sexSelect;
		if (sexSelect == 1 || sexSelect == 2) {
			break;
		}
		else {
			cout << "输入有误，请重新输入：" << endl;
		}
	}
	
	sex = sexSeed[sexSelect-1];

	cout << "请输入年龄：" << endl;
	cin >> age;

	cout << "请输入电话：" << endl;
	regex pattern("^1[3-9]\\d{9}$");
	while (true) {
		cin >> tel;
		bool isMatch = regex_match(tel, pattern);
		if (isMatch) {
			break;
		}
		else {
			cout << "输入电话格式不规范，请重新输入：" << endl;
		}
	}

	cout << "请输入地址：" << endl;
	cin >> address;

	// 根据输入信息新建一条联系人信息
	struct Contact contact;
	contact.name = name;
	contact.sex = sex;
	contact.age = age;
	contact.tel = tel;
	contact.address = address;

	p->contactsArr[p->size] = contact;
	p->size++;

	cout << "添加成功~" << endl;

	system("pause");
	system("cls");
}