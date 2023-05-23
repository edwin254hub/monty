#include "monty.h"


/**
 * main - Monty byte code interpreter.
 * @argc: number of arguments passed to program.
 * @argv: file for program to read from.
 * Return: EXIT_SUCCESS or EXIT_FAILURE.
 */

int main(int argc, char **argv)
{
	char *path, *filename;

	code_line = NULL;
	path = NULL;
	filename = NULL;

	correct_number_of_arguments(argc);
	filename = argv[1];
	make_path(&path, filename);
	viable_file(path, filename);
	parse(path);
	exit(EXIT_SUCCESS);
}
