#pragma once
#include "../inc/addContact.h"

void addContact(struct AddressBook* p) {
	// �����ж�ͨѶ¼�Ƿ����
	if (p->size == MAX) {
		cout << "ͨѶ¼�Ѵ�������ɾ��������ϵ����Ϣ�������~";
		return;
	}

	string name;
	string sex;
	int age = 0;
	string tel;
	string address;

	cout << "������������" << endl;
	cin >> name;

	cout << "�������Ա𣺣�1.�� 2.Ů��" << endl;
	string sexSeed[] = { "��", "Ů" };
	int sexSelect = 0;
	while (true) {
		cin >> sexSelect;
		if (sexSelect == 1 || sexSelect == 2) {
			break;
		}
		else {
			cout << "�����������������룺" << endl;
		}
	}
	
	sex = sexSeed[sexSelect-1];

	cout << "���������䣺" << endl;
	cin >> age;

	cout << "������绰��" << endl;
	regex pattern("^1[3-9]\\d{9}$");
	while (true) {
		cin >> tel;
		bool isMatch = regex_match(tel, pattern);
		if (isMatch) {
			break;
		}
		else {
			cout << "����绰��ʽ���淶�����������룺" << endl;
		}
	}

	cout << "�������ַ��" << endl;
	cin >> address;

	// ����������Ϣ�½�һ����ϵ����Ϣ
	struct Contact contact;
	contact.name = name;
	contact.sex = sex;
	contact.age = age;
	contact.tel = tel;
	contact.address = address;

	p->contactsArr[p->size] = contact;
	p->size++;

	cout << "��ӳɹ�~" << endl;

	system("pause");
	system("cls");
}