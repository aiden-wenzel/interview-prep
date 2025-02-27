google_test = /usr/local/include/gtest 
make_bin = mkdir -p bin/

test-graph: 
	$(make_bin)
	g++ graph/unit-test.cpp graph/graph.cpp -I $(google_test) -lgtest -o bin/test-graph.out
	./bin/test-graph.out
