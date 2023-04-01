#include <iostream>
using namespace std;

const int MAX_NODE_CNT = 10;
/*
Input:
- adjacent: the adjencency matrix
- nodeCnt: number of nodes
- source: the source node
- dist: to store the distances from the source

This function will find the distances from the source node 
to each node and put them into dist
*/
void dist_from_Source(const bool adjacency[][MAX_NODE_CNT], int dist[], int nodeCnt, int source);
int main(){
    int nodeCnt = 4;
    bool adjacency_matrix [MAX_NODE_CNT][MAX_NODE_CNT] =   {{1,1,1,1},
                                                            {1,1,1,1},
                                                            {1,1,1,1},
                                                            {1,1,1,1}};
    int dist[MAX_NODE_CNT] = {0};
    int source = 1;

    dist_from_Source(adjacency_matrix, dist, nodeCnt, source);

    for(int i = 0; i < nodeCnt; i++){
        cout << i << " : "<< dist[i] << endl;
    }

    return 0;
}

void dist_from_Source(const bool adjacency[][MAX_NODE_CNT], int dist[], int nodeCnt, int source){
    //initialize all node with maximum value
    //the ideal value should be +oo but it is inefficent and impossible to do
    //Hence, set the value to be the number of nodes 
    for(int i = 0; i < nodeCnt; i++){
        dist[i] = nodeCnt;
    }
    dist[source] = 0;
    int current_distance = 1;
    int complete = 1;// how many nodes are labelled with correct distance count
    
    while(complete < nodeCnt){
        for(int i = 0; i < nodeCnt; i++){
            // if crrent_distance = 1 (the source), the algorithm starts from the source node
            if(dist[i] == current_distance - 1){
                // to caheck every element in the row
                for(int j = 0; j < nodeCnt; j++){

                    // if the node is adjacent and not being labelled, label it
                    if(adjacency[i][j] == true && dist[j] == nodeCnt){
                        dist[j] = current_distance;
                        complete++;
                    }
                }
            }
        }
        // if all nodes are checked at current distance level, move on to the next level
        current_distance++;
    }
}