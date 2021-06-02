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

	// ����ͨѶ¼
	struct AddressBook addressBook;

	while (true) {
		showMenu();

		cin >> select;
		
		switch (select) {
		case 1: // 1. �����ϵ��
			addContact(&addressBook);
			break;
		case 2: // 2. ��ʾ��ϵ��
			displayContacts(&addressBook);
			break;
		case 3: // 3. ɾ����ϵ��
			deleteContact(&addressBook);
			break;
		case 4: // 4. ������ϵ��
			searchContact(&addressBook);
			break;
		case 5: // 5. �޸���ϵ��
			modifyContact(&addressBook);
			break;
		case 6: // 6. �����ϵ��
			deleteAddressBook(&addressBook);
			break;
		case 0: // 0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			return 0;
			break;
		default: // �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			return 0;
			break;
		}
	}

	return 0;
}