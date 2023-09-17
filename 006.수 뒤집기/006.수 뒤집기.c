#include <stdio.h>
#include <stdlib.h>

int reverse(int value) {
	int reverseValue = 0;

	while (value > 0) {
		reverseValue = reverseValue * 10 + value % 10;
		value /= 10;
	}
	return reverseValue;
}

int main(void) {
	int T;
	scanf("%d", &T);

	int* value;
	int reverseValue; //������ ���� �����ϴ� ����
	int sum; //���� ���� ������ ���� ���� ���� �����ϴ� ����

	value = (int*)malloc(sizeof(int) * T);

	for (int i = 0; i < T; i++) {
		scanf("%d", value + i);
	}

	for (int i = 0; i < T; i++) {
		reverseValue = reverse(value[i]);
		sum = reverseValue + value[i];

		if (sum == reverse(sum)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}