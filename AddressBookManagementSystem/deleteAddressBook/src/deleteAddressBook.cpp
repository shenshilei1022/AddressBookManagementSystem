#pragma once
#include "../inc/deleteAddressBook.h"

void deleteAddressBook(struct AddressBook* p) {
	cout << "�Ƿ����ͨѶ¼��������ϵ�ˣ�(1.ȷ�� 2.ȡ��)" << endl;
	int choice;
	cin >> choice;

	if (choice == 1) {
		// ���߼���ռ��ɣ���size��Ϊ0��֮��������ݽ���������ʶλ�ÿ�ʼ���и���
		p->size = 0;
		cout << "�����ϣ�" << endl;
	}
	else {
		cout << "ȡ�����ͨѶ¼~" << endl;
	}
	system("pause");
	system("cls");
}