#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� ����

	// int array[3];
	// array[0] = 10;
	// array[1] = 20;
	// array[2] = 30;

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �ȴ�

	// int size = sizeof(array) / sizeof(int);
	 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("array[%d] = %d\n", i, array[i]);
	// }

	// �迭�� ��� ù ��° ���Ҵ� 0���� ����

	// float list[] = { 1.25f, 2.75f, 3.575f, 4.895f };
	
	// for (int i = 0; i < 4; i++)
	// {
	// 	printf("list[%d] = %f\n", i, list[i]);
	// }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������ ��ҿ� ���� ũ�Ⱑ ������
	
	// float* pointer = list;
	// pointer = pointer + 2;
	// *pointer = 7.875f;
	
	// printf("list[2] = %f\n", list[2]);
	// printf("pointer�� �� : %p\n", pointer);
	// printf("list[2]�� �ּ� : %p\n", &list[2]);
	
	// �迭�� �������� �޸� ������ ������, �迭�� �̸��� �迭�� ���� �ּҸ� ����Ų��

#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������ ����
	
	// const char* string = "Queue";
	// printf("string�� �� : %s\n", string);
	// string = "Stack";
	// printf("string�� �� : %s\n", string);

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
	// ���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������
	// ���ڿ��� ���� ������ �� ����

	// char word[] = { "Darkness" };
	// char content[] = { "GitHub" };
	// printf("string�� ũ�� : %u\n", sizeof(word));

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ �����Ǹ�,
	// �������� ���ڿ��� ���� �˷��ִ� ����ڰ� �߰��ȴ�
	
	// word[4] = '\0';
	// printf("word �迭�� �� : %s\n", word);

	// word = content;

	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ� ������,
	// ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� ��ȿ�� ���ڱ����� ���
	
#pragma endregion

#pragma region ASCII�ڵ�
	// �̱� ANSI���� ǥ��ȭ�� ���� ��ȯ�� 7bit ��ȣ ü��

	// char alphabet = 65;
	// printf("%c", alphabet);

	// for (int i = 0; i < 26; i++)
	// {
	// 	printf("%c", 'A' + i);
	// }

#pragma endregion

}