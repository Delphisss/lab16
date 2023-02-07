#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
//เขียนเพิ่มตรงนี้ ฟังก์ชั่นสุ่ม
void shuffle(int &q,int &w,int &e,int &r){ 
	int a=q,b=w,c=e,d=r;
	int x=rand()%4;
	if(x==0){
		q = a;
		int y=rand()%3;
		if(y==0){
			w=b;
			int z=rand()%2;
			if(z==0){
				e=c;
				r=d;
			}
			if(z==1){
				r=c;
				e=d;
			}
		}
		if(y==1){
			e=b;
			int z=rand()%2;
			if(z==0){
				w=c;
				r=d;
			}
			if(z==1){
				r=c;
				w=d;
			}
		}
		if(y==2){
			r=b;
			int z=rand()%2;
			if(z==0){
				w=c;
				e=d;
			}
			if(z==1){
				e=c;
				w=d;
			}
		}
	}
	if(x==1){
		w = a;
		int y=rand()%3;
		if(y==0){
			q=b;
			int z=rand()%2;
			if(z==0){
				e=c;
				r=d;
			}
			if(z==1){
				r=c;
				e=d;
			}
		}
		if(y==1){
			e=b;
			int z=rand()%2;
			if(z==0){
				q=c;
				r=d;
			}
			if(z==1){
				r=c;
				q=d;
			}
		}
		if(y==2){
			r=b;
			int z=rand()%2;
			if(z==0){
				q=c;
				e=d;
			}
			if(z==1){
				e=c;
				q=d;
			}
		}
	}
	if(x==2){
		e = a;
		int y=rand()%3;
		if(y==0){
			q=b;
			int z=rand()%2;
			if(z==0){
				w=c;
				r=d;
			}
			if(z==1){
				r=c;
				w=d;
			}
		}
		if(y==1){
			w=b;
			int z=rand()%2;
			if(z==0){
				q=c;
				r=d;
			}
			if(z==1){
				r=c;
				q=d;
			}
		}
		if(y==2){
			r=b;
			int z=rand()%2;
			if(z==0){
				q=c;
				w=d;
			}
			if(z==1){
				w=c;
				q=d;
			}
		}
	}
	if(x==3){
		r = a;
		int y=rand()%3;
		if(y==0){
			q=b;
			int z=rand()%2;
			if(z==0){
				w=c;
				e=d;
			}
			if(z==1){
				e=c;
				w=d;
			}
		}
		if(y==1){
			w=b;
			int z=rand()%2;
			if(z==0){
				q=c;
				e=d;
			}
			if(z==1){
				e=c;
				q=d;
			}
		}
		if(y==2){
			e=b;
			int z=rand()%2;
			if(z==0){
				q=c;
				w=d;
			}
			if(z==1){
				w=c;
				q=d;
			}
		}
	}


}
