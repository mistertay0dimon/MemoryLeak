// Works ONLY in Windows!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int AllocateRAM() {
	// This function allocating 1,048,576 bytes of RAM (1 MB) and fills RAM a 0x00
	size_t size_in_bytes = 1024 * 1024;
	void* memory_block = malloc(size_in_bytes); // Allocating 1 MB RAM (1048576 bytes)
	// If memory is failed to allocate, excepting a error:
	
	if (memory_block == NULL) {
		printf("Failed to allocate RAM!\n");
		return 1;
	}

	memset(memory_block, 0, size_in_bytes);
	printf("Allocated %d bytes of RAM\n", size_in_bytes);
	return 0;
}

int main() {
	while (1) {
		AllocateRAM(); // In infinity cycle running function for allocating RAM (AllocateRAM)
		Sleep(1000);
	}
	return 0;
}
