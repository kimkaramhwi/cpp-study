#include "config.h"

void main() {

	int c, java, jsp;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &c, &java, &jsp);

	int total = c + java + jsp;
	double average = total / 3.;

	printf("��� ���� : %6.2f\n", average);


	// key���� ������ ����ϴ� ���� �Ǵ� ���� ����� ������ ���ĸ� ���� �� �ִ�.
	//	switch(key) {
	//      case value:   // ":"�� ����ִ� �Ϳ� �����Ѵ�.
	//      key�� value�� ���� ��� ������ ����;
	//      ...;
	//      [break;]
	//  ...
	//    [default: 
	//        key�� ��ġ�ϴ� value�� ���� ��� ������ ����;
	//        ...;
	//        break;]
	//	}

	// ���� �۾��� �ϴ� case�� ������ �� �ִ�.
	switch ((int)average / 10) {
	case 10:
		printf("�����߾��\n");
//		printf("��\n");
//		break;
	case 9:
		printf("��\n");
		break;
	case 8:
		printf("��\n");
		break;
	case 7:
		printf("��\n");
		break;
	case 6:
		printf("��\n");
		break;
	default:
		printf("��\n");

	}
}