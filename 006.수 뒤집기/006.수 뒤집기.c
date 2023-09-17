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
	int reverseValue; //뒤집은 수를 저장하는 변수
	int sum; //원래 수와 뒤집은 수를 더한 값을 저장하는 변수

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