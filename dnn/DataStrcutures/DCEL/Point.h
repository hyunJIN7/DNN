#pragma once
//this class defines a point in 2D space

//can use int, double
template <typename T = double>
class Point {
protected:
	T x, y;

public:

	Point();
	Point(T, T);
	Point(Point<T>*);
	~Point();
	bool operator==(Point<T>);
	T getx(void);
	void setx(T);
	T gety(void);
	void sety(T);

	double distance(Point<T>);
};
