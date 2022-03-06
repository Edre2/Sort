#include "tree.h"
#include <iostream>

using namespace std;

int main()
{
    // Test of the tree class
    std::vector<float> a;
    a.push_back(23.3);
    a.push_back(12.4);
    a.push_back(10.89);
    a.push_back(24);
    a.push_back(45);
    a.push_back(76);
    Tree<float> tree_test(a);
    tree_test.addNode(374.78);

    std::vector<float> test;
    tree_test.traverse(test);
    for(int i = 0; i < int(test.size()); i++)
        cout << test[i] << " ";

    if(tree_test.search(374.78))
        cout << "\nfound";
}