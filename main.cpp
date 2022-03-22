#include <iostream>
#include <queue>
using namespace std;

int maze[10][10]{
        {1,1,1,1,1,1,1,1,1,1},
        {1,0,0,1,0,0,0,1,0,1},
        {1,0,0,1,0,0,0,1,0,1},
        {1,0,0,0,0,1,1,0,0,1},
        {1,0,1,1,1,0,0,0,0,1},
        {1,0,0,0,1,0,0,0,0,1},
        {1,0,1,0,0,0,1,0,0,1},
        {1,0,1,1,1,0,1,1,0,1},
        {1,1,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1, 1}};

class Box {
public:
    int i;
    int j;
    int val;

    Box(){}
    void SetMaze(int i , int j, int val){
        this->i = i;
        this->j = j;
        this->val = val;
    }
};

class Maze {
public:
    Box n[10][10];

    Maze(){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                n[i][j].SetMaze(i, j, maze[i][j]);
            }
        }
    }
};

void bfs(Maze &a){
    queue<Box> queue;
    Box prev[100];
    Box visited[100];
    // 初始化所有的前一节点，默认为-1
    for (Box & i : prev){
        i.val = -1;
    }


}

int main(){
    Maze a;
    return 0;
}