#pragma once
#include "../inc/deleteContact.h"

void deleteContact(struct AddressBook* p) {
	string name;
	cout << "请输入想删除的联系人姓名：" << endl;
	cin >> name;
	int result = isExist(p, name);

	if (result== -1) {
		cout << "查无此人！" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "查到此人！" << endl;
		int select = 0;
		cout << "是否进行删除：(1.确认 2.取消)" << endl;
		cin >> select;
		if (select == 1) {
			// 整体数据左移来进行覆盖删除
			for (int i = result; i < p->size; i++) {
				p->contactsArr[i] = p->contactsArr[i + 1];
			}
			p->size--;
			cout << "删除成功！" << endl;
		}
		system("pause");
		system("cls");
	}
}