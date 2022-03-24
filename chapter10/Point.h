
class Point{
private:
    double x,y;

public:
    //构造函数
    Point();
    Point(double x, double y);
    ~Point();
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
    void setPoint(double x, double y);
};