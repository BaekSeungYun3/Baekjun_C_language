#include <stdio.h> 

int main(void) {

    int a, b, c, d = -1;
    int result, input, count = 0;

    scanf("%d", &input);
    result = input;

    while (d != result) {
        a = input / 10;
        b = input % 10;         // �־��� ���� ���� ������ �ڸ� ��
        c = (a + b) % 10;       // �տ��� ���� ���� ���� ������ �ڸ� ��
        d = (b * 10) + c;       // ���ο� ��
        input = d;
        count++;
    }
    printf("%d", count);
}