#pragma once
#include <string>

template <typename T> class Node
{
private:
  T value;
  Node *next = nullptr;

public:
  Node(T value, Node *previous)
  {
    this->value = value;
    previous->setNext(this);
  }

  Node(T value)
  {
    this->value = value;
  }

  void setNext(Node *next)
  {
    this->next = next;
  }

  Node *getNext()
  {
    return next;
  }

  std::string displayValue()
  {
    return value->get_color();
  }
};
