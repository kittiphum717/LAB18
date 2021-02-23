#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
	
	double a_x1,a_x2,a_y1,a_y2,b_x1,b_x2,b_y1,b_y2;
	a_x1 = a.x;
	a_x2 = a_x1+a.w;
	a_y1 = a.y;
	a_y2 = a_y1-a.h;

	b_x1 = b.x;
	b_x2 = b_x1+b.w;
	b_y1 = b.y;
	b_y2 = b_y1-b.h;
	
	double resuit,x1,y1,x2,y2;
	x1 = max(a_x1,b_x1);
	y1 = min(a_y1,b_x1);
	x2 = min(a_x2,b_x2);
	y2 = max(a_y2,b_y2);

	if(x2-x1 >= 0 and y1-y2 >= 0){
		resuit = (x2-x1)*(y1-y2);
	}
	else{
		resuit = 0 ;
	}

	return resuit;


}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};
	cout << overlap(R1,R2) << endl;



	return 0;
}