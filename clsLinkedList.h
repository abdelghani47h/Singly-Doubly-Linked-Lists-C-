#pragma once
#include <iostream>
#include "clsNode.h"

template <class T>
class clsLinkedList
{
private:
    clsNode<T>* head = nullptr;


public:

    void InsertAtBeginning(T value)
    {
        clsNode<T>* new_node = new clsNode<T>(value);

        new_node->next = head;
        head = new_node;
    }

    void Print()
    {
        clsNode<T>* current = head;

        while (current != nullptr)
        {
            cout << current->Value() << " ";
            current = current->next;
        }
    }

    clsNode<T>* Find(T value)
    {
        clsNode<T>* current = head;

        while (current != nullptr)
        {
            if (current->Value() == value)
                return current;

            current = current->next;
        }

        return nullptr;
    }

    void InsertAfter(clsNode<T>* prev_node, T Value) {

        if (prev_node == nullptr) {
            return;
        }

        clsNode<T>* new_node = new clsNode<T>(Value);
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }

    void InsertAtEnd(T value)
    {

        clsNode<T>* new_Node = new clsNode<T>(value);
        new_Node->next = nullptr;


        if (head == nullptr)
        {
            head = new_Node;
            return;
        }

        clsNode<T>* LastNode = head;

        while (LastNode->next != nullptr)
        {
            LastNode = LastNode->next;
        }
        LastNode->next = new_Node;
    }

    void DeleteNode(T value)
    {
        if (head == NULL)
            return;

        clsNode<T>* Current = head, * perv = head;

        if (Current->value == value)
        {
            head = Current->next;
            delete Current;
            return;
        }

        while (Current != nullptr)
        {
            if (Current->value == value)
            {
                perv->next = Current->next;
                delete Current;
                return;
            }
            perv = Current;
            Current = Current->next;
        }


    }

    void DeleteFirstNode()
    {
        if (head == nullptr)
            return;

        clsNode<T>* Current = head;
        head = Current->next;
        delete Current;
    }

    void DeleteLastNode()
    {
        if (head == nullptr)
            return;

        clsNode<T>* Current = head, * perv = head;

        if (Current->next == nullptr)
        {
            head = nullptr;
            delete Current;
            return;
        }


        while (Current->next != nullptr)
        {
            perv = Current;
            Current = Current->next;

        }
        perv->next = nullptr;
        delete Current;
    }

    int Size()
    {
        clsNode<T>* temp = head;
        short count = 0;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    bool IsEmpty()
    {
        return head == nullptr;
    }

    bool IsExist(T val)
    {
        clsNode<T>* node = Find(val);

        return node != nullptr;

    }
};
