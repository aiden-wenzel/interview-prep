#include <cmath>
#include <malloc.h>
#include <math.h>

#include "graph.hpp"

Unweighted_Graph::Unweighted_Graph(int num_verticies) : num_verticies(num_verticies) {
	this->num_verticies = num_verticies;
	for (int i = 0; i < num_verticies; i++) {
		std::vector<int> empty = {};
		this->adjacency_list.push_back(empty);
	}
	
}

Unweighted_Graph::~Unweighted_Graph() {
		
}


void Unweighted_Graph::add_node() {

}

void Unweighted_Graph::set_node_value(int index, Node value) {
	this->node_values[index] = value;
}

int Unweighted_Graph::get_num_verticies() {
	return this->num_verticies;
}

Node Unweighted_Graph::get_node(int index) {}
