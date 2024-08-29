//
// Created by SunCJ on 2024/8/29.
//

#ifndef POLYSCOPE_DEMO_APP_POLYGEN2D_H
#define POLYSCOPE_DEMO_APP_POLYGEN2D_H
#include <glm/glm.hpp>
#include <vector>
namespace polyscope {
namespace render {

enum Polygen2DType {FILL, LINE, POINT};


class Polygen2D {
public:
  Polygen2D() {};

  void draw();
  void setEnable(bool enable) { enable_ = enable; }; // set the enable status of the Polygen2D
  bool isEnable() { return enable_; }; // check if the Polygen2D is enabled
  void setVertices(const std::vector<glm::vec2>& vertices) { this->vertices = vertices; }; // set the vertices of the Polygen2D

  void setType(Polygen2DType type) { type_ = type; }; // set the type of the Polygen2D
private:
  std::vector<glm::vec2> vertices;
  bool enable_ = false;
  Polygen2DType type_ = LINE;

};

} // namespace render
} // namespace polyscope

#endif // POLYSCOPE_DEMO_APP_POLYGEN2D_H
