#include "config.h"

void main() {

	int menu = 0;
//	while (true) {
	while(menu != 5){
		do {
			printf("========================================\n");
			printf(" 1.�Է�  2.����  3.����  4.����  5.���� \n");
			printf("========================================\n");

			
			do {
				printf("���ϴ� �޴��� �Է��ϼ��� : ");
				while (getchar() != '\n');
				printf("�޴��� ���ڷ� �Է��ؾ� �մϴ�.");
			} while (scanf_s("%d", &menu) != 1); 

			/*cout << "���ϴ� �޴��� �Է��ϼ��� : ";
			cin >> menu;
			if (cin.fail()) {               //�߸��� �����Ͱ� �ԷµǾ��°�?
				cin.clear();                //Ű���� ������ ������ �����.
				cin.ignore(256, '\n');      //Ű���� ���۸� �ʱ�ȭ ��Ų��.
				cout << "�޴��� ���ڷ� �Է��ؾ� �մϴ�." << endl;
			}*/

		} while (menu < 1 || menu >5);

		// ���������� 1~5 ������ ���ڰ� �ԷµǾ���.
		switch (menu) {
		case 1:
			printf("�Է�\n"); break;
		case 2:
			printf("����\n"); break;
		case 3:
			printf("����\n"); break;
		case 4:
			printf("����\n"); break;
/*
		case 5:
			printf("����\n"); 
			exit(0);              //���α׷��� ������ �����Ѵ�.
			break; */
		}
	}
	printf("����\n");

}