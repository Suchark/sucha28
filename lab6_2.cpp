#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double a1){
    return (a1/180)*M_PI;
}

double rad2deg(double a2){
    return (a2*180)/M_PI;
}

double findXComponent(double a1, double a2, double l1, double l2){
    return l1*cos(a1) + l2*cos(a2);
}
double findYComponent(double a1, double a2, double l1, double l2){
    return l1*sin(a1) + l2*sin(a2);
}
double pythagoras(double x, double y){
    return sqrt(pow(x,2) + pow(y,2));
}
void showResult(double result, double deg)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << result << endl;
    cout << "Direction of the resultant vector (deg) = " << deg << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
cout << "Enter length of the first vector: ";
cin >> l1;
cout << "Enter direction of the first vector (deg): ";
cin >> a1;
cout << "Enter length of the second vector: ";
cin >> l2;
cout << "Enter direction of the second vector (deg): ";
cin >> a2;
    
a1 = deg2rad(a1);
a2 = deg2rad(a2);
xcomp = findXComponent(a1,a2,l1,l2);
ycomp = findYComponent(a1,a2,l1,l2);
result_vec_length = pythagoras(xcomp,ycomp);
result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

showResult(result_vec_length,result_vec_direction);


}

