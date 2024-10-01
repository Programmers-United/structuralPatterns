#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Component.hpp"
#include <iostream>

void ClientCode(Component *component) {
  std::cout << "RESULT: " << component->Operation();
}

void ClientCode2(Component *component1, Component *component2) {
  if (component1->IsComposite()) {
    component1->Add(component2);
  }
  std::cout << "RESULT: " << component1->Operation();
}

#endif
