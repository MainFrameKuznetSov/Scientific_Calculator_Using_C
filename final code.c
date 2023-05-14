#include<stdio.h>
#include<math.h>

long int sum(long int a,long int b)
{
    return a+b;
}

long int diff(long int a,long int b)
{
    return a-b;
}

long int product(long int a,long int b)
{
    return a*b;
}

float division(long int a,long int b)
{
    float c= a/b;
    return c;
}

long int intdivision(long int a,long int b)
{
    long int c=a/b;
    return c;
}

long int expo(long int a,long int b)// O(log n) complexity
{
    if(b==0)
        return 1;
    if(b%2==0)
        return expo(a*a,b/2);
    else
        return expo(a*a,(b-1)/2);
}

long int rem(long int a,long int b)
{
    return a%b;
}

long int mod_expo(long int a,long int b,long int c)
{
    return remainder(expo(a,b),c);//O(log b)
}

void Arithmetics()
{
    //printf("Hemlo\n");
    printf("The operations are:-\n");
    printf("1) Addition \n");
    printf("2) Subtraction \n");
    printf("3) Multiplication \n");
    printf("4) Division \n");
    printf("5) Integer Division \n");
    printf("6) Exponentiation \n");
    printf("7) Remainder \n");
    printf("8) Modular Exponention\n");//(a^b)%c
    printf("Enter your choice:- ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            long int m;
            long int n;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("The sum is:- %li",sum(m,n));
            break;
        case 2:
            long int m;
            long int n;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("The difference is:- %li",diff(m,n));
            break;
        case 3:
            long int m;
            long int n;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("The product is:- %li",product(m,n));
            break;
        case 4:
            long int m;
            long int n;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("The quotient is:- %0.5f",division(m,n));
            break;
        case 5:
            long int m;
            long int n;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("The floor quotient is:- %li",intdivision(m,n));
            break;
        case 6:
            long int m;
            long int n;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("The result is:- %li",expo(m,n));
            break;
        case 7:
            long int m;
            long int n;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("The reaminder is:- %d",rem(m,n));
            break;
        case 8:
            long int m;
            long int n;
            long int o;
            printf("Enter the first number:- ");
            scanf("%ld",&m);
            printf("\n");
            printf("Enter the second number:- ");
            scanf("%ld",&n);
            printf("\n");
            printf("Enter the third number:- ");
            scanf("%ld",&o);
            printf("\n");
            printf("The reaminder is:- %li",mod_expo(m,n,o));
            break;
        default:
            printf("Invalid Input.");
    }
    return ;
}

long double sine(long decimal x)
{
    return sin(x);   
}

long double cosine(long decimal x)
{
    return cos(x);   
}

long double tangent(long decimal x)
{
    return tan(x);   
}

long double cosecant(long decimal x)
{
    return 1/sin(x);   
}

long double secant(long decimal x)
{
    return 1/cos(x);   
}

long double cotangent(long decimal x)
{
    return 1/tan(x);   
}

void Trigonometrical()
{
    //printf("Bonjour\n");
    printf("The operations are:-\n");
    printf("1) Sine \n");
    printf("2) Cosine \n");
    printf("3) Tangent \n");
    printf("4) Cosecant \n");
    printf("5) Secant \n");
    printf("6) Cotangent \n");
    printf("Enter your choice:- ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter the angle in degrees:- ");
            long double angle;
            scanf("%ld",&angle);
            long double rad=angle*M_PI/180;
            printf("The sin value is:- %ld",sine(rad));
            break;
        case 2:
            printf("Enter the angle in degrees:- ");
            long double angle;
            scanf("%ld",&angle);
            long double rad=angle*M_PI/180;
            printf("The cos value is:- %ld",cosine(rad));
            break;
        case 3:
            printf("Enter the angle in degrees:- ");
            long double angle;
            scanf("%ld",&angle);
            long double rad=angle*M_PI/180;
            printf("The tan value is:- %ld",tangent(rad));
            break;
        case 4:
            printf("Enter the angle in degrees:- ");
            long double angle;
            scanf("%ld",&angle);
            long double rad=angle*M_PI/180;
            printf("The cosec value is:- %ld",cosecant(rad));
            break;
        case 5:
            printf("Enter the angle in degrees:- ");
            long double angle;
            scanf("%ld",&angle);
            long double rad=angle*M_PI/180;
            printf("The sec value is:- %ld",secant(rad));
            break;
        case 6:
            printf("Enter the angle in degrees:- ");
            long double angle;
            scanf("%ld",&angle);
            long double rad=angle*M_PI/180;
            printf("The cot value is:- %ld",cotangent(rad));
            break;
        default:
            printf("Invalid Input");
    }
    return ;
}

void bin_2_dec(long long x)
{
    int dec=0,index=0;
    while(x!=0)
    {
        dec+=(n%10)*pow(2,i);
        index++;
        x/=10;
    }
    printf("The binary equivalent is:- %d",dec);
    return ;
}

void bin_2_oct(long long x)
{
    int dec=bin_2_dec(x);
    long long oct=0;
    while(dec!=0)
    {
        oct=(dec%8)*10+oct;
        dec/=8;
    }
    printf("The octal equivalent is:- %lli",oct);
    return ;
}

void bin_2_hex(long long x)
{
    int dec=bin_2_dec(x),i=0;
    char samp[]="0123456789ABCDE";
    char hex[7]="";
    while(dec!=0)
    {
        char c=samp[dec%16];
        strncat(hex,&c,1);
        dec/=16;
    }
    printf("The Hexadecimal equivalent is:- %s",strrev(hex));
}

