#pragma once

namespace SME
{
	class SMEVector3
	{
	public:
		//Dimensions
		float x;
		float y;
		float z;

		//Constructors & Destructors
		SMEVector3();
		SMEVector3(float uX, float uY, float uZ);
		~SMEVector3();

		//Copy Constructors
		SMEVector3(const SMEVector3& v);
		SMEVector3& operator=(const SMEVector3& v);

		//Operations
		SMEVector3 operator+(const SMEVector3& v) const;
		void operator+=(const SMEVector3& v);

		SMEVector3 operator-(const SMEVector3& v) const;
		void operator-=(const SMEVector3& v);

		SMEVector3 operator*(const float c) const;
		void operator*=(const float c);

		SMEVector3 operator/(const float c) const;
		void operator/=(const float c);

		float dot(const SMEVector3& v) const;
		float operator*(const SMEVector3& v) const;

		SMEVector3 cross(const SMEVector3& v) const;
		void operator%=(const SMEVector3& v);
		SMEVector3 operator%(const SMEVector3& v) const;

		const float magnitude() const;

		void normalize()
		{
			float magnitude = this->magnitude();
			if ( magnitude > 0.0f )
			{
				x /= magnitude;
				y /= magnitude;
				z /= magnitude;
			}
		}
	};
}
