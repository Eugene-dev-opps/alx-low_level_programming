#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor;
ssize_t content_length, write_count;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
content_length = 0;
while (text_content[content_length] != '\0')
content_length++;

write_count = write(file_descriptor, text_content, content_length);
if (write_count != content_length)
{
close(file_descriptor);
return (-1);
}
}

close(file_descriptor);
return (1);
}
