#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
FILE *inp;
int c,f, count=0;

if (argc < 2) {
puts("Usage: charcount FILE1 FILE2 ...");
exit(1);}

for (f=1;f<argc;f++){
    inp = fopen(argv[f], "r");

    if (!inp) {
        perror("Could not open infile for reading\n");
        exit(2);
        }
    while((c = fgetc(inp)) != EOF)
        count++;
    fclose(inp);
    printf("Filename: %s \t\t Characters:%d\n", argv[f], count);
    count = 0;
    }
}
