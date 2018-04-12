#include <iostream>

using namespace std;

bool esMayoroMenor(int x)
{
  return (x>=18);
}

void nnumeros(int x, int i=1)
{
  if (x<i)
    return;
  if(x>=i){
    cout<<i;
    if(i<x)
        cout<<",";
    nnumeros(x, ++i);
}
}
void menormayorprom(int x, int y, int z, int &may, int &men, float &prom)
{
    prom=(float)(x+y+z)/3;

    if (x>y && x>z){
        may=x;

		if(y>z){
        men=z;
		}else{
		men=y;
		}
	}else if(y>x && y>z){
        may=y;
		if(x>z){
        men=z;
		}else{
		men=x;
		}
	}else{
	    may=z;
		if(x>y){
            men=y;
		}else{
		    men=x;
		}
	}

}

void ejercicio4(int numero1, int numero2)
{
    if(numero1%2==0 && numero2%2==0){
        cout<<"Ambos numeros son multiplos de 2"<<endl;
    }else if(numero1%2!=0 && numero2%2!=0) {
        cout<<"Ambos numeros no son multiplos de 2"<<endl;
    }else if(numero1%2==0 && numero2%2!=0){
        cout<<numero1<<" es multiplo de dos"<<endl;
        cout<<numero2<<" no es multiplo de dos"<<endl;
    }else{
        cout<<numero1<<" es multiplo de dos"<<endl;
        cout<<numero2<<" no es multiplo de dos"<<endl;
    }
    if(numero2%numero1==0){
        cout<<numero1<<" es multiplo de "<<numero2<<endl;
    }else if(numero1%numero2==0){
        cout<<numero2<<" es multiplo de "<<numero1<<endl;
    }
    int cuadrado=numero1*numero1;
    if(cuadrado==numero2){
        cout<<"el primer numero elevado al cuadrado es igual al segundo"<<endl;
    }

}

bool ejercicio5(int numero)
{
    for(int i=2; i<numero; i++){
        if(!(numero%i))
            return false;
    }
    return true;
}

int ejercicio6(int n)
{
     for (int j=2;j<=n;j++){
        int a=0;
        for(int i=1;i<=n;i++){
            if(j%i==0){
            a++;
            }
        }
        if (a==2){
            cout<<j<<'\t';
        }
    }

}

int ejercicio7(int numero5d)
{
    int res, ent, cont=5;

    cout<<numero5d%10<<'\t';
    while(cont!=1){
        numero5d=numero5d/10;
        res=numero5d%10;
        cout<<res<<'\t';
        cont=cont-1;

    }
}

bool ejercicio8(int c)
{
    int a,d,b=10000,m=0;

	a=c;

	while(a>=1){
		d=a%10;
		m=m+(d*b);
		b=b/10;
		a=a/10;
	}
	if(c==m){
		return true;
	}
	else{
		return false;
	}




}

bool ejercicio9(int a)
{
	if(a%100==0){
        if(a%400==0){
            return true;
        }else{
            return false;
        }
    }else if (a%4==0){
        return true;
    }else{
        return false;
    }


}

int ejercicio10(int x)
{
    int a,b,c;
    x=x-3;
    a=0;
    b=1;
    cout<<a<<","<<b<<",";
    for(int i=0;i<=x;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<",";
    }


}

int ejercicioExtra(int n)
{
int l=1;

    for(int i=1; i<=n; i++){
        l=l*i;
    }
    cout<<"Factorial : "<<(long long) l;

}

int main()
{
    //cout<<esMayoroMenor(5)<<endl;
    //nnumeros(150);
    /*
    int mayor, menor;
    float promedio;
    menormayorprom(54,90,80,mayor,menor,promedio);
    cout<<"El mayor es : "<<mayor<<endl;
    cout<<"El menor es : "<<menor<<endl;
    cout<<"El promedio es : "<<promedio<<endl;
    */
    //ejercicio4(5,8);
    cout<<ejercicio5(19);
    //ejercicio6(8);
    //ejercicio7(12345);
    //cout<<ejercicio8(12321)<<endl;
    //cout<<ejercicio9(2018)<<endl;
    //ejercicio10(10);
    //ejercicioExtra(8);
}
