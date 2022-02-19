#include "config.h"

void main() {

	int menu = 0;
//	while (true) {
	while(menu != 5){
		do {
			printf("========================================\n");
			printf(" 1.입력  2.보기  3.수정  4.삭제  5.종료 \n");
			printf("========================================\n");

			
			do {
				printf("원하는 메뉴를 입력하세요 : ");
				while (getchar() != '\n');
				printf("메뉴는 숫자로 입력해야 합니다.");
			} while (scanf_s("%d", &menu) != 1); 

			/*cout << "원하는 메뉴를 입력하세요 : ";
			cin >> menu;
			if (cin.fail()) {               //잘못된 데이터가 입력되었는가?
				cin.clear();                //키보드 버퍼의 내용을 지운다.
				cin.ignore(256, '\n');      //키보드 버퍼를 초기화 시킨다.
				cout << "메뉴는 숫자로 입력해야 합니다." << endl;
			}*/

		} while (menu < 1 || menu >5);

		// 정상적으로 1~5 사이의 숫자가 입력되었다.
		switch (menu) {
		case 1:
			printf("입력\n"); break;
		case 2:
			printf("보기\n"); break;
		case 3:
			printf("수정\n"); break;
		case 4:
			printf("삭제\n"); break;
/*
		case 5:
			printf("종료\n"); 
			exit(0);              //프로그램을 강제로 종료한다.
			break; */
		}
	}
	printf("종료\n");

}