#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int worldSize = 1024;
    int editableArea = atoi(argv[2]);
    FILE *file = fopen(argv[1], "w");
    fprintf(file,"P5\n%d %d\n255\n", worldSize, worldSize);
    bool *world[worldSize];
    
    for (int i = 0; i < worldSize; i++){
        bool *newarr = calloc(worldSize,sizeof(bool));
        world[i] = newarr;
    }
    int offset = (worldSize/2-(atoi(argv[2])/2));
    int iter=0;
    for (int i = 0; i < editableArea; i++) {
        for (int j = 0; j < editableArea; j++){
            world[offset+i][offset+j]=argv[3][iter]=='0'?false:true;
            iter++;
        }
    }

    for (int i = 0; i < worldSize; i++){
        // putc('\n', file);
        // printf("\n");

        for (int j = 0; j < worldSize; j++)
        {
            // printf("%s", world[i][j]?"1 ":"0 ");
            putc(world[i][j]?255:0,file);
        }
    }
    
    return fclose(file);
}