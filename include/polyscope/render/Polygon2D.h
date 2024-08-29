//
// Created by SunCJ on 2024/8/29.
//

#ifndef POLYSCOPE_DEMO_APP_POLYGON2D_H
#define POLYSCOPE_DEMO_APP_POLYGON2D_H

#include "polyscope/types.h"
#include "polyscope/view.h"

#include <glm/glm.hpp>

#include <vector>
#include <memory>
namespace polyscope {
namespace render {

enum Polygen2DType {FILL, LINE, POINT};

class ShaderProgram;
class TextureBuffer;
class FrameBuffer;
class RenderBuffer;

class Polygon2D {
public:
  Polygon2D() {};
  void init();
  void draw();
  void setEnable(bool enable) { enable_ = enable; }; // set the enable status of the Polygon2D
  bool isEnable() { return enable_; }; // check if the Polygon2D is enabled
  void setVertices(const std::vector<glm::vec2>& vertices) { this->vertices = vertices; }; // set the vertices of the Polygon2D

  void setType(Polygen2DType type) { type_ = type; }; // set the type of the Polygon2D
private:
  std::vector<glm::vec2> vertices;
  bool enable_ = false;
  Polygen2DType type_ = LINE;

  std::shared_ptr<ShaderProgram> polygon2DProgram;

};

} // namespace render
} // namespace polyscope

#endif // POLYSCOPE_DEMO_APP_POLYGON2D_H
