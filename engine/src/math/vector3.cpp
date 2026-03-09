#include "engine/math/vector3.h"
#include <cmath>

namespace engine {

	Vector3::Vector3() : x(0), y(0), z(0) {}
	Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

	Vector3 Vector3::operator+(const Vector3& v) const { return Vector3(x + v.x, y + v.y, z + v.z); }
	Vector3 Vector3::operator-(const Vector3& v) const { return Vector3(x - v.x, y - v.y, z - v.z); }
	Vector3 Vector3::operator*(float scalar) const { return Vector3(x * scalar, y * scalar, z * scalar); }
	float Vector3::Dot(const Vector3& v) const { return x * v.x + y * v.y + z * v.z; }
	Vector3 Vector3::Cross(const Vector3& v) const { return Vector3(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x); }
	void Vector3::Normalize() { float len = std::sqrt(x * x + y * y + z * z); if (len > 0) { x /= len; y /= len; z /= len; } }

} // namespace engine