#pragma once
#include "../inc/isExist.h"

int isExist(struct AddressBook* p, string name) {
	// �ж�ͨѶ¼�Ƿ��������Ϊname����ϵ�ˣ����򷵻������±꣬���򷵻�-1
	for (int i = 0; i < p->size; i++) {
		if (p->contactsArr[i].name == name) {
			return i;
		}
	}
	return -1;
}