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
void menormayorprom(int x, int y, int z)
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

int ejercicio4(int numero1, int numero2)
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

int ejercicio5(int a)
{
    int c=0;

    for(int i=2; i<a; i++){
		if(a%i==0){
			cout<<"No es primo"<<endl;
			cout<<"El primer divisor es : "<< i <<endl;
			c++;
			break;
		}
	}
	if(c==0){
		cout<<"Es primo"<<endl;
    }
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

int ejercicio8(int c)
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
		cout<<c<<" al revez es "<<m<<" por ende es palindrome"<<endl;
	}
	else{
		cout<<c<<" al revez es "<<m<<" por ende NO es palindorme"<<endl;
	}




}

int ejercicio9(int a)
{
	if(a%100==0){
        if(a%400==0){
            cout<<"El anio es bisiesto"<<endl;
        }else{
            cout<<"El anio no es bisiesto"<<endl;
        }
    }else if (a%4==0){
        cout<<"Es bisiesto"<<endl;
    }else{
        cout<<"El anio no es bisiesto"<<endl;
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
    //mayoromenopr();
    //nnumeros(10);
    //mayoromenopr(54);
    //ejercicio4(5,8);
    //ejercicio5(8);
    //ejercicio6(8);
    //ejercicio7(12345);
    //ejercicio8(12345);
    //ejercicio9(2018);
    //ejercicio10(10);
    //ejercicioExtra(8);
}
