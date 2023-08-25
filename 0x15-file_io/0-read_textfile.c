#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);

FILE *file = fopen(filename, "r");
if (file == NULL)
return (0);

char *buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
fclose(file);
return (0);
}

ssize_t read_count = fread(buffer, sizeof(char), letters, file);
if (read_count <= 0)
{
fclose(file);
free(buffer);
return (0);
}

ssize_t write_count = write(STDOUT_FILENO, buffer, read_count);
if (write_count < read_count)
{
fclose(file);
free(buffer);
return (0);
}

fclose(file);
free(buffer);
return (read_count);
}
