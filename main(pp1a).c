#include<stdio.h> 
#include<string.h>   
#include<math.h> 

void dec_bin(int n)
{
	int a[30],i;  
    
	for(i=0;n>0;i++)
	{	
		a[i]=n%2;    
		n=n/2;    
	}    
	printf("\nBinary of Given Number is=");    
	for(i=i-1;i>=0;--i)    
	{    
	printf("%d",a[i]);    
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
    printf("Decimal of given numer is: %d \n", decimal_val);
}

void dec_oct(long o)
{
	long  q;
    int octalNumber[10], i = 1, j;
 
    q = o;
    while (q != 0)
    {
        octalNumber[i++] = q % 8;
        q = q / 8;
    }
    printf("Equivalent octal value: ", o);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
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
    printf("Equivalent decimal value: %d",d);
}	

void dec_hex(int n)
{
	int i = 0,j; 
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
	printf("Equivalent hexadecimal value:");
	for(j=i-1;j>=0;j--)
		printf("%c", hex[j]);
}

void hex_dec(char x[])
{
    long d;
    int i=0,val,len;
    d=0;
    len=strlen(x);
    len--;
    for(i=0;x[i]!='\0';i++)
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
	printf("Equivalent decimal value: %d", d);
}



main()
{

int z,a,b,d,c,e,h;
char f[15];


do{
	system("cls");
	printf("--------------MENU----------------------\n");
	printf("1.DECIMAL TO BINARY\n");
	printf("2.BINARY TO DECIMAL\n");
	printf("3.DECIMAL TO OCTAL\n");
	printf("4.OCTAL TO DECIMAL\n");
	printf("5.DECIMAL TO HEXADECIMAL\n");
	printf("6.HEXADECIMAL TO DECIMAL\n");
	printf("ENTER YOUR CHOICE: ",z);
	scanf("%d", &z);
	
switch(z){
	case 1:
		printf("Enter the decimal number: ");
		scanf("%d",&a);
		dec_bin(a);
	break;
	case 2:
		printf("Enter a binary number: ");
    	scanf("%d", &b); 
    	bin_dec(b);
    break;
    case 3:
    	printf("Enter the decimal number: ");
    	scanf("%d", &c);
    	dec_oct(c);
    break;
    case 4:
    	printf("Enter any octal number: ");
    	scanf("%ld", &d);
    	oct_dec(d);
    break;
    case 5:
    	printf("Enter the decimal number: ");
    	scanf("%d", &e);
    	dec_hex(e);
    break;
    case 6:
    	printf("Enter the hexadecimal number: ");
    	scanf("%s", &f);
    	hex_dec(f);
    break;
		
	default:
		printf("INVALID INPUT\n");
	break;
}
printf("\n");
printf("IF U WANT TO CONTINUE PRESS 1 IF NOT THAN PRESS ANY KEY:");
scanf("%d",&h);
}
while(h==1);
}


	
	


