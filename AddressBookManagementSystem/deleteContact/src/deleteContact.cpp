#pragma once
#include "../inc/deleteContact.h"

void deleteContact(struct AddressBook* p) {
	string name;
	cout << "��������ɾ������ϵ��������" << endl;
	cin >> name;
	int result = isExist(p, name);

	if (result== -1) {
		cout << "���޴��ˣ�" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "�鵽���ˣ�" << endl;
		int select = 0;
		cout << "�Ƿ����ɾ����(1.ȷ�� 2.ȡ��)" << endl;
		cin >> select;
		if (select == 1) {
			// �����������������и���ɾ��
			for (int i = result; i < p->size; i++) {
				p->contactsArr[i] = p->contactsArr[i + 1];
			}
			p->size--;
			cout << "ɾ���ɹ���" << endl;
		}
		system("pause");
		system("cls");
	}
}