#include <stdio.h>

#define INF 999

void prims(int adjacency[][20], int num_nodes);

typedef struct
{
	int cost;
	int from;
	int to;
}edge;

//Finds the minimum viable edge from all edges 
edge find_min(int adjacency[][20], int visited[], int num_nodes);

int main()
{
	int num_nodes, adjacency[20][20];
	
	printf("Number of nodes : ");
	scanf("%d", &num_nodes);

	for(int i = 0; i < num_nodes; i++)
		for(int j = 0; j < num_nodes; j++)
			scanf("%d", &adjacency[i][j]);

	prims(adjacency, num_nodes);

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

void prims(int adjacency[][20], int num_nodes)
{
	int visited[num_nodes];
	int parent[num_nodes];
	int total_cost = 0;
	int source = 0;
	edge cheapest_edge;

	//Choice of Source is random (Here 0)
	
	visited[source] = 1;
	parent[source] = 0;


	while(1)
	{
		cheapest_edge = find_min(adjacency, visited, num_nodes);

		if (cheapest_edge.cost == INF)
			break;

		visited[cheapest_edge.to] = 1;
		parent[cheapest_edge.to] = cheapest_edge.from;
		total_cost += cheapest_edge.cost;
	}

	for (int i = 0; i < num_nodes; ++i)
		if (i != source)
			printf("%d -- %d, Cost : %d\n", i  + 1, parent[i] + 1 , adjacency[i][parent[i]]);

	printf("Total Cost : %d\n", total_cost);
	
}