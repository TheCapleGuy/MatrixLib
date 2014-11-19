#ifndef _MATRIX3X3_H_
#define _MATRIX3X3_H_


class Matrix3
{
public:
	Matrix3();
	Matrix3(float const m00,
			float const m01,
			float const m02, 
			float const m10, 
			float const m11, 
			float const m12, 
			float const m20, 
			float const m21, 
			float const m22);
	Matrix3(Matrix3& a_RHS);

	~Matrix3();

	static Matrix3 Identity();
	/*Transpose this vector to change data*/
	Matrix3& Transpose();

	Matrix3 GetTranspose();

	Matrix3& operator =(const Matrix3& a_RHS);
	Matrix3 operator +(Matrix3& a_RHS);
	Matrix3 operator -(Matrix3& a_RHS);
	Matrix3 operator *(Matrix3& a_RHS);

	Matrix3 operator +=(Matrix3& a_RHS);
	Matrix3 operator -=(Matrix3& a_RHS);
	Matrix3 operator *=(Matrix3& a_RHS);

	float m_matrixArray[3][3];

};

#endif