/*#include "node.h"

template<typename T>

Node<T>::Node(T value)
{
    m_value = value;
    m_right_exists = false;
    m_left_exists = false;
}

template<typename T>

Node<T>::~Node<T>()
{
    delete m_left;
    delete m_right;
}

template<typename T>

void Node<T>::addElement(T value)
{
    if(value > m_value)
        if(m_left_exists)
            m_left->addElement(value);
        else
        {
            m_left = new Node<T>(value);
            m_left_exists = true;
        }
    else
        if(m_right_exists)
            m_right->addElement(value);
        else
        {
            m_right = new Node<T>(value);
            m_right_exists = true;
        }
}

template<typename T>

bool Node<T>::leftExists()
{
    return m_left_exists;
}

template<typename T>

bool Node<T>::rightExists()
{
    return m_right_exists;
}

template<typename T>

Node<T> Node<T>::left()
{
    return m_left;
}

template<typename T>

Node<T> Node<T>::right()
{
    return m_right;
}*/