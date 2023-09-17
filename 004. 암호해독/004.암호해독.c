#include<stdio.h>
#include<string.h>

char ciperText[30001];

void encrypt(char* plainText, char* key) {
	int i, gap, pLen = strlen(plainText), kLen = strlen(key);
	char a;
	
	for (i = 0; i < pLen; i++) {
		a = plainText[i];					//평문의 문자가 공백인지 아닌지 판단.
		if (a != ' ') {						/*키의 문자가 알파벳 몇번째인지 계산 / 키의 문자는 키의 길이만큼만 반복해준다.   ex) love -> 0,1,2,3 인덱스만 반복*/
			gap = key[i % kLen] - 96;		//평문을 키의 순서만큼 앞당겨준다.
			ciperText[i] = (a - gap < 97 ? (a - gap + 26) : a - gap);
		}
		else ciperText[i] = ' ';			//공백이라면 결과값에 공백 추가
	}
}

void main() {
	char plainText[30001], key[30001];		//key의 길이가 명시되지 않아 임의로 3만으로 함

	gets(plainText); 
	gets(key);

	encrypt(plainText, key);
	
	puts(ciperText);
}