#include "config.h"

// �츮�� ������ ó���ϴ� ������ 1���� �⺻ �ڷ��� 1������ �����Ǵ� ���� ���� ���� �ڷ����� ���� ������ �����ȴ�.
// ==> ����ü�� �̿��ؼ� ���� �ڷ����� ��� ���ο� �ڷ����� ����� ����Ѵ�. ==> ����� ���� �ڷ���

// ����ü ����
// struct ����ü�̸� {
//	 ����ü ��� ���� ����;
//	 ...;
// };
struct Jumsu {
	int no;         //��ȣ
	char name[11];  //�̸�
	int c;          //c��� ����
	int cpp;        //cpp����
	int java;       //java����
	int total;      //����
	double average; //���
};

void main() {

	// ����ü ���� ���� ���
	// [struct] ����ü�̸� ����ü������;
	// [struct] ����ü�̸� ����ü������ = {�ʱ�ġ};
	// [struct] ����ü�̸� ����ü�迭��[÷��];
	// [struct] ����ü�̸� *����ü�����͸�;
	// ����ü ����� �����ϴ� ����� 2������ �ִµ� ����ü ������ ���ؼ� �����Ҷ��� "."�� ����ϰ� 
	// ����ü �����͸� ���ؼ� ������ ���� "->"�� ����Ѵ�.

	struct Jumsu jumsu1;
	jumsu1.no = 1;
	strcpy_s(jumsu1.name, "ȫ�浿");
	jumsu1.c = 100;
	jumsu1.cpp = 100;
	jumsu1.java = 99;
	jumsu1.total = jumsu1.c + jumsu1.cpp + jumsu1.java;
	jumsu1.average = (double)jumsu1.total / 3;
	printf("%s���� ��� ������ %6.2f�� �Դϴ�.\n", jumsu1.name, jumsu1.average);

	Jumsu jumsu2 = { 2, "�Ӳ���", 78,65,81 };
	jumsu2.total = jumsu2.c + jumsu2.cpp + jumsu2.java;
	jumsu2.average = (double)jumsu2.total / 3;
	printf("%s���� ��� ������ %6.2f�� �Դϴ�.\n", jumsu2.name, jumsu2.average);

	Jumsu* pJumsu = &jumsu1;
	printf("%s���� ��� ������ %6.2f�� �Դϴ�.\n", pJumsu->name, pJumsu->average);
}