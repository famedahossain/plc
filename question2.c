#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void statics(void);
void stacks(void);
void heaps(void);

int main(void)
{
    int j = 0;
    clock_t start,end;
    
    start = clock();
    while(j <= 123456) {
        statics();
        j++;
    }
    end = clock();
    
    printf("Static took a total time of %d seconds. \n", end-start);
    
    j = 0;
    start = clock();
    while(j <= 123456) {
        stacks();
        j++;
    }
    end = clock();
    
    printf("Stack took a total time of %d seconds. \n", end-start);
    
    j = 0;
    start = clock();
    while ( j <= 123456) {
        heaps();
        j++;
    }
    end = clock();
    
    printf("Heap took a total time of  %d seconds. \n", end-start);
    
    statics();
    stacks();
    heaps();
    return 0;
}

void statics(void){
    static int array[123456];
}
void stacks(void){
    int array[123456];
}
void heaps(void){
    int array = (int)malloc(123456*sizeof(int));
}
