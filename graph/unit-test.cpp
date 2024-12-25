#include <gtest/gtest.h>

#include "graph.hpp"

TEST(simple, get_size){
	Unweighted_Graph test_graph(4, 10);
	ASSERT_EQ(test_graph.get_num_verticies(), 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
