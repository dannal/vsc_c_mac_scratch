// note in launch.json, I have turned on externalConsole to true.
// otherwise debug output gets mixed up with app output
// and console based text input does not work well
#include <stdio.h>

int main(int argc, char *argv[])
{
    
    printf("Test output \n");
    
    getc(stdin);
    
    return 0;
}