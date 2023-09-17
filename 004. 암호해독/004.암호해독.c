#include<stdio.h>
#include<string.h>

char ciperText[30001];

void encrypt(char* plainText, char* key) {
	int i, gap, pLen = strlen(plainText), kLen = strlen(key);
	char a;
	
	for (i = 0; i < pLen; i++) {
		a = plainText[i];					//���� ���ڰ� �������� �ƴ��� �Ǵ�.
		if (a != ' ') {						/*Ű�� ���ڰ� ���ĺ� ���°���� ��� / Ű�� ���ڴ� Ű�� ���̸�ŭ�� �ݺ����ش�.   ex) love -> 0,1,2,3 �ε����� �ݺ�*/
			gap = key[i % kLen] - 96;		//���� Ű�� ������ŭ �մ���ش�.
			ciperText[i] = (a - gap < 97 ? (a - gap + 26) : a - gap);
		}
		else ciperText[i] = ' ';			//�����̶�� ������� ���� �߰�
	}
}

void main() {
	char plainText[30001], key[30001];		//key�� ���̰� ��õ��� �ʾ� ���Ƿ� 3������ ��

	gets(plainText); 
	gets(key);

	encrypt(plainText, key);
	
	puts(ciperText);
}