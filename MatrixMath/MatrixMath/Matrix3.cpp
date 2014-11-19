#include "Matrix3.h"

Matrix3::Matrix3()
{
	for (int col = 0; col < 3; col++)
	{
		for (int row = 0; row < 3; row++)
		{
			m_matrixArray[col][row] = 0;
		}
	}
}

Matrix3::Matrix3(float const m00,
				float const m01,
				float const m02,
				float const m10,
				float const m11,
				float const m12,
				float const m20,
				float const m21,
				float const m22)
{
	m_matrixArray[0][0] = m00;
	m_matrixArray[0][1] = m01;
	m_matrixArray[0][2] = m02;
	m_matrixArray[1][0] = m10;
	m_matrixArray[1][1] = m11;
	m_matrixArray[1][2] = m12;
	m_matrixArray[2][0] = m20;
	m_matrixArray[2][1] = m21;
	m_matrixArray[2][2] = m22;
}

Matrix3::Matrix3(Matrix3& a_RHS)
{
	*this = a_RHS;
}

Matrix3 Matrix3::operator+(Matrix3& a_RHS)
{
	Matrix3 temp;
	for (int col = 0; col < 3; col++)
	{
		for (int row = 0; row < 3; row++)
		{
			temp.m_matrixArray[col][row] = m_matrixArray[col][row] + a_RHS.m_matrixArray[col][row];
		}
	}
	return temp;
}

Matrix3 Matrix3::operator -(Matrix3& a_RHS)
{
	Matrix3 temp;
	for (int col = 0; col < 3; col++)
	{
		for (int row = 0; row < 3; row++)
		{
			temp.m_matrixArray[col][row] = m_matrixArray[col][row] - a_RHS.m_matrixArray[col][row];
		}
	}
	return temp;
}

Matrix3& Matrix3::operator=(const Matrix3& a_RHS)
{
	for (int col = 0; col < 3; col++)
	{
		for (int row = 0; row < 3; row++)
		{
			m_matrixArray[col][row] = a_RHS.m_matrixArray[col][row];
		}
	}
	return *this;
}



Matrix3 Matrix3::Identity()
{
	Matrix3 temp;
	for (int i = 0; i < 3; i++)
	{
		temp.m_matrixArray[i][i] = 1;
	}
	return temp;
}

Matrix3& Matrix3::Transpose()
{

	return *this;
}

Matrix3::~Matrix3()
{

}