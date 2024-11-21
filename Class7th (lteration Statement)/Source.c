#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자
	// 데이터의 주소 값은 해당 데이터가 저장된 메모리의 시작 주소를 의미,
	// 메모리의 공간은 1byte의 크기로 나누어 표현함
	// int data = 10;
	// printf("data변수의 주소 : %p\n", &data);

#pragma endregion

#pragma region scanf 함수
	// 표준 입력 함수로 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수
	// int score = 0;

	// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없다
	// scanf_s("%d", &score);

	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정
	// printf("score변수의 값 : %d\n", score);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관했다가
	// 입력하는 순간 버퍼 안의 내용을 프로그램에 전송

#pragma endregion

#pragma region 
	int a;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("★");
		}
		printf("\n");
	}

#pragma endregion

}