#pragma once
#include "../inc/displayContacts.h"

void displayContacts(struct AddressBook* p) {
	// 如果0条记录，则显示记录为空。
	if (p->size == 0) {
		cout << "记录为空！" << endl;
		system("pause");
		system("cls");
		return;
	}
	else {
		// 获取通讯录结构体，遍历联系人结构体数组，打印信息
		for (int i = 0; i < p->size; i++) {
			cout << "联系人姓名：" << p->contactsArr[i].name
				<< "\t性别：" << p->contactsArr[i].sex
				<< "\t年龄：" << p->contactsArr[i].age
				<< "\t电话：" << p->contactsArr[i].tel
				<< "\t住址：" << p->contactsArr[i].address << endl;
		}

		system("pause");
		system("cls");
	}
}