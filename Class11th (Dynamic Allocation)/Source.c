#include <stdio.h>
#include <math.h>

struct GameObject
{
	char grade;
	int health;
	double attack;

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ �� ������,
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����Ǿ� �ִ�
};

struct Vector
{
	float x;
	float y;
};

int main()
{
#pragma region ����ü
	// �������� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��
	// struct GameObject gameObject;
	// 
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// 
	// printf("GameObject Grade : %c\n", gameObject.grade);
	// printf("GameObject health : %d\n", gameObject.health);
	// printf("GameObject attack : %f\n", gameObject.attack);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�,
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� ����

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� cpu�� ���� �� �� ���� ���� �� �ֵ���,
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾�

	// struct GameObject object = {'C', 30, 3.25};
	// printf("GameObject�� ũ�� : %d\n", sizeof(object));

	// ����ü�� ũ��� ����ü�� �����ϴ� ����߿� ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� ����
#pragma endregion

#pragma region �� �� ������ �Ÿ�
	printf("100�� ������ : %lf\n", sqrt(100));
	printf("10�� : %lf\n", pow(10, 2));

#pragma endregion

	return 0;
}