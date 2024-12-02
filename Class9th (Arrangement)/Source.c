#include <stdio.h>
#include <stdarg.h>

void Function()
{
	printf("Function...\n");
}

void Position(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
}

int Compare(float x, float y)
{
	if (x < y)
	{
		return 1;
	}
	else if (x == y)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void Swap(int* left, int* right)
{
	int temporary = *left;
	*left = *right;
	*right = temporary;
}

inline void Process(float progress)
{
	printf("progress : %f\n", progress);
	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�,
	// ������ �� �ζ��� �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �Ѵ�
}

void Recursive(int count)
{
	if (count > 0)
	{
		Recursive(count - 1);
	}
	else
	{
		return;
	}
	printf("Recursive Function\n");
}

void DynamicFunction(int count, ...)
{
	// va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������
	va_list list;
	// va_start : ���� �μ��� ������ �� �ֵ��� �����͸� ����
	va_start(list, count);

	for (int i = 0; i < count; i++)
	{
		// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� ������
		printf("%d ", va_arg(list, int));
	}

	printf("\n");

	// va_end : ���� �μ� �����Ͱ� ������ �� NULL�� �ʱ�ȭ
	va_end(list);

}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����
	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������ ���ϴ� ���� ���� �� ����
	
	// Function();
	// Function();
	// Function();

#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� ����
	// �Ű� ������ �Լ� ���ο����� ������ �̷������, �Լ��� ����Ǹ� �޸𸮿��� �����
	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������ �Բ� ������ �� ������,
	// �������� �Ű� ������ �����Ͽ� ����� �� �ִ�
	
	// Position(5, 5);
	// printf("Compare�Լ��� �� : %d\n", Compare(5.75f, 8.125f));

#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ��
	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� �ִ� �μ��� ���� �����Ǹ�,
	// ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� ��

	// int a = 10;
	// int b = 20;
	
	// Swap(&a, &b);
	
	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);

#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ�
	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ��� ��������,
	// �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ� �ڵ尡 ����Ǳ� ������
	// ���� ������ ũ�Ⱑ Ŀ���� �ȴ�

	//Process(46.7f);

#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ�
	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��ϰ� �ȴ�

	// Recursive(3);

#pragma endregion

#pragma region ���� ���� �Ű� ����
	// �Ű� ������ ������ ���� ������ ��� ���� ��������
	// �μ��� ���� �� �ֵ��� �����Ǿ� �ִ� �Ű� ����

	// DynamicFunction(3, 10, 20, 30);
	// DynamicFunction(5, 3, 6, 9, 12, 15);

#pragma endregion

}