#include <cmath>

#include "SMEVector3.h"

namespace SME
{
	SMEVector3::SMEVector3() : x(0.0f), y(0.0f), z(0.0f) {}

	SMEVector3::SMEVector3(float uX, float uY, float uZ) : x(uX), y(uY), z(uZ) {}

	SMEVector3::~SMEVector3()
	{}

	SMEVector3::SMEVector3(const SMEVector3& v) : x(v.x), y(v.y), z(v.z) {}

	SMEVector3& SMEVector3::operator=(const SMEVector3& v)
	{
		x = v.x;
		y = v.y;
		z = v.z;

		return *this;
	}

	SMEVector3 SMEVector3::operator+(const SMEVector3& v) const
	{
		return SMEVector3(x + v.x, y + v.y, z + v.z);
	}

	void SMEVector3::operator+=(const SMEVector3& v)
	{
		x += v.x;
		y += v.y;
		z += v.z;
	}

	SMEVector3 SMEVector3::operator-(const SMEVector3& v) const
	{
		return SMEVector3(x - v.x, y - v.y, z - v.z);
	}

	void SMEVector3::operator-=(const SMEVector3& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z;
	}

	SMEVector3 SMEVector3::operator*(const float c) const
	{
		return SMEVector3(c * x, c * y, c * z);
	}

	void SMEVector3::operator*=(const float c)
	{
		x *= c;
		y *= c;
		z *= c;
	}

	SMEVector3 SMEVector3::operator/(const float c) const
	{
		return SMEVector3(x / c, y / c, z / c);
	}

	void SMEVector3::operator/=(const float c)
	{
		x /= c;
		y /= c;
		z /= c;
	}

	float SMEVector3::operator*(const SMEVector3& v) const
	{
		return x * v.x + y * v.y + z * v.z;
	}

	SMEVector3 SMEVector3::cross(const SMEVector3& v) const
	{
		return SMEVector3(
			y * v.z - z * v.y,
			z * v.x - x * v.x,
			x * v.y - y * v.x
		);
	}

	void SMEVector3::operator%=(const SMEVector3& v)
	{
		*this = cross(v);
	}

	SMEVector3 SMEVector3::operator%(const SMEVector3& v) const
	{
		return SMEVector3(
			y * v.z - z * v.y,
			z * v.x - x * v.x,
			x * v.y - y * v.x
		);
	}

	const float SMEVector3::magnitude() const
	{
		return std::sqrt(x * x + y * y + z * z);
	}

	void SMEVector3::normalize()
	{
		float magnitude = this->magnitude();
		if ( magnitude > 0.0f )
		{
			x /= magnitude;
			y /= magnitude;
			z /= magnitude;
		}
	}

	float SMEVector3::dot(const SMEVector3& v) const
	{
		return x * v.x + y * v.y + z * v.z;
	}
}