#include <stdio.h>
#include <Windows.h>

int main(void)
{
	BOOL bFile;

	bFile = MoveFile(
		L"C:\\temp\\test1.txt",
		L"C:\\temp\\test2.txt"
	);
	if (bFile == FALSE)
	{
		printf("MoveFile failed and error no %ul\n", GetLastError());
	}
	else
	{
		printf("MoveFile Success!");
	}
}