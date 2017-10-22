#include <stdio.h>

#define INF 999

typedef struct
{
	int cost;
	int from;
	int to;
} edge;

void dijkstra(int adjacency[][20], int num_nodes, int source);

//Finds the minimum viable edge from all edges 
edge find_min(int adjacency[][20], int visited[], int num_nodes);

int main()
{
	int num_nodes, adjacency[20][20], source;
	printf("Number of nodes : ");
	scanf("%d", &num_nodes);

	printf("Enter the source : ");
	scanf("%d", &source);

	source -= 1;

	printf("Enter the cost adjacency matrix : \n");
	for(int i = 0; i < num_nodes; i++)
		for(int j = 0; j < num_nodes; j++)
			scanf("%d", &adjacency[i][j]);

	dijkstra(adjacency, num_nodes, source);

	return 0;
}


edge find_min(int adjacency[][20], int visited[], int num_nodes)
{
	
	int min = INF, from = 0, to = 0;
	
	for (int i  = 0; i < num_nodes; i++) 
		for (int j = 0; j < num_nodes; j++)

			if(visited[i] && !visited[j] && adjacency[i][j] < min) 
			{
				from = i;
				to = j;
				min = adjacency[i][j];
			}

	edge cheap;
	cheap.cost = min;
	cheap.from = from;
	cheap.to = to;
	
	return cheap; 	
}

void dijkstra(int adjacency[][20], int num_nodes, int source)
{
	int visited[num_nodes];
	int distance[num_nodes];
	edge cheapest_edge;

	visited[source] = 1;
	distance[source] = 0;

	while(1)
	{
		cheapest_edge = find_min(adjacency, visited, num_nodes);

		if (cheapest_edge.cost == INF)
			break;

		visited[cheapest_edge.to] = 1;
		distance[cheapest_edge.to] = distance[cheapest_edge.from] + cheapest_edge.cost;
	}

	for (int i = 0; i < num_nodes; ++i)
		if (i != source)
			printf("The shortest path from %d to %d is %d\n", source + 1, i + 1, distance[i]);
}