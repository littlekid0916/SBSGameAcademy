#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ������� �����ϴ� ��ɹ�

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� ������
	
	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� ������ ������
	// int x = 0;
	// int vectorX = ++x;
	// printf("���� ������ x�� �� : %d\n", x);	// 1
	// printf("vectorX�� �� : %d\n", vectorX);	// 1
	// 
	// vectorX = --x;
	// printf("���� ������ x�� �� : %d\n", x);	// 0
	// printf("vectorX�� �� : %d\n", vectorX);	// 0

	// ���� ���� �����ڴ� ������ ������ ���� ������ ���� ������Ŵ
	// int y = 0;
	// int vectorY = y++;
	// printf("���� ������ y�� �� : %d\n", y);	// 1
	// printf("vectorY�� �� : %d\n", vectorY);	// 0
	// 
	// vectorY = y--;
	// printf("���� ������ y�� �� : %d\n", y);	// 0
	// printf("vectorY�� �� : %d\n", vectorY);	// 1

#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ��ϴ� �ݺ���
	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ���� �����ϰ� �Ǹ�,
	// ������ ��ġ���� �ʾ� ��� �ݺ������� ����Ǵ� ������ �߻�
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("Hello\n");
	// }

#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ���
	// while���� ��� ������ �Ʒ��� ����,
	// �Ʒ��� �ִ� ��ɹ��� ������ �� ������ �ٽ� ���� �ִ� ��ɹ����� ���ư��� �����
	// int i = 0;
	// while (i < 5)
	// {
	// 	printf("%d\n", i + 1);
	// 	i++;
	// }

#pragma endregion

#pragma endregion

}