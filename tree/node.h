#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>

template<typename T>

class Node
{
    public:
        Node(T value)
        {
            m_value = value;
            m_right_exists = false;
            m_left_exists = false;
        };

        ~Node()
        {
            if(m_left_exists)
                delete m_left;
            if(m_right_exists)
                delete m_right;
        };

        void addElement(T value)
        {
            if(value < m_value)
            {
                if(m_left_exists)
                    m_left->addElement(value);
                else
                {
                    m_left = new Node<T>(value);
                    m_left_exists = true;
                }
            }
            else if (value != m_value)
            {
                if(m_right_exists)
                    m_right->addElement(value);
                else
                {
                    m_right = new Node<T>(value);
                    m_right_exists = true;
                }
            }
        };

        bool leftExists() const
        {
            return m_left_exists;
        };

        bool rightExists() const
        {
            return m_right_exists;
        };

        Node<T> left() const
        {
            return m_left;
        };
        Node<T> right() const
        {
            return m_right;
        };

        void visit(std::vector<T> & array) const
        {
            if(m_left_exists)
            {
                m_left->visit(array);
            }
            array.push_back(m_value);
            if(m_right_exists)
            {
                m_right->visit(array);
            }
        };

        bool search(T element)
        {
            if(m_value == element)
                return true;
            if(element < m_value && m_left_exists)
                return m_left->search(element);
            if(element  > m_value && m_right_exists)
                return m_right->search(element);
            return false;
        };

    private:
        T m_value;
        bool m_left_exists;
        bool m_right_exists;
        Node<T> * m_left;
        Node<T> * m_right;
};

#endif