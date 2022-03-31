#include<vector>
#include<iostream>
using namespace std;
//data structure to store a graph edge
struct edge{
    int src, dest, wt;
};

typedef pair<int,int> Pair;

class graph{
    public:
    vector<vector<Pair>> adjList;//a vector of pairs to reprsent an adj. list
    graph(vector<edge> const &edges, int n){
        adjList.resize(n);//resize the vector to hold n elements

        for(auto &edge: edges)//add edges to the directed graph
        {
            int src = edge.src;
            int dest = edge.dest;
            int wt = edge.wt;

            adjList[src].push_back(make_pair(dest,wt));//insert at the end
        }//end for
    }//end graph
};//end class

void printgraph(graph const &graph, int n){
    for(int i=0;i<n;i++){
        for(Pair v:graph.adjList[i]){
            cout << "(" << i << "," << v.first << "," << v.second << ")";
        }
        cout << endl;
    }//end main for
}//end printgraph

int main(){
    vector<edge> edges = {{0, 1, 6},{1, 6, 9},{1, 5, 4},{1, 2, 7},{2, 3, 10},{3, 4, 5},{4, 6, 3},{5, 6, 1},{6, 0, 4},
                            {6, 2, 4},{7, 0, 4}};
    int n=9;
    graph g(edges,n);

    printgraph(g,n);
return 0;
}