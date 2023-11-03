#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void error(const char *message) {
    perror(message);
    exit(1);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <input_file> <command>\n", argv[0]);
        return 1;
    }

    int pid;
    char s[100];
    pid = fork();

    if (pid < 0) {
        error("Fork failed");
    } else if (pid > 0) {
        wait(NULL);
        printf("\nParent Process:\n");
        printf("\n\tParent Process id: %d\n", getpid());
        execlp("cat", "cat", argv[1], (char*)0);
        error("Can't execute cat %s", argv[1]);
    } else {
        printf("\nChild process:\n");
        printf("\n\tChild Process Parent id: %d\n", getppid());
        sprintf(s, "\n\tChild process id: %d\n", getpid());
        write(1, s, strlen(s));
        execvp(argv[2], &argv[2]);
        error("Can't execute %s", argv[2]);
    }

    return 0;
}

// Create a new txt file in the same directory and add some content to it.
// the commands to run this program is as follows:
// " gcc fileName.c -o fileName "
// " ./fileName newTxtFileName.txt grep "