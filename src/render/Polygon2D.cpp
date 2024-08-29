//
// Created by SunCJ on 2024/8/29.
//

#include "polyscope/render/Polygon2D.h"
#include <iostream>
namespace polyscope {
namespace render {

void Polygon2D::draw() {
  if (!enable_ || vertices.empty()) return;
  // Draw the polygen 2D
  std::cout << "======= draw polygen 2D ======" << std::endl;
  for(auto& v: vertices){ std::cout << "[ " <<v.x << " " << v.y << "], " ;}
  std::cout << std::endl;



};




} // namespace render
} // namespace polyscope