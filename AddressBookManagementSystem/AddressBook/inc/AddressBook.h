#pragma once
#include <string>
#include "../../Contact/inc/Contact.h"

using namespace std;

#define MAX 1000 // ͨѶ¼�����1000��

struct AddressBook {
	struct Contact contactsArr[MAX];
	int size = 0; // ͨѶ¼��ǰ�洢��������
};