#pragma once
class Vector2
{
private:
public:
	int x;
	int y;
	Vector2(int x, int y);

	const Vector2& operator +(const Vector2& clone);
	const Vector2& operator *(const Vector2& clone);
	const Vector2& operator /(const Vector2& clone);

	const Vector2& operator ++();
	const Vector2& operator --();
};