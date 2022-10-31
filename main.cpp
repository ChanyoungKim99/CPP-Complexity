#include <iostream>

int Sum(int scores[], int count)
{
	int total{};

	for (int i = 0; i < count; i++)
	{
		total += scores[i];
	}

	return total;
}

// Sum의 Time-Complexity : 8
// int, for, return 1번씩, 반복 5번

// 원소의 개수를 n이라고 한다면,
// Time-Complexity = 1 + 1 + n + 1 = n + 3

// for문의 원리를 자세하게 본다면,
// int i = 0이 한 번, int < count; i++ 는 n번
// 1 + 1 + n + n + 1 = 2n + 3

// 세는 사람의 의도나 특성에 따라 바뀔 수 있다.


// Sum의 Space-Complexity : n + 3
// int count, int total, int i 3개 + int scores[] n개

int main()
{
	int scores[5]{ 20, 10, 40, 15, 30 };
	Sum(scores, 5);
}