#include <bits/stdc++.h>  
using namespace std; 
   
class Graph { 
	int X;
    list<int> *adj;
    bool isCyclicUtil(int X, bool visited[], bool *rs);
public: 
    Graph(int X);
    void addEdge(int X, int Y);
    bool isCyclic();
}; 
  
Graph::Graph(int X) { 
    this-> X = X; 
    adj = new list<int>[X]; 
} 
  
void Graph::addEdge(int X, int Y) { 
    adj[X].push_back(Y);
} 
  
bool Graph::isCyclicUtil(int X, bool visited[], bool *recStack) { 
    if(visited[X] == false) { 
        visited[X] = true; 
        recStack[X] = true; 
  
        list<int>::iterator i; 
        for(i = adj[X].begin(); i != adj[X].end(); ++i) { 
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) ) 
                return true; 
            else if (recStack[*i]) 
                return true; 
        }
    }
    recStack[X] = false;
    return false;
} 
  
bool Graph::isCyclic() { 
    bool *visited = new bool[X];
    bool *recStack = new bool[X];

    for(int i = 1; i <= X; i++) { 
        visited[i] = false; 
        recStack[i] = false; 
    } 

    for(int i = 1; i <= X; i++) 
        if (isCyclicUtil(i, visited, recStack)) 
            return true; 

    return false; 
} 
  
int main() {
    ios::sync_with_stdio(0);
    
    Graph graph(100);
    int testcase, N, M;
    cin >> testcase;
			for (int i = 1; i <= testcase; i++) {
        		cin >> N >> M;
        		graph.addEdge(N, M); 
    		}
  
    if(graph.isCyclic()) 
        cout << "Ada Cycle!"; 
    else
        cout << "Tidak Ada Cycle!";
        cout << endl;
    return 0; 
}
