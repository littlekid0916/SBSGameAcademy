#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct GameObject
{
	char grade;
	int health;
	double attack;

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ �� ������,
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����Ǿ� �ִ�
};

struct Vector2
{
	float x;
	float y;
};

struct Node
{
	int data;
	struct Node* next;
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
	// struct Vector2 character = { 0, 0 };
	// struct Vector2 slime = { 1.75f, 1.25f };
	
	// double x = character.x - slime.x;
	// double y = character.y - slime.y;
	// double distance = sqrt(pow(x, 2) + pow(y, 2));
	
	// if (distance >= 3.0f)
	// {
	// 	printf("�̵� ����\n");
	// }
	// else if (distance < 3.0)
	// {
	// 	printf("���� ����\n");
	// }

#pragma endregion

#pragma region �ڱ� ���� ����ü
	// ����ü ���ο� �ڱ� �ڽ��� �ڷ����� ��� ������ ������ �ִ� ����ü
	// struct Node* node1 = malloc(sizeof(struct Node));
	// struct Node* node2 = malloc(sizeof(struct Node));
	// struct Node* node3 = malloc(sizeof(struct Node));
	// 
	// node1->data = 10;
	// node2->data = 20;
	// node3->data = 30;
	// 
	// node1->next = node2;
	// node2->next = node3;
	// node3->next = NULL;
	// 
	// struct Node* currentNode = NULL;
	// currentNode = node1;
	// 
	// while (currentNode != NULL)
	// {
	// 	printf("%d ", currentNode->data);
	// 	currentNode = currentNode->next;
	// }
	// 
	// free(node1);
	// free(node2);
	// free(node3);

#pragma endregion

	return 0;
}