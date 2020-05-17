// Laba1Godunov.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void ErrorMesage();
void SysInfo();

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "Russian");
	if (!strcmp(argv[1], "-e")) {
		TCHAR stdPath[11] = TEXT("Q:\\lol.txt");
		HANDLE hf = CreateFile(stdPath, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_WRITE, 0, CREATE_NEW, 0, 0);
		if (hf == INVALID_HANDLE_VALUE) {
			ErrorMesage();
		}
		else {
			CloseHandle(hf);
		}
	}
	else if (!strcmp(argv[1], "-s"))
		SysInfo();
}



void ErrorMesage()
{
	LPVOID lpMsg;
	DWORD dwError;

	dwError = GetLastError();
	FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER |
		FORMAT_MESSAGE_FROM_SYSTEM,
		NULL, dwError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR)&lpMsg, 0, NULL);
	wprintf(L"Error Code :  %lu\n", dwError);
	wprintf(L"Error Message : %s", lpMsg);
	LocalFree(lpMsg);

}

void SysInfo()
{
	SYSTEM_INFO siSysInf;
	MEMORYSTATUS lpMemStat;

	GetSystemInfo(&siSysInf);
	printf("Hardware information: \n");
	printf("  OEM ID: %u\n", siSysInf.dwOemId);
	printf("  Number of processors: %u\n", siSysInf.dwNumberOfProcessors);
	printf("  Page size: %u\n", siSysInf.dwPageSize);
	printf("  Processor type: %u\n", siSysInf.dwProcessorType);
	printf("  Minimum application address: %lx\n", (DWORD)siSysInf.lpMinimumApplicationAddress);
	printf("  Maximum application address: %lx\n", (DWORD)siSysInf.lpMaximumApplicationAddress);
	printf("  Active processor mask: %u\n", siSysInf.dwActiveProcessorMask);

	GlobalMemoryStatus(&lpMemStat);
	printf("  The MemoryStatus structure is %ld bytes long.\n", lpMemStat.dwLength);
	printf("  It should be %d.\n", sizeof(lpMemStat));
	printf("  %ld percent of memory is in use.\n", lpMemStat.dwMemoryLoad);
	printf("  The amount of actual physical memory, in bytes: %ld\n", lpMemStat.dwTotalPhys);
	printf("  The amount of physical memory currently available, in bytes.: %ld\n", lpMemStat.dwAvailPhys);
	printf("  The current size of the committed memory limit, in bytes: %ld\n", lpMemStat.dwTotalPageFile);
	printf("  The maximum amount of memory the current process can commit, in bytes: %ld\n", lpMemStat.dwAvailPageFile);
	printf("  The size of the user-mode portion of the virtual address space of the calling process, in bytes: %ld\n", lpMemStat.dwTotalVirtual);
	printf("  The amount of unreserved and uncommitted memory currently in the user-mode portion of the virtual address space of the calling process, in bytes: %ld\n", lpMemStat.dwAvailVirtual);
}