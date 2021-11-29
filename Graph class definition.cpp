class Graph 
{
  int numberOfVertices;

  list<int>* adjacencyLists;

  bool* visited;

  public:
    Graph(int vertices);

    void addEdge(int source, int destination);

    void BFS(int startingVertex);
};