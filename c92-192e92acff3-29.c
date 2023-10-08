#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_LINE 80 /* The maximum length command */

int main(void)
{
    char *args[MAX_LINE/2 + 1]; /* command line arguments */
    int should_run = 1; /* flag to determine when to exit program */
    pid_t pid; /* process id */

    while (should_run)
    {
        printf("osh>");
        fflush(stdout);

        char input[MAX_LINE];
        fgets(input, MAX_LINE, stdin);

        /* Parse the input */
        int i = 0;
        args[i] = strtok(input, " \n");
        while (args[i] != NULL)
        {
            i++;
            args[i] = strtok(NULL, " \n");
        }
        args[i] = NULL;

        /* Exit the program if the user types "exit" */
        if (strcmp(args[0], "exit") == 0)
        {
            should_run = 0;
            break;
        }

        /* Fork a child process */
        pid = fork();

        if (pid < 0) /* Error occurred */
        {
            fprintf(stderr, "Fork Failed");
            return 1;
        }
        else if (pid == 0) /* Child process */
        {
            execvp(args[0], args);
        }
        else /* Parent process */
        {
            wait(NULL);
        }
    }

    return 0;
}
