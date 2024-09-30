#ifndef LEAF_H
#define LEAF_H

#include "Component.hpp"
#include <string>

class Leaf : public Component {
 public:
  std::string Operation() const override {
    return "Leaf";
  }
};

#endif
