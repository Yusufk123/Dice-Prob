#include <stdlib.h>
#include <time.h>

int xdy(int x, int y){
    srand(time(NULL));
    int n = 0;
    for (int i = 0; i < x; i++) {
        n += rand() % y;
        n++;
    }
    return n;
}