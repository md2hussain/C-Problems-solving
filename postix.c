#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int file = open("example.txt", O_RDONLY);
    if (file < 0) {
        perror("open");
        return 1;
    }

    char buffer[100];
    ssize_t bytesRead = read(file, buffer, sizeof(buffer));
    if (bytesRead < 0) {
        perror("read");
        close(file);
        return 1;
    }

    write(STDOUT_FILENO, buffer, bytesRead);
    close(file);
    return 0;
}
