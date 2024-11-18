#include "chainlink.hpp"
#include "node.hpp"
#include <iostream>

int main()
{
  ChainLink link1("red");
  Node node1(&link1);

  ChainLink link2("green");
  Node node2(&link2, &node1);

  ChainLink link3("yellow");
  Node node3(&link3, &node2);

  std::cout << node1.displayValue() << std::endl;
  std::cout << node1.getNext()->displayValue() << std::endl;
  std::cout << node2.getNext()->displayValue() << std::endl;
}
