#include <stdio.h>

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

}