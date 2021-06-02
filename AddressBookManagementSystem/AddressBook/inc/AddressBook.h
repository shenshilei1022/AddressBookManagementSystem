#pragma once
#include <string>
#include "../../Contact/inc/Contact.h"

using namespace std;

#define MAX 1000 // 通讯录最大存放1000人

struct AddressBook {
	struct Contact contactsArr[MAX];
	int size = 0; // 通讯录当前存储的人数。
};