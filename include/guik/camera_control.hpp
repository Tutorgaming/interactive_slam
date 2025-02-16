#ifndef GLK_CAMERA_CONTROL_HPP
#define GLK_CAMERA_CONTROL_HPP

#include <memory>
#include <GL/gl3w.h>
#include <Eigen/Core>
#include <Eigen/Geometry>

namespace guik {

class CameraControl {
public:
  virtual ~CameraControl() {}

  virtual void mouse(const Eigen::Vector2i& p, int button, bool down) = 0;

  virtual void drag(const Eigen::Vector2i& p, int button) = 0;

  virtual void scroll(const Eigen::Vector2f& rel) = 0;

  virtual Eigen::Matrix4f view_matrix() const = 0;
};

class ArcCameraControl : public CameraControl {
public:
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW

  ArcCameraControl();

  virtual ~ArcCameraControl() override;

  void mouse(const Eigen::Vector2i& p, int button, bool down) override;
  void drag(const Eigen::Vector2i& p, int button) override;
  void scroll(const Eigen::Vector2f& rel) override;

  Eigen::Quaternionf rotation() const;
  Eigen::Matrix4f view_matrix() const override;

private:
  Eigen::Vector3f center;
  double distance;

  Eigen::Vector2i drag_last_pos;

  bool left_button_down;
  double theta;
  double phi;

  bool middle_button_down;
};

}  // namespace guik

#endif