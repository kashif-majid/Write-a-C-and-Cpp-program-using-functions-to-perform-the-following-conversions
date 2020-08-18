#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


void dec_bin(int n)
{
	int a[32];  
    
	for(int i=0;n>0;i++)
	{	
		a[i]=n%2;    
		n=n/2;    
	}    
	cout<<"\nBinary of Given Number is=";    
	for(int i=i-1;i>=0;--i)    
	{    
	cout<<a[i];    
	}    
	 
}

void bin_dec(int m)
{
	int   binary_val, decimal_val = 0, base = 1, rem;
 
    binary_val = m;
    while (m > 0)
    {
        rem = m % 10;
        decimal_val = decimal_val + rem * base;
        m = m / 10 ;
        base = base * 2;
    }
    cout<<"Decimal of given numer is: "<<decimal_val;
    
}

void dec_oct(long o)
{
	long  q;
    int octalNumber[100], i = 1;
 
    q = o;
    while (q != 0)
    {
        octalNumber[i++] = q % 8;
        q = q / 8;
    }
    cout<<"Equivalent octal value of decimal no.: ";
    for (int j = i - 1; j > 0; j--)
        cout<<octalNumber[j];
    
}

void oct_dec(int s)
{
	long d = 0;
    int i = 0;
 
    while (s != 0)
    {
        d =  d +(s % 10)* pow(8, i++);
        s = s / 10;
    }
    cout<<"Equivalent decimal value: "<<d;
    
}	

void dec_hex(int n)
{
	int i = 0; 
 	char hex[10];
 	while(n!=0) 
 	{   
 	int k=0; 
 	k=n%16; 
  	if(k<10) 
 	{ 
    	hex[i]=(k+48); 
    	i++; 
  	} 
  	else
   	{ 
    	hex[i]=(k+55); 
    	i++; 
    } 
    n=n/16; 
	}
	cout<<"Equivalent hexadecimal value:";
	for(int j=i-1;j>=0;j--)
		cout<<hex[j];
	
}

int hex_dec(char x[])
{
	long d;
    int val,len;
    d=0;
    len=strlen(x);
    len--;
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]>='0'&&x[i]<='9')
        {
            val=x[i]-48;
        }
        else 
		if(x[i]>='a'&&x[i]<='f')
        {
          val=x[i]-97+10;
        }
        else
		if(x[i]>='A'&&x[i]<='F')
        {
          val=x[i]-65+10;
        }

        d+=val*pow(16,len);
        len--;
    }
	cout<<"Equivalent decimal value:"<<d;	
		
}

main()
{
int z,a,b,d,c,e,h;
char f[15];

do{
	system("cls");
	cout<<"--------------MENU----------------------\n";
	cout<<"1.DECIMAL TO BINARY\n";
	cout<<"2.BINARY TO DECIMAL\n";
	cout<<"3.DECIMAL TO OCTAL\n";
	cout<<"4.OCTAL TO DECIMAL\n";
	cout<<"5.DECIMAL TO HEXADECIMAL\n";
	cout<<"6.HEXADECIMAL TO DECIMAL\n";
	cout<<"ENTER YOUR CHOICE: ";
	cin>>z;
	
switch(z){
	case 1:
		cout<<"Enter the decimal number: ";
		cin>>a;
		dec_bin(a);
	break;
	case 2:
		cout<<"Enter a binary number: ";
    	cin>>b;
    	bin_dec(b);
    break;
    case 3:
    	cout<<"Enter the decimal number: ";
    	cin>>c;
    	dec_oct(c);
    break;
    case 4:
    	cout<<"Enter any octal number: ";
    	cin>>d;
    	oct_dec(d);
    break;
    case 5:
    	cout<<"Enter the decimal number: ";
    	cin>>e;
    	dec_hex(e);
    break;
    case 6:
    	cout<<"Enter the hexadecimal number: ";
    	cin>>f;
    	hex_dec(f);
    break;
		
	default:
		cout<<"INVALID INPUT\n";
	break;
}
cout<<"\n";
cout<<"IF U WANT TO CONTINUE PRESS 1 IF NOT THAN 2:";
cin>>h;
}
while(h==1);
}
