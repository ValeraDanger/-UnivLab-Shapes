#pragma once

#include <vector>
#include "Shape.h"

class Image {
private:
  std::vector<Shape*> shapes;

public:
  void append(Shape* const s) { 
    this->shapes.push_back(s);
  }

  Shape* operator[](size_t index) { 
    return shapes[index];
  }

  void show() {
    for (size_t i = 0; i < this->shapes.size(); i++) {
      this->shapes[i]->show();
    }
  }
};
