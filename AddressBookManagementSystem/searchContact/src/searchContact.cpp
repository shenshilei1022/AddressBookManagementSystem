#pragma once
#include "../inc/searchContact.h"

void searchContact(struct AddressBook* p) {
	cout << "������Ҫ���ҵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int result = isExist(p, name);
	if (result != -1) {
		cout << "�鵽����!" << endl;
		cout << "��ϵ��������" << p->contactsArr[result].name
			<< "\t�Ա�" << p->contactsArr[result].sex
			<< "\t���䣺" << p->contactsArr[result].age
			<< "\t�绰��" << p->contactsArr[result].tel
			<< "\tסַ��" << p->contactsArr[result].address << endl;
	}
	else {
		cout << "���޴���!" << endl;
	}
	system("pause");
	system("cls");
}