#include <stdio.h>
#include <stdlib.h>

void mazePrint(char *maze[12][12]);
void mazeTraversal(char *maze[12][12]);
static int face = 6;

int main()
{
    int i = 0;
    int j = 0; 
    int k = 0;
    int start;
    int xpos;

    char *mazeone[12][12] = {
       //0///1///2///3///4///5///6///7///8///9///10//11///
        "#","#","#","#","#","#","#","#","#","#","#","#",//0
        "#",".",".",".","#",".",".",".",".",".",".","#",//1
        ".",".","#",".","#",".","#","#","#","#",".","#",//2
        "#","#","#",".","#",".",".",".",".","#",".","#",//3
        "#",".",".",".",".","#","#","#",".","#",".",".",//4
        "#","#","#","#",".","#",".","#",".","#",".","#",//5
        "#","#",".","#",".","#",".","#",".","#",".","#",//6
        "#","#",".","#",".","#",".","#",".","#",".","#",//7
        "#",".",".",".",".",".",".",".",".","#",".","#",//8
        "#","#","#","#","#","#",".","#","#","#",".","#",//9
        "#",".",".",".",".",".",".","#",".",".",".","#",//10
        "#","#","#","#","#","#","#","#","#","#","#","#",};//11

    for (i = 0; i <12; i++)
        if (mazeone[i][0] == "." ) {
            start = i; 
            mazeone[start][0] = "x";
            xpos = start;
            break;
        }

    printf("X is the starting point.\n");
    printf("Press Space Bar to watch the X move.\n\n\n");
    getchar();
    mazePrint(mazeone);
    getchar(); 
    return 0;
}

void mazePrint(char *maze[12][12])
{   
    int x = 0; 
    int y = 0;

    system("cls");
    for (x = 0; x < 12; x++) {
        for (y = 0; y < 12; y++) {
            printf("%s ", maze[x][y]);
        }
        printf("\n"); 
    }
    getchar(); 
    mazeTraversal(maze);
}

void mazeTraversal(char *maze[12][12])
{
    int x = 0; 
    int y = 0;

    for (x = 0; x < 12; x++) {
        for (y = 0; y < 12; y++) {
            if (maze[y][x] == "x")
                break;
        } 
        if(maze[y][x] == "x")
            break;
    }

    for (y = 0; y < 12; y++) {
        for (x = 0; x < 12; x++) {
            if (maze[y][x] == "x")
                break;
        } 
        if (maze[y][x] == "x")
            break;
    }

    maze[y][x] = ".";

    switch (face) {
        case 6:{
            if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x"; 
                face = 4;
            }
             break;
        }
        case 8:{
            if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x"; 
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            }
             break;
        }
        case 4:{
            if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            } else if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x"; 
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            }
             break;
        }
        case 5:{
            if (maze[y - 1][x] == ".") {
                maze[y - 1][x] = "x";
                face = 4;
            } else if (maze[y][x-1] == ".") {
                maze[y][x-1] = "x"; 
                face = 5;
            } else if (maze[y + 1][x] == ".") {
                maze[y + 1][x] = "x"; 
                face = 6;
            } else if (maze[y][x+1] == ".") {
                maze[y][x+1] = "x";
                face = 8;
            }
             break;
        }
    }

    mazePrint(maze);
}