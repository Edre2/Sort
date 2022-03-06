/*#include "tree.h"
#include <list>

template<typename T>

Tree<T>::Tree(std::vector<T> array)
{
    m_root = new Node<T>(array[0]);

    for(int i = 1; i < int(array.size()); i++)
        m_root->addElement(array[i]);
}

template<typename T>

Tree<T>::~Tree()
{
    delete m_root;
}*/