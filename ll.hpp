#pragma once
#include "chainlink.hpp"
#include "node.hpp"

class LL
{
private:
  Node<ChainLink *> *head;

public:
  template <typename T> LL(Node<T> *head)
  {
    this->head = head;
  }

  template <typename T> int size()
  {
    int size{0};
    Node<T> *it = head;

    while (it != nullptr)
    {
      // if (*it->getNext() == nullptr)
      //   break;
      it = it->getNext();
      size++;
    }
    return size;
  }
};
