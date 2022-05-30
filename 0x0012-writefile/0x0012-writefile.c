#include <stdio.h>
#include <Windows.h>

int main(void)
{
    HANDLE hFile;
    BOOL bFile;
    char lpBuffer[] = "Reversing is my life!";
    DWORD nNumberOfBytesToWrite = strlen(lpBuffer);

    hFile = CreateFile(
        L"C:\\temp\\test.txt",
        GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ,
        NULL,
        CREATE_NEW,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
    if (hFile == INVALID_HANDLE_VALUE)
    {
        printf("CreateFile failed and error no %ul\n", GetLastError());
    }
    else
    {
        printf("CreateFile Success!\n");
    }

    bFile = WriteFile(
        hFile,
        lpBuffer,
        nNumberOfBytesToWrite,
        NULL,
        NULL
    );
    if (bFile == INVALID_HANDLE_VALUE)
    {
        printf("WriteFile failed and error no %ul\n", GetLastError());
    }
    else
    {
        printf("WriteFile Success!");
    }

    CloseHandle(hFile);
}