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

#pragma region Star
	// int input;
	// scanf_s("%d", &input);
	// for (int i = 0; i < input; i++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("★");
	// 	}
	// 	printf("\n");
	// }

#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수

	// int x = 10;
	// int* pointer = &x;
	// *pointer = 99;
	// printf("x의 값 : %d\n", x);
	// printf("x의 주소 값 : %p\n", &x);
	// printf("pointer의 값 : %p\n", pointer);
	// printf("pointer의 주소 값 : %p\n", &pointer);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리키게 됨

	// float health = 100.0f;
	// pointer = &health;
	// *pointer = 15.5f;
	// printf("health의 값 : %f\n", health);

	// 포인터 변수를 저장하기 위해 주소 값을 지정할 변수의 자료형과
	// 포인터 변수의 자료형이 일치해야 함

	// printf("포인터 변수의 크기 : %u\n", sizeof(pointer));

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며,
	// 한 번에 처리할 수 있는 크기는 운영 체제에 따라 크기가 결정됨

#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터
	// void* p = NULL;
	// char alphabet = 'A';
	// int integer = 10;
	// float decimal = 5.5f;

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는
	// 변수의 자료형으로 형 변환을 해주어야 한다

	// p = &alphabet;
	// *(char*)p = 'B';
	// p = &integer;
	// *(int*)p = 15;
	// p = &decimal;
	// *(float*)p = 3.25f;
	// printf("alphabet의 값 : %c\n", alphabet);
	// printf("integer의 값 : %d\n", integer);
	// printf("decimal의 값 : %f\n", decimal);

	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없다


#pragma endregion

#pragma region 상수 지시 포인터
	int vectorX = 10;
	int vectorY = 20;
	const int* ptr = &vectorX;
	printf("ptr 변수가 가리키는 값 : %d\n", *ptr);
	ptr = &vectorY;
	printf("ptr 변수가 가리키는 값 : %d\n", *ptr);

	// 상수 지시 포인터를 선언하게 되면 포인터 변수가 가리키고 있는 주소에
	// 존재하는 값을 변경할 수 없도록 설정할 수 있다

#pragma endregion

#pragma region 포인터 상수

	// int positionX = 5;
	// int positionY = 0;
	// int* const reference = &positionX;
	// *reference = 10;

	// 포인터 상수는 해당 변수의 값을 변경할 수 있지만 다른 메모리 주소를 저장할 수 없다

#pragma endregion

}