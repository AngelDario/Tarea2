#include <iostream>

using namespace std;

int mayoromenopr(int x)
{
    if(x>=18){
        cout<<"Es mayor de edad"<<endl;
    } else {
        cout<<"Es menor de edad"<<endl;
    }

}
int nnumeros(int x, int i=1)
{
    cout<<i<<",";
    while(i!=x){
        i++;
        cout<<i;
        if(i!=x){
            cout<<",";
        }
    }

}
void menormayorprom()
{
    float promedio;

    promedio=(float)(x+y+z)/3;

    if (x>y && x>z){
        cout<<"El mayor es : "<<x<<endl;

		if(y>z){
		cout<<"El menor es : "<<z<<endl;
		}else{
		cout<<"El menor es : "<<y<<endl;
		}
	}else if(y>x && y>z){

		cout<<"El mayor es"<<y<<endl;

		if(x>z){
		cout<<"El menor es : "<<z<<endl;
		}else{
		cout<<"El menor es : "<<x<<endl;
		}
	}else{
		cout<<"El mayor es : "<<z<<endl;
		if(x>y){
			cout<<"El menor es : "<<y<<endl;
		}else{
			cout<<"El menor es : "<<x<<endl;
		}
	}
    cout<<"El promedio es : "<<promedio<<endl;

}

int main()
{
    //mayoromenopr();
    //nnumeros(10);
    mayoromenopr(54,98,78);
}
