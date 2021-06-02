#pragma once
#include "../inc/isExist.h"

int isExist(struct AddressBook* p, string name) {
	// 判断通讯录是否存在名字为name的联系人，有则返回数组下标，无则返回-1
	for (int i = 0; i < p->size; i++) {
		if (p->contactsArr[i].name == name) {
			return i;
		}
	}
	return -1;
}