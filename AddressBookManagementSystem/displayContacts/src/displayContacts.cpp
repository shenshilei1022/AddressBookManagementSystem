#pragma once
#include "../inc/displayContacts.h"

void displayContacts(struct AddressBook* p) {
	// ���0����¼������ʾ��¼Ϊ�ա�
	if (p->size == 0) {
		cout << "��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	else {
		// ��ȡͨѶ¼�ṹ�壬������ϵ�˽ṹ�����飬��ӡ��Ϣ
		for (int i = 0; i < p->size; i++) {
			cout << "��ϵ��������" << p->contactsArr[i].name
				<< "\t�Ա�" << p->contactsArr[i].sex
				<< "\t���䣺" << p->contactsArr[i].age
				<< "\t�绰��" << p->contactsArr[i].tel
				<< "\tסַ��" << p->contactsArr[i].address << endl;
		}

		system("pause");
		system("cls");
	}
}