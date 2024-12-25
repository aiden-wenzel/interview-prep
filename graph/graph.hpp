#include <string>
#include <vector>

class Node {
	std::string data;
	int index;
	Node(std::string d, int i) : data(d), index(i) {};
};

class Unweighted_Graph {

public:
	Unweighted_Graph(int num_verticies); 
	~Unweighted_Graph();

	void add_node();

	void set_node_value(int index, Node value);

	int	get_num_verticies();
	Node get_node(int index);

private:
	std::vector<std::vector<int>> adjacency_list;
	std::vector<Node> node_values;
	int num_verticies;
	int num_edges;
};
