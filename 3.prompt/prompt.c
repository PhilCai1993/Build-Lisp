#include <stdio.h>
#include <editline/readline.h>
// #include <editline/history.h>

static char input[2048];

// int main(int argc, char const *argv[])
// {
// 	puts("Lisp version 0.0.0.0.1")	;
// 	puts("ctrl + c to exit");

// 	while (1) {
// 		/*output prompt*/
// 		fputs("lispy> ", stdout);
// 		/*read a line of user input of maximum size of 2048*/
// 		fgets(input, 2048, stdin);
// 		printf("Now you are a %s\n", input);
// 	}
// 	return 0;
// }

/*cc -std=c99 -Wall prompt.c -ledit -o prompt*/
int main(int argc, char const *argv[])
{
	puts("Lisp version 0.0.0.0.1")	;
	puts("ctrl + c to exit");
	while (1) {
		char *input = readline("lispy> ");
		add_history(input);
		printf("%s\n", input);
		free(input);
	}
	return 0;
}