#pragma once
#include "../inc/searchContact.h"

void searchContact(struct AddressBook* p) {
	cout << "请输入要查找的联系人姓名：" << endl;
	string name;
	cin >> name;
	int result = isExist(p, name);
	if (result != -1) {
		cout << "查到此人!" << endl;
		cout << "联系人姓名：" << p->contactsArr[result].name
			<< "\t性别：" << p->contactsArr[result].sex
			<< "\t年龄：" << p->contactsArr[result].age
			<< "\t电话：" << p->contactsArr[result].tel
			<< "\t住址：" << p->contactsArr[result].address << endl;
	}
	else {
		cout << "查无此人!" << endl;
	}
	system("pause");
	system("cls");
}