#include <stdio.h>
#include <stdlib.h>

int count;

int stage = 1;

void Clear()
{
	stage += 1;
}

void Increase()
{
	static int score = 0;
	score++;
	printf("score : %d\n", score);
}

void main()
{
#pragma region �޸�

#pragma region CODE ����
	// ���μ����� ������ �ڵ�� ��ũ�� ����� ���� ���·� ����Ǵ� ����

#pragma endregion

#pragma region DATA ����
	// ���� ������ ���� ������ ����Ǵ� ����

#pragma endregion

#pragma region BSS ����
	// �ʱ�ȭ ���� ���� ���� ������ ����Ǵ� ����

#pragma endregion

#pragma region STACK ����
	// �Լ��� ȣ��� ����Ǵ� ���� ������ �Ű� ������ ����Ǵ� ����

#pragma endregion

#pragma region HEAP ����
	// ����ڰ� ���� �Ҵ��ϴ� �޸� ����

#pragma endregion

#pragma endregion

#pragma region ���� ����
	// �Լ� ���ο� ����� ������ �Լ� ���ο����� ��� �����ϸ�,
	// {}�� ����� ������ �޸𸮰� �����Ǵ� Ư¡�� ������ �ִ� ����

	// int x = 10;

	// {
	// 	int x = 20;
	// 	printf("x�� �� : %d\n", x);
	// }

	// printf("x�� �� : %d\n", x);

#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο����� ������ �����ϸ�, ���α׷��� ����� �� �޸𸮿��� �����ǰ�,
	// ���α׷��� ����Ǿ�߸� �޸𸮿��� ������� Ư¡�� ������ �ִ� ����

	// Clear();
	// Clear();
	// Clear();

	// printf("stage�� �� : %d\n", stage);

	// printf("count�� �� : %d\n", count);

#pragma endregion

#pragma region ���� ����
	// ���� ������ ���� ������ Ư���� ������ ������, ���α׷��� ����� ��
	// �� �� ���� �ʱ�ȭ�� �̷������, ���α׷���  ����� �� �޸𸮿� �����ǰ�
	// ���α׷��� ���� �Ǿ�߸� �޸𸮿��� �����Ǵ� Ư¡�� ������ �ִ� ����

	// Increase();
	// Increase();
	// Increase();

#pragma endregion

#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾�
	// int* reference = (int*)malloc(sizeof(int));
	// *reference = 100;
	// printf("reference�� ����Ű�� �� : %d\n", *reference);

	// �����Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
	// �������� �޸��� ũ�⸦ �Ҵ��� �� ����Ʈ ������ �����Ѵ�

	// free(reference);

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	// ����� ������ ���� ������ ���־�� ��

#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� ������

	// float* pointer = malloc(sizeof(float));
	// *pointer = 37.5f;
	// printf("pointer�� ����Ű�� �� : %f\n", *pointer);
	// free(pointer);
	// pointer = NULL;
	// printf("pointer�� ����Ű�� �� : %f\n", *pointer);
	// *pointer = 12.5f;

#pragma endregion

#pragma region ���� �迭
	// int* ptr = calloc(3, sizeof(int));
	// 
	// printf("ptr�� �� : %p\n", ptr);
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	ptr[i] = (1 + i) * 10;
	// 	printf("ptr[%d] = %d\n", i, ptr[i]);
	// }
	// 
	// free(ptr);
	// 
	// ptr = calloc(5, sizeof(int));
	// 
	// printf("ptr�� �� : %p\n", ptr);
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("ptr[%d] = %d\n", i + 1, ptr[i]);
	// }
	// 
	// free(ptr);

#pragma endregion

}