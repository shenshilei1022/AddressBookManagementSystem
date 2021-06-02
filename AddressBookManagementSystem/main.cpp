#include <iostream>
#include "showMenu/inc/showMenu.h"
#include "AddressBook/inc/AddressBook.h"
#include "addContact/inc/addContact.h"
#include "displayContacts/inc/displayContacts.h"
#include "deleteContact/inc/deleteContact.h"
#include "searchContact/inc/searchContact.h"
#include "modifyContact/inc/modifyContact.h"
#include "deleteAddressBook/inc/deleteAddressBook.h"

using namespace std;

int main() {
	int select = 0;

	// 创建通讯录
	struct AddressBook addressBook;

	while (true) {
		showMenu();

		cin >> select;
		
		switch (select) {
		case 1: // 1. 添加联系人
			addContact(&addressBook);
			break;
		case 2: // 2. 显示联系人
			displayContacts(&addressBook);
			break;
		case 3: // 3. 删除联系人
			deleteContact(&addressBook);
			break;
		case 4: // 4. 查找联系人
			searchContact(&addressBook);
			break;
		case 5: // 5. 修改联系人
			modifyContact(&addressBook);
			break;
		case 6: // 6. 清空联系人
			deleteAddressBook(&addressBook);
			break;
		case 0: // 0. 退出通讯录
			cout << "欢迎下次使用！" << endl;
			return 0;
			break;
		default: // 退出通讯录
			cout << "欢迎下次使用！" << endl;
			return 0;
			break;
		}
	}

	return 0;
}