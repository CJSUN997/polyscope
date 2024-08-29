//
// Created by SunCJ on 2024/8/29.
//

#include "polyscope/render/Polygon2D.h"
#include "polyscope/polyscope.h"

#include <iostream>
namespace polyscope {
namespace render {


// init function (prepare shader programs)
void Polygon2D::init() {
  std::vector<std::string> rules;
  if (options::transparencyMode == TransparencyMode::Pretty) rules.push_back("TRANSPARENCY_PEEL_GROUND");
  polygon2DProgram = render::engine->requestShader("POLYGON2D", rules, render::ShaderReplacementDefaults::Process);
  std::cout << "request shader finish, program id: " << polygon2DProgram->getUniqueID() << std::endl;
  return ;
}

void Polygon2D::draw() {
  if (!enable_ || vertices.empty()) return;
  // Draw the polygen 2D
  std::cout << "======= draw polygen 2D ======" << std::endl;
  for(auto& v: vertices){ std::cout << "[ " <<v.x << " " << v.y << "], " ;}
  std::cout << std::endl;
  render::engine->bindSceneBuffer();
  polygon2DProgram->setAttribute("a_position", vertices);
  render::engine->applyTransparencySettings();
  polygon2DProgram->draw();
  std::cout << "draw frame finish" << std::endl;

};

} // namespace render
} // namespace polyscope