#pragma once
#include "../inc/deleteAddressBook.h"

void deleteAddressBook(struct AddressBook* p) {
	cout << "是否清空通讯录中所有联系人：(1.确定 2.取消)" << endl;
	int choice;
	cin >> choice;

	if (choice == 1) {
		// 做逻辑清空即可，将size置为0，之后添加数据将会从数组初识位置开始进行覆盖
		p->size = 0;
		cout << "清空完毕！" << endl;
	}
	else {
		cout << "取消清空通讯录~" << endl;
	}
	system("pause");
	system("cls");
}