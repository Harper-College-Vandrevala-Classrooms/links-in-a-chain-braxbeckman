#pragma once
#include <string>


class ChainLink {
    private:
      std::string color;

    public:
      ChainLink(std::string color) {
        this->color = color;
      }

      std::string get_color() {
        return this->color;
      }
};