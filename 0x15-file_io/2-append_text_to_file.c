#include "main.h"

/**
 * append_text_to_file - The function appends text at the end of file.
 * @filename: Points to the name of the file.
 * @text_content: The string to be added.
 * Description: To Write a function that appends text at the end of a file.
 * Return: It returns - -1 If the function fails or filename is NULL.
 *         And if file doesnt exist, user will lack permission
 *         And Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
