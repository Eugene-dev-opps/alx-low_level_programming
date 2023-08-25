#include "my_file_handler.h"
#include <stdlib.h>

/**
 * custom_textfile_reader to Read contents of a text file and display them
 * @filename: Name of the file to be read
 * @max_chars: The maximum number of characters to read
 * Return: Total bytes read and displayed,0 if the function encounters an issue
 */
ssize_t custom_textfile_reader(const char *filename, size_t max_chars)
{
char *buffer;
ssize_t file_descriptor;
ssize_t bytes_written;
ssize_t total_bytes;

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);

buffer = malloc(sizeof(char) * max_chars);
total_bytes = read(file_descriptor, buffer, max_chars);
bytes_written = write(STDOUT_FILENO, buffer, total_bytes);

ree(buffer);
close(file_descriptor);
return (bytes_written);
}
