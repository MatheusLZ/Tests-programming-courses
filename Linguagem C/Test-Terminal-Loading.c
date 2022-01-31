#include <stdio.h>
#include <unistd.h>
int main(void)
{

    
    for (int i = 0; i <= 100; i++) {

    printf("\rnow loading %d%%", i);
    fflush(stdout);
    sleep(1);
    
    printf("\r");
    }
return 0;
}


