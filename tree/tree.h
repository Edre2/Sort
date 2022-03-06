#ifndef TREE_H
#define TREE_H

#include <iostream>
#include "node.h"

template<typename T>

class Tree
{
    public:
        Tree(std::vector<T> array)
        {
            m_root = new Node<T>(array[0]);

            for(int i = 1; i < int(array.size()); i++)
                m_root->addElement(array[i]);
        };
        Tree(T element)
        {
            m_root = new Node<T>(element);
        };

        ~Tree()
        {
            delete m_root;
        };

        void addNode(T element)
        {
            m_root->addElement(element);
        }

        void traverse(std::vector<T> & array) const
        {
            m_root->visit(array);
        };

        bool search(T element)
        {
            return m_root->search(element);
        }
        

    private:
        Node<T> * m_root;
};


#endif