void dec_2_bin(int x)
{
    long long bin=0;
    while(x!=0)
    {   
        bin=(x%10)*10+bin;
        x/=2;
    }
    printf("The binary equivalent is:- %lli",bin);
}

void dec_2_oct(int x)
{
    long long oct=0;
    while(x!=0)
    {
        oct=(x%8)*10+oct;
        x/=8;
    }
    printf("The octal equivalent is:- %lli",oct);
}

void dec_2_hex(int x)
{
    char samp[]="0123456789ABCDE";
    char hex[7]="";
    while(x!=0)
    {
        char c=samp[x%16];
        strncat(hex,&c,1);
        x/=16;
    }
    printf("The hexadecimal equivalent is:- %s"strrev(hex));
}

void oct_2_dec(long long x)
{
    int dec=0;
    int dec=0,index=0;
    while(x!=0)
    {
        dec+=(n%10)*pow(8,i);
        index++;
        x/=10;
    }
    printf("The decimal equivalent is:- %d",dec);
    return ;
}

void oct_2_hex(long long x)
{
    dec_2_hex(oct_2_dec(x));
    return ;
}

void oct_2_bin(long long x)
{
    dec_2_bin(oct_2_dec(x));
    return ;
}

int hex_2_dec(char x[7])
{
    int dec=0,index=strlen(hex),temp;
    for(int i=0;i<strlen(c);i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
            temp=hex[i]-48//ASCII of ) is 48
        else
            temp=hex[i]-55//ASCII of A is 65 and dec. equivalent of A is 10
        dec+=temp*pow(16,index);
        index--;
    }
    //printf("The decimal equivalent is:- ")
    return dec;
}

void hex_2_oct(char x[7])
{
    printf("The octal equivalent is:- ",dec_2_oct(hex_2_dec(x)));
    return ;
}

void hex_2_bin(char x[7])
{
    printf("The binary equivalent is:-",dec_2_bin(hex_2_dec(x)));
    return ;
}

void NumCov()
{
    //printf("Privyet\n");
    printf("The operations are:- \n");
    printf("1) Binary to Decimal\n");
    printf("2) Binary to Octal\n");
    printf("3) Binary to Hexadecimal\n");
    printf("4) Decimal to Binary\n");
    printf("5) Decimal to Octal\n");
    printf("6) Decimal to Hexadecimal\n");
    printf("7) Octal to Decimal\n");
    printf("8) Octal to Hexadecimal\n");
    printf("9) Octal to Binary\n");
    printf("10) Hexadecimal to Decimal\n");
    printf("11) Hexadecimal to Octal\n");
    printf("12) Hexadecimal to Binary\n");
    printf("Enter your choice:- ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter the binary number:- ");
            long long n;
            scanf("%li",&n);
            bin_2_dec(n);
            break;
        case 2:
            printf("Enter the binary number:- ");
            long long n;
            scanf("%li",&n);
            bin_2_oct(n);
            break;
        case 3:
            printf("Enter the binary number:- ");
            long long n;
            scanf("%li",&n);
            bin_2_hex(n);
            break;
        case 4:
            printf("Enter the decimal number:- ");
            int n;
            scanf("%d",&n);
            dec_2_bin(n);
            break;
        case 5:
            printf("Enter the decimal number:- ");
            int n;
            scanf("%d",&n);
            dec_2_oct(n);
            break;
        case 6:
            printf("Enter the decimal number:- ");
            int n;
            scanf("%d",&n);
            dec_2_hex(n);
            break;
        case 7:
            printf("Enter the octal number:- ");
            long long n;
            scanf("%d",&n);
            oct_2_dec(n);
            break;
        case 8:
            printf("Enter the octal number:- ");
            long long n;
            scanf("%d",&n);
            oct_2_hex(n);
            break;
        case 9:
            printf("Enter the octal number:- ");
            long long n;
            scanf("%d",&n);
            oct_2_bin(n);
            break;
        case 10:
            printf("Enter the Hexadecimal number:- ");
            char n[7];
            scanf("%s",&n);
            int ans=hex_2_dec(n);
            printf("The decimal equivalent is:- %d",ans);
            break;
        case 11:
            printf("Enter the Hexadecimal number:- ");
            char n[7];
            scanf("%s",&n);
            hex_2_oct(n); 
            break;
        case 12:
            printf("Enter the Hexadecimal number:- ");
            char n[7];
            scanf("%s",&n);
            hex_2_bin(n); 
            break;
        default:
            printf("Invalid Input.");
    }
    return ;
}

int main()
{
    printf("Scientific Calculator\n");
    int fch=0;
    while(fch!=-1)
    {
        printf("Select the operation.\n");
        printf("Press 1 for Arithmetic operations.\n");
        printf("Press 2 for Trigonometrical operations.\n");
        printf("Press 3 for Number System Conversion operations.\n");
        printf("Enter your choice:- ");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Arithmetics();
                break;
            case 2:
                Trigonometrical();
                break;
            case 3:
                NumCov();
                break;
            default:
                printf("No operation exists for your choice.\n");
        }
        int temp;
        printf("Press -1 to exit, anything else to continue\n");
        printf("Enter your choice:- ");
        scanf("%d",&temp);
        fch=temp;
    }
    printf("End of program.\n");
    printf("Developed by MainFrame KuznetSov A.K.A Aditya Mondal <3");
    return 0;
}