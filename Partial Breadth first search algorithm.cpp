void Graph::BFS(int startingVertex) 
{
  visited = new bool[numberOfVertices];

  //Initialize visited pointer with false

  list<int> queue;

  visited[startingVertex] = true;

  //Add the starting vertex to the queue

  //define iterator of type list<int>

  while (!queue.empty()) 
  {
    int currentVertex = queue.front();
    cout << "Visited V" << currentVertex << " ";
    queue.pop_front();

    //For loop definition starting from current vertex to last vertex
    {
      int adjacentVertex = *listIterator;

      if (!visited[adjacentVertex]) {

        visited[adjacentVertex] = true;

        queue.push_back(adjacentVertex);
      }
    }
  }
}