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

// Sum�� Time-Complexity : 8
// int, for, return 1����, �ݺ� 5��

// ������ ������ n�̶�� �Ѵٸ�,
// Time-Complexity = 1 + 1 + n + 1 = n + 3

// for���� ������ �ڼ��ϰ� ���ٸ�,
// int i = 0�� �� ��, int < count; i++ �� n��
// 1 + 1 + n + n + 1 = 2n + 3

// ���� ����� �ǵ��� Ư���� ���� �ٲ� �� �ִ�.


// Sum�� Space-Complexity : n + 3
// int count, int total, int i 3�� + int scores[] n��

int main()
{
	int scores[5]{ 20, 10, 40, 15, 30 };
	Sum(scores, 5);
}