#include <iostream>
#include <algorithm> //เพิ่ม algorithm
using namespace std;

int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	
	int *pa = max_element(&a[0],&a[sizeof(a)/sizeof(a[0])]); //เพิ่มตรงนี้ 
	cout << "Address of the highest value in array A is " << pa << "\n";
	cout << "The highest value in array A is "<< *pa << "\n"; //ใส่ * ตรง pb
	
	double *pb = max_element(&b[0],&b[sizeof(b)/sizeof(b[0])]); //เพิ่มเหมือนกัน แต่เป็น b[]
	cout << "Address of the highest value in array B is " << pb << "\n";
	cout << "The highest value in array B is "<< *pb << "\n"; //ใส่ * ตรง pb

	return 0;
}
