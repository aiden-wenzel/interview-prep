class Unweighted_Graph {

public:
	Unweighted_Graph(int num_edges, int num_verticies); 
	~Unweighted_Graph();

	int	get_num_verticies();

private:
	int* adjacentcy_matrix;
	int num_verticies;
};
