#include <stdio.h>
#include <string.h>

void func(char *name) {
    char buf[100];
    strcpy(buf, name);
    printf("Welcome %s\n", buf);
}

void hidden(){
	printf("\nYou entered the hidden function!\n");
	system("/bin/bash");
}

int main(int argc, char *argv[]) {
   func(argv[1]);
   return 0;
}
