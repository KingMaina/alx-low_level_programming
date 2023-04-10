#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(const char *);

#endif /* #ifndef FILE_IO_H */
