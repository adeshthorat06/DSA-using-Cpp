#include<iostream>
using namespace std;
struct Vector2{
float x , y;

Vector2(int x , int y ): x(x), y(y){}

Vector2 operator+(Vector2& other) const{
    return Vector2(x + other.x , y + other.y);

}
Vector2 operator*(Vector2& other) const{
    return Vector2(x * other.x , y * other.y);

}

};

ostream& operator<<(std::ostream& stream, const Vector2& other){
    stream << other.x << ", " << other.y;
    return stream;
}
int main(){
Vector2 engine(20.00f, 30.00f);
Vector2 Torque(50.0f, 60.0f);
Vector2 Speed(10.0f, 15.0f);
Vector2 Result = (engine + Torque) * Speed; 
cout<< Result <<endl; 

int a = 0 ,  b = 1 ;
int sum = a + b;
cout<< sum << endl;
}