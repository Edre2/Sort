#include "sort.h"

int main()
{
    int nbTest = 10;
    // Quick sort test :
    std::cout << "Quick sort test : \n";

    std::vector<int> test1;
    for(int i = 0; i < nbTest; i++)
        test1.push_back(rand() % 1000);
    quick_sort(test1,0,test1.size());

    for(int i = 0; i < int(test1.size()); i++)
        std::cout << test1[i] << "\n";

    // int test[10];
    // for(int i = 0; i < 10; i ++)
    //     test[i] = rand() % 100;
    // quick_sort(test, 0, 10);
    // for(int i = 0; i < 10; i++)
    //     std::cout << test[i] << "\n";

    // Bubble sort test :

    std::cout << "\n\nBubble sort test : \n";

    std::vector<int> test2;
    for(int i = 0; i < nbTest; i++)
        test2.push_back(rand() % 1000);
    bubble_sort(test2);

    for(int i = 0; i < int(test2.size()); i++)
        std::cout << test2[i] << "\n";

    // Tree sort test :

    std::cout << "\n\nTree sort test : \n";

    std::vector<int> test3;
    for(int i = 0; i < nbTest; i++)
        test3.push_back(rand() % 1000);
    tree_sort(test3);

    for(int i = 0; i < int(test3.size()); i++)
        std::cout << test3[i] << "\n";


    return EXIT_SUCCESS;
}