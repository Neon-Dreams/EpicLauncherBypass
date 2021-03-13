#include <stdio.h>

int main(int argc, char **argv) {
    FILE *fp;
    fp = fopen("EpicBypassLauncherCommmands.txt", "w");

    for (int count=0; count<argc; count++) {
        fputs(argv[count],fp);
        fputs(" ", fp);
    }

    fclose(fp);

    return 0;
}
