//Point
//#define _Point_H
//#ifndef _Point_H
class Point
{
	float x, y;
public:
	void initPoint(float x = 0, float y = 0) { this->x; this->y = y; }
	void move(float offX, float offY) { x += offX; y += offX; }
	float getX() const { return x; }
	float getY() const { return y; }
};
//#endif