#include <cmath>
#include <malloc.h>
#include <math.h>

#include "graph.hpp"

Unweighted_Graph::Unweighted_Graph(int num_edges, int num_verticies) {
	int num_matrix_elements = pow(num_edges, 2);
	this->num_verticies = num_verticies;
	int matrix_size = sizeof(num_matrix_elements);
	this->adjacentcy_matrix = (int*)malloc(matrix_size);
}

Unweighted_Graph::~Unweighted_Graph() {

}

int Unweighted_Graph::get_num_verticies() {
	return this->num_verticies;
}
