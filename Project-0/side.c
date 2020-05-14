/*#include<stdio.h>
//write a program to create a file and write some text in text in it writing one character at a time using fputc function
//The program should write until user hits enter key
//Read filename from user

//Write a program that opens a file and copies all its contents to another file. Your program should read name of source file and
//destination file from user
_CRT_SECURE_NO_WARNINGS;

void copyFileContents(char source[], char destination[]) {
	FILE* fptr1;
	FILE* fptr2;

	fopen_s(fptr1, source, "r+");
	fopen_s(fptr2, destination, "w+");

	if (fptr1 == NULL || fptr2 == NULL) {
		printf("If you're seeing this, you're an incompetent programmer");
	}
	else {
		printf("contents successfully copied!");
		char sc;
		while (!EOF) {
			fgetc(sc, fptr1);
			fputc(sc, fptr2);
		}
	}
	fclose(fptr1);
	fclose(fptr2);

}

void main() {
	char cs[50], cd[50];
	printf("Source? \n"); scanf_s("%s", &cs);
	printf("Destination? \n"); scanf_s("%s", &cd);

	copyFileContents(cs,cd);
}
*/