#pragma once

namespace engine {

    class Vector3 {
    public:
        float x, y, z;

        Vector3();
        Vector3(float x, float y, float z);

        Vector3 operator+(const Vector3& v) const;
        Vector3 operator-(const Vector3& v) const;
        Vector3 operator*(float scalar) const;
        float Dot(const Vector3& v) const;
        Vector3 Cross(const Vector3& v) const;
        void Normalize();
    };

} // namespace engine