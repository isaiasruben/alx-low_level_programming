#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	if(filename ==NUll)
	{
		return 0;
	}
	ssize_t bytes_read = read(file_descriptor, buffer, letters);
	
   	if (bytes_read == -1) {
        close(file_descriptor);
        free(buffer);
        return 0;
    	}

   	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    	if (bytes_written == -1 || bytes_written != bytes_read) {
        close(file_descriptor);
        free(buffer);
        return 0;
       }

       close(file_descriptor);
      free(buffer);

    return bytes_written;
}

            
