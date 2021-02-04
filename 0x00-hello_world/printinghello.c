#include <stdio.h>
int main() {
char *p = "Welcome to C!";
long l = 14;
long fd = 1;
long syscall = 1;
long ret = 0;
__asm__ ( "syscall"
	  : "=a" (ret)
	  : "a" (syscall),
	    "D" (fd),
	    "S" (p),
	    "d" (l)
	);
return 0;
}
