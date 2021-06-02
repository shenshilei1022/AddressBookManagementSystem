#pragma once
#include "../inc/modifyContact.h"

void modifyContact(struct AddressBook* p) {
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;

	int result = isExist(p, name);

	if (result != -1) {
		cout << "查有此人！" << endl;
		cout << "联系人姓名：" << p->contactsArr[result].name
			<< "\t性别：" << p->contactsArr[result].sex
			<< "\t年龄：" << p->contactsArr[result].age
			<< "\t电话：" << p->contactsArr[result].tel
			<< "\t住址：" << p->contactsArr[result].address << endl;
		cout << "请对其信息做出修改：" << endl;

		string sex;
		int age = 0;
		string tel;
		string address;

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

		sex = sexSeed[sexSelect - 1];

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

		p->contactsArr[result].sex = sex;
		p->contactsArr[result].age = age;
		p->contactsArr[result].tel = tel;
		p->contactsArr[result].address = address;

		cout << "修改成功！" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}

	system("pause");
	system("cls");
}