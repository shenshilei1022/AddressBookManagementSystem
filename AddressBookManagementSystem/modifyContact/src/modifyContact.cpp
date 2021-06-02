#pragma once
#include "../inc/modifyContact.h"

void modifyContact(struct AddressBook* p) {
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;

	int result = isExist(p, name);

	if (result != -1) {
		cout << "���д��ˣ�" << endl;
		cout << "��ϵ��������" << p->contactsArr[result].name
			<< "\t�Ա�" << p->contactsArr[result].sex
			<< "\t���䣺" << p->contactsArr[result].age
			<< "\t�绰��" << p->contactsArr[result].tel
			<< "\tסַ��" << p->contactsArr[result].address << endl;
		cout << "�������Ϣ�����޸ģ�" << endl;

		string sex;
		int age = 0;
		string tel;
		string address;

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

		sex = sexSeed[sexSelect - 1];

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

		p->contactsArr[result].sex = sex;
		p->contactsArr[result].age = age;
		p->contactsArr[result].tel = tel;
		p->contactsArr[result].address = address;

		cout << "�޸ĳɹ���" << endl;
	}
	else {
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}