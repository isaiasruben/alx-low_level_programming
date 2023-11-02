#include "main.h"

int append_text_to_file(const char *filename, char *text_content) {
    int o, w, len = 0;

    if (filename == NULL)
        return (-1);  // Missing filename error

    if (text_content != NULL) {
        for (len = 0; text_content[len]; len++);
    }

    o = open(filename, O_WRONLY | O_APPEND);
    if (o == -1) {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
        return (-1);  // Failed to open the file
    }

    w = write(o, text_content, len);
    if (w == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
        close(o);
        return (-1);  // Failed to write to the file
    }

    close(o);

    return (1);  // Success
}

