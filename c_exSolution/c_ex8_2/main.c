#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX_FILENAME 256
#define BUFFER_SIZE 102400


int main()
{
	char srcfilename[MAX_FILENAME];
	FILE* srcfile;

	printf("원본 파일명을 입력하세요: ");
	fgets(srcfilename, MAX_FILENAME, stdin);
	srcfilename[strlen(srcfilename) - 1] = '\0';

	srcfile = fopen(srcfilename, "rt"); 
	if (!srcfile)
	{
		printf("원본 파일을 열지 못했습니다.");
		return -1;
	}

	char cpyfilename[MAX_FILENAME];
	FILE* cpyfile;

	printf("복사 파일명을 입력하세요: ");
	fgets(cpyfilename, MAX_FILENAME, stdin);
	cpyfilename[strlen(cpyfilename) - 1] = '\0';
	cpyfile = fopen(cpyfilename, "wt");

	if (!srcfile)
	{
		printf("복사 파일을 열지 못했습니다.");
		return -1;
	}

	char* buffer;
	int read;

	buffer = (char*)malloc(BUFFER_SIZE);
	do
	{
		read = fread(buffer, 1, BUFFER_SIZE, srcfile);
		fwrite(buffer, 1, read, cpyfile);
	} while (read == BUFFER_SIZE);

	printf("해당 파일이 복사되었습니다.");
	fclose(srcfile);
	fclose(cpyfile);
	free(buffer);
	return 0;
}