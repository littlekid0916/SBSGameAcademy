#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� ������
	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ�,
	// �޸��� ������ 1byte�� ũ��� ������ ǥ����

	// int data = 10;
	// printf("data������ �ּ� : %p\n", &data);

#pragma endregion

#pragma region scanf �Լ�
	// ǥ�� �Է� �Լ��� ���� ������ �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ�

	// int score = 0;

	// ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾����� �Ѿ �� ����
	// scanf_s("%d", &score);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� ����
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ ����
	// printf("score������ �� : %d\n", score);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ� �����͸� �����ߴٰ�
	// �Է��ϴ� ���� ���� ���� ������ ���α׷��� ����

#pragma endregion

#pragma region Star
	// int input;
	// scanf_s("%d", &input);
	// for (int i = 0; i < input; i++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("��");
	// 	}
	// 	printf("\n");
	// }

#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� ����

	// int x = 10;
	// int* pointer = &x;
	// *pointer = 99;
	// printf("x�� �� : %d\n", x);
	// printf("x�� �ּ� �� : %p\n", &x);
	// printf("pointer�� �� : %p\n", pointer);
	// printf("pointer�� �ּ� �� : %p\n", &pointer);

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������ ���� �ּҸ� ����Ű�� ��

	// float health = 100.0f;
	// pointer = &health;
	// *pointer = 15.5f;
	// printf("health�� �� : %f\n", health);

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ�����
	// ������ ������ �ڷ����� ��ġ�ؾ� ��

	// printf("������ ������ ũ�� : %u\n", sizeof(pointer));

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� �� �ִ� ũ��� ��������,
	// �� ���� ó���� �� �ִ� ũ��� � ü���� ���� ũ�Ⱑ ������

#pragma endregion

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������
	// void* p = NULL;
	// char alphabet = 'A';
	// int integer = 10;
	// float decimal = 5.5f;

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	// ������ �ڷ������� �� ��ȯ�� ���־�� �Ѵ�

	// p = &alphabet;
	// *(char*)p = 'B';
	// p = &integer;
	// *(int*)p = 15;
	// p = &decimal;
	// *(float*)p = 3.25f;
	// printf("alphabet�� �� : %c\n", alphabet);
	// printf("integer�� �� : %d\n", integer);
	// printf("decimal�� �� : %f\n", decimal);

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� ����


#pragma endregion

#pragma region ��� ���� ������
	int vectorX = 10;
	int vectorY = 20;
	const int* ptr = &vectorX;
	printf("ptr ������ ����Ű�� �� : %d\n", *ptr);
	ptr = &vectorY;
	printf("ptr ������ ����Ű�� �� : %d\n", *ptr);

	// ��� ���� �����͸� �����ϰ� �Ǹ� ������ ������ ����Ű�� �ִ� �ּҿ�
	// �����ϴ� ���� ������ �� ������ ������ �� �ִ�

#pragma endregion

#pragma region ������ ���

	// int positionX = 5;
	// int positionY = 0;
	// int* const reference = &positionX;
	// *reference = 10;

	// ������ ����� �ش� ������ ���� ������ �� ������ �ٸ� �޸� �ּҸ� ������ �� ����

#pragma endregion

}