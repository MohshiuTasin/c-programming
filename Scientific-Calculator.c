#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define KEY "Enter the calculator Operation you want to do  or enter Q to quite"
void addition();
void subtraction();
void multiplication();
void division();
void mod();
void power();
int factorial();
void square_root();
void absulate_value();
void sine();
void cosine();
void tangent();
void cosec();
void cot();
void sec();
void logten();
void exponent();
void bin_dec();
void bin_oct();
void bin_hex();
void dec_bin();
void dec_oct();
void dec_hex();
void oct_bin();
void oct_dec();
void oct_hex();
void hex_bin();
void hex_dec();
void hex_oct();
void polynomial();
void matrix_addition();
void matrix_subtraction();
void matrix_multiplication();
void transpose_matrix();
void UpperAndLower_matrix();
void sumofDiagonal();
void quadratic();
void permutation();
int permuta();
void combination();
int fact();
void Round();
void formula1();
void formula2();
void formula3();
void formula4();
void areaofCircle();
void cToF();
void Trunc();
void equation();
void bracket();
void calculator_operations();
FILE *fptr;
int main()
{
    float x;
    int X=1;
    char Calc_oprn;
    calculator_operations();
    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);
        Calc_oprn=getche();
        switch(Calc_oprn)
        {
        case 'V':
            fptr = fopen("program.txt","r");
            if(fptr == NULL)
            {
                printf("Error!");
                exit(1);
            }
            char ch;
            while((ch = getc(fptr))!= EOF)
                printf("%c",ch);
            fclose(fptr);
            break;
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '?':
            mod();
            break;
        case '!':
            factorial();
            break;
        case '^':
            power();
            break;
        case 'S':
            square_root();
            break;
        case 'W':
            absulate_value();
            break;
        case 's':
            sine();
            break;
        case 'i':
            cosine();
            break;
        case 'T':
            tangent();
            break;
        case 'o':
            cosec();
            break;
        case 't':
            cot();
            break;
        case 'I':
            sec();
            break;
        case 'L':
            logten();
            break;
        case 'e':
            exponent();
            break;
        case 'b':
            bin_dec();
            break;
        case 'f':
            bin_oct();
            break;
        case 'g':
            bin_hex();
            break;
        case 'G':
            dec_bin();
            break;
        case 'd':
            dec_oct();
            break;
        case 'D':
            dec_hex();
            break;
        case 'B':
            oct_bin();
            break;
        case 'O':
            oct_dec();
            break;
        case 'X':
            oct_hex();
            break;
        case 'A':
            hex_bin();
            break;
        case 'x':
            hex_dec();
            break;
        case 'a':
            hex_oct();
            break;
        case 'p':
            polynomial();
            break;
        case 'M':
            matrix_addition();
            break;
        case 'm':
            matrix_subtraction();
            break;
        case 'U':
            matrix_multiplication();
            break;
        case 'c':
            transpose_matrix();
            break;
        case 'J':
            sumofDiagonal();
            break;
        case 'j':
            UpperAndLower_matrix();
            break;
        case 'u':
            quadratic();
            break;
        case 'N':
            permutation();
            break;
        case 'n':
            combination();
            break;
        case 'w':
            Round();
            break;
        case 'K':
            formula1();
            break;
        case 'Y':
            formula2();
            break;
        case 'y':
            formula3();
            break;
        case 'R':
            formula4();
            break;
        case 'r':
            areaofCircle();
            break;
        case 'v':
            cToF();
            break;
        case 'Z':
            Trunc();
            break;
        case 'E':
            equation();
            break;
        case 'z':
            bracket();
            break;
        case 'H':
            calculator_operations();
            break;
        case 'Q':
            exit(0);
            break;
        case 'C':
            system("cls");
            calculator_operations();
            break;
        default :
            system("cls");
            printf("\nYou have entered unavailable option");
            printf("\n");
            printf("\nPlease Enter any one of below available ");
            printf("options\n");
            calculator_operations();
        }
    }
}
void calculator_operations()
{
    printf("\n             Welcome to C calculator \n\n");
    printf("the program :\n");
    printf("***** Press H to display ");
    printf("below options *****\n\n");
    printf("Enter C to clear the screen and");
    printf(" display available option \n\n");
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Mod\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n");
    printf("Enter w for round function\n");
    printf("Enter S  for square root \n");
    printf("Enter W for absulate value\n");
    printf("Enter  s  for sine function\n");
    printf("Enter  i  for cos function\n");
    printf("Enter  T  for tangent function\n");
    printf("Enter  o  for cosec function\n");
    printf("Enter  t  for cot function\n");
    printf("Enter  I  for sec function\n");
    printf("Enter  L  for logten\n");
    printf("Enter  e  for exponent\n");
    printf("Enter b for binary to decimal\n");
    printf("Enter f for binary to octal\n");
    printf("Enter g for binary to hexadecimal\n");
    printf("Enter G for decimal to binary\n");
    printf("Enter d for decimal to octal\n");
    printf("Enter D for decimal to hexadecimal\n");
    printf("Enter B for octal to binary\n");
    printf("Enter O for octal to decimal\n");
    printf("Enter X for octal to hexadecimal\n");
    printf("Enter A for hexadecimal to binary\n");
    printf("Enter x for hexadecimal to decimal\n");
    printf("Enter a for hexadecimal to octal\n");
    printf("Enter p for polynomial equation\n");
    printf("Enter M for addition  matrix\n");
    printf("Enter m for subtraction  matrix\n");
    printf("Enter U for multiplication matrix\n");
    printf("Enter c for transpose matrix\n");
    printf("Enter J for the sum of diagonal elements of matrix\n");
    printf("Enter j for the sum of upper and lower triangle elements of matrix:\n");
    printf("Enter u for solving quadratic equation\n");
    printf("Enter N for permutation\n");
    printf("Enter n for permutation\n");
    printf("Enter V for seeing stored results\n");
    printf("Enter K for (a+b)^2 formula:\n");
    printf("Enter Y for (a+b)^2-c^2 formula:\n");
    printf("Enter y for (a+b+c)^2 formula:\n");
    printf("Enter R for (a+b)^3 formula:\n");
    printf("Enter r for area of a circle:\n");
    printf("Enter v for converting from celcius to farenheight\n");
    printf("Enter Z for trunc function\n");
    printf("Enter E for two equation\n");
    printf("Enter z for usage of bracket\n");

}
void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }

    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("\nError!");
        exit(1);
    }
    printf("Sum of %d numbers = %d \n",n,total);
    fprintf(fptr,"\nSum of %d numbers = %d",n,total);
    fclose(fptr);
}
void subtraction()
{
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\n%d - %d = %d\n", a, b, c);
    fprintf(fptr,"\n%d - %d = %d", a, b, c);
    fclose(fptr);
}
void multiplication()
{
    int a, b, mul=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nMultiplication of entered numbers = %d\n",mul);
    fprintf(fptr,"\nMultiplication of entered numbers = %d\n",mul);
    fclose(fptr);
}
void division()
{
    int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a/b;
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nDivision of entered numbers=%d\n",d);
    fprintf(fptr,"\nDivision of entered numbers=%d\n",d);
    fclose(fptr);
}
void mod()
{
    int a, b, d=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    d=a%b;
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nModulus of entered numbers = %d\n",d);
    fprintf(fptr,"\nModulus of entered numbers = %d\n",d);
    fclose(fptr);
}
void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);
    printf("power : ");
    scanf("%lf",&num);
    p=pow(a,num);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\n%lf to the power %lf = %lf \n",a,num,p);
    fprintf(fptr,"\n%lf to the power %lf = %lf \n",a,num,p);
    fclose(fptr);
}
int factorial()
{
    int i,fact=1,num;
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1; i<=num; i++)
        fact=fact*i;
    printf("\n");
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Factorial of entered number %d is:%d\n",num,fact);
    fprintf(fptr,"Factorial of entered number %d is:%d\n",num,fact);
    fclose(fptr);
    return 0;
}
void square_root()
{
    float a,result;
    printf("\nEnter a number for square root:");
    scanf("%f",&a);
    result=sqrt(a);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("result= %.2f",result);
    fprintf(fptr,"result= %.2f",result);
    fclose(fptr);
}
void absulate_value()
{
    int a, result;
    printf("\nPlease enter a number:");
    scanf("%d",&a);
    result=abs(a);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nThe absolute value of the number is :%d",result);
    fprintf(fptr,"The absolute value of the number is :%d",result);
    getch();
}
void sine()
{
    float i,sine_value;
    printf("\nEnter angle:");
    scanf("%f",&i);
    sine_value=sin(i*3.14159/180);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the sine value is:%f\n",sine_value);
    fprintf(fptr,"the sine value is:%f\n",sine_value);
    fclose(fptr);
}
void cosine()
{
    float i,cosine_value;
    printf("\nEnter angle:");
    scanf("%f",&i);
    cosine_value=cos(i*3.14159/180);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the value is:%f\n",cosine_value);
    fprintf(fptr,"the value is:%f\n",cosine_value);
    fclose(fptr);
}
void tangent()
{
    float i,tangent_value;
    printf("\nEnter angle:");
    scanf("%f",&i);
    tangent_value=tan(i*3.14159/180);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the tangent value is:%.2f\n",tangent_value);
    fprintf(fptr,"the tangent value is:%.2f\n",tangent_value);
    fclose(fptr);
}
void cosec()
{
    float i,cosec_value;
    printf("\nEnter angle:");
    scanf("%f",&i);
    cosec_value=1/(sin(i*3.14159/180));
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the cosec value is:%f\n",cosec_value);
    fprintf(fptr,"the cosec value is:%f\n",cosec_value);
    fclose(fptr);
}
void cot()
{
    float i,cot_value;
    printf("\nEnter angle:");
    scanf("%f",&i);
    cot_value=1/(tan(i*3.14159/180));
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the  cot value is:%f\n",cot_value);
    fprintf(fptr,"the cot value is:%f\n",cot_value);
    fclose(fptr);
}
void sec()
{
    float i,sec_value;
    printf("\nEnter angle:");
    scanf("%f",&i);
    sec_value=1/cos(i*3.14159/180);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the sec value is:%f\n",sec_value);
    fprintf(fptr,"the sec value is:%f\n",sec_value);
    fclose(fptr);
}
void logten()
{
    float i,log_value;
    printf("\nEnter the number:");
    scanf("%f",&i);
    log_value=log10(i);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the log value is:%f\n",log_value);
    fprintf(fptr,"the log value is:%f\n",log_value);
    fclose(fptr);
}
void exponent()
{
    float i,exp_value;
    printf("\nEnter the number:");
    scanf("%f",&i);
    exp_value=exp(i);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("the exp value is:%f\n",exp_value);
    fprintf(fptr,"the exp value is:%f\n",exp_value);
    fclose(fptr);
}
void bin_dec()
{
     int  num, binary_val, decimal_val = 0, base = 1, rem;

    printf("\nEnter a binary number:");
    scanf("%d", &num);
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Its decimal equivalent is = %d \n", decimal_val);
    fprintf(fptr,"Its decimal equivalent is = %d \n", decimal_val);
    fclose(fptr);
}
void bin_oct()
{
    long int b, o = 0, j = 1, r;
    printf("\nEnter the value for  binary number: ");
    scanf("%ld", &b);
    while (b != 0)
    {
        r = b % 10;
        o = o + r * j;
        j = j * 2;
        b = b / 10;
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Equivalent octal value: %lo", o);
    fprintf(fptr,"Equivalent octal value: %lo", o);
    fclose(fptr);
}
void bin_hex()
{

    long int b, h = 0, i = 1, r;
    printf("\nEnter the binary number: ");
    scanf("%ld", &b);
    while (b != 0)
    {
        r = b% 10;
        h = h + r * i;
        i = i * 2;
        b = b / 10;
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Equivalent hexadecimal value: %lX", h);
    fprintf(fptr,"Equivalent hexadecimal value: %lX", h);
    fclose(fptr);
}
void dec_bin()
{
    long int n,temp,rem,binary=0,i=1;

    printf("\nEnter an integer in decimal number system:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("binary number of %d is: %d",temp,binary);
    fprintf(fptr,"binary number of %d is: %d",temp,binary);
    fclose(fptr);
}
void dec_oct()
{
   int num;
    printf("\nEnter a decimal number : ");
    scanf("%d",&num);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nthe octal number is : %o",num);
    fprintf(fptr,"\nthe octal number is : %o",num);
    getch();
}
void dec_hex()
{

    int num;
    printf("\nEnter a decimal number : ");
    scanf("%d",&num);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nthe hexadecimal number is : %x",num);
    fprintf(fptr,"\nthe hexadecimal number is : %x",num);
    getch();

}
void oct_bin()
{
    long int n1, n,p=1;
    long int oct=0,i=1,j,o;
    long int bin=0;
    printf("\nEnter an octal number :");
    scanf("%ld",&n1);
    n=n1;
    for (j=n1; j>0; j=j/10)
    {
        o = j % 10;
        if(i==1)
            p=p*1;
        else
            p=p*8;

        oct=oct+(o*p);
        i++;
    }
    i=1;
    for(j=oct; j>0; j=j/2)
    {
        bin=bin+(oct % 2)*i;
        i=i*10;
        oct=oct/2;
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nThe Octal Number : %ld\nThe equivalent Binary  Number : %ld \n\n",n,bin);
    fprintf(fptr,"\nThe Octal Number : %ld\nThe equivalent Binary  Number : %ld \n\n",n,bin);
    fclose(fptr);
}
void oct_dec()
{
    int num;
    printf("\nEnter a octal number : ");
    scanf("%o",&num);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nthe decimal number is : %d",num);
    fprintf(fptr,"\nthe decimal number is : %d",num);
    getch();

}
void oct_hex()
{
    int num;
    printf("\nEnter a octal number : ");
    scanf("%o",&num);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nthe hexadecimal number is : %x",num);
    fprintf(fptr,"\nthe hexadecimal number is : %x",num);
    getch();
}
void hex_bin()
{
    char binary_number[1000], hexa[1000];
    long int i = 0;
    printf("\nEnter the value for Hexadecimal: ");
    scanf("%s", hexa);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Binary value: ");
    fprintf(fptr,"Binary value: ");
    fclose(fptr);
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
            printf("1010");
            break;
        case 'B':
            printf("1011");
            break;
        case 'C':
            printf("1100");
            break;
        case 'D':
            printf("1101");
            break;
        case 'E':
            printf("1110");
            break;
        case 'F':
            printf("1111");
            break;
        case 'a':
            printf("1010");
            break;
        case 'b':
            printf("1011");
            break;
        case 'c':
            printf("1100");
            break;
        case 'd':
            printf("1101");
            break;
        case 'e':
            printf("1110");
            break;
        case 'f':
            printf("1111");
            break;
        default:
            printf("\nhexa digit %c ", hexa[i]);
        }
        i++;
    }
}
void hex_dec()
{
   int num;
    printf("\nEnter a hexadecimal number : ");
    scanf("%x",&num);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nthe decimal number is : %d",num);
    fprintf(fptr,"\nthe decimal number is : %d",num);
    getch();
}
void hex_oct()
{
    int num;
    printf("Enter a hexadecimal number : ");
    scanf("%x",&num);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nthe octal number is : %o",num);
    fprintf(fptr,"\nthe octal number is : %o",num);
    getch();
}
void polynomial()
{
    int a[100];
    int i, N,power;
    float x, polySum;
    printf("\nEnter the order of the polynomial: ");
    scanf("%d", &N);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter %d coefficients\n",N+1);
    for (i=0; i <= N; i++)
    {
        scanf("%d",&a[i]);
    }
    polySum = a[0];
    for (i=1; i<= N; i++)
    {
        polySum = polySum * x + a[i];
    }
    power = N;
    printf("Given polynomial is:\n");
    for (i=0; i<= N; i++)
    {
        if (power < 0)
        {
            break;
        }
        if (a[i] > 0)
            printf(" + ");
        else if (a[i] < 0)
            printf(" - ");
        else
            printf (" ");
        printf("%dx^%d  ",abs(a[i]),power--);
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nSum of the polynomial = %6.2f\n",polySum);
    fprintf(fptr,"\nSum of the polynomial = %6.2f\n",polySum);
    fclose(fptr);
}
void matrix_addition()
{
    int m[10][10],n[10][10],k[10][10],row,col,numrow,numcol;
    printf("\nEnter The Number of ROWs & COLOUMs  :  \n");
    scanf("%d%d",&numrow,&numcol);
    printf("\nEnter Elements For M MATRIX ....\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            printf("\nM[%d][%d] =  ",row,col);
            scanf("%d",&m[row][col]);
        }
        printf("\n\n");
    }
    printf("\n");
    printf("\nEnter Elements For N MATRIX ....\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            printf("\nN[%d][%d] =   ",row,col);
            scanf("%d",&n[row][col]);
        }
        printf("\n\n");
    }
    printf("\n  M = ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            printf("  %d\t",m[row][col]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("  N = ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            printf("  %d\t",n[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            k[row][col]=m[row][col]+n[row][col];
        }
    }


    printf("\n\n\n  M + N =  ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            fptr = fopen("program.txt","a");
            if(fptr == NULL)
            {
                printf("Error!");
                exit(1);
            }
            printf("%d\t",k[row][col]);
             fprintf(fptr,"%d\t",k[row][col]);
             fclose(fptr);
        }
        printf("\n");
        printf("\t");
    }
}
void matrix_subtraction()
{
    int m[10][10],n[10][10],r[10][10],row,col,numrow,numcol;
    printf("\nEnter The Number of ROWs & COLOUMs  :  \n");
    scanf("%d%d",&numrow,&numcol);
    printf("\nEnter Elements For M MATRIX ....\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            printf("\nM[%d][%d] =  ",row,col);
            scanf("%d",&m[row][col]);
        }
        printf("\n\n");
    }
    printf("\n");
    printf("\nEnter Elements For N MATRIX ....\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            printf("\nN[%d][%d] =   ",row,col);
            scanf("%d",&n[row][col]);
        }
        printf("\n\n");
    }
    printf("\n  M = ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            printf("  %d\t",m[row][col]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("  N = ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            printf("  %d\t",n[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            r[row][col]=m[row][col]-n[row][col];
        }
    }
    printf("\n\n\n  M - N =  ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            fptr = fopen("program.txt","a");
            if(fptr == NULL)
            {
                printf("Error!");
                exit(1);
            }
            printf("%d\t",r[row][col]);
            fprintf(fptr,"%d\t",r[row][col]);
            fclose(fptr);
        }
        printf("\n");
        printf("\t");
    }
}
void matrix_multiplication()
{
    int arr1[50][50],brr1[50][50],crr1[50][50],i,j,k,r1,c1,r2,c2,sum=0;
    printf("\nInput the rows and columns of first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("\nInput the rows and columns of second matrix : ");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Mutiplication of Matrix is not possible.");
        printf("\nColumn of first matrix and row of second matrix must be same.");
    }
    else
    {
        printf("Input elements in the first matrix :\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("element - [%d],[%d] : ",i,j);
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("Input elements in the second matrix :\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("element - [%d],[%d] : ",i,j);
                scanf("%d",&brr1[i][j]);
            }
        }
        printf("\nThe First matrix is :\n");
        for(i=0; i<r1; i++)
        {
            printf("\n");
            for(j=0; j<c1; j++)
                printf("%d\t",arr1[i][j]);
        }
        printf("\nThe Second matrix is :\n");
        for(i=0; i<r2; i++)
        {
            printf("\n");
            for(j=0; j<c2; j++)
                printf("%d\t",brr1[i][j]);
        }
        for(i=0; i<r1; i++)
            for(j=0; j<c2; j++)
                crr1[i][j]=0;
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                sum=0;
                for(k=0; k<c1; k++)
                    sum=sum+arr1[i][k]*brr1[k][j];
                crr1[i][j]=sum;
            }
        }
        printf("\nThe multiplication of two matrices is : \n");
        for(i=0; i<r1; i++)
        {
            printf("\n");
            for(j=0; j<c2; j++)
            {
                fptr = fopen("program.txt","a");
                if(fptr == NULL)
                {
                    printf("Error!");
                    exit(1);
                }
                printf("%d\t",crr1[i][j]);
                fprintf(fptr,"%d\t",crr1[i][j]);
                fclose(fptr);
            }
        }
    }
    printf("\n\n");
}
void transpose_matrix()
{
    int m[10][10],transpose[10][10],row,col,numrow,numcol;
    printf("\nEnter The Number of ROWs & COLOUMs For The MATRIX :  \n");
    scanf("%d%d",&numrow,&numcol);
    printf("\nEnter Elements For M MATRIX ....\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            printf("\nM[%d][%d] =  ",row,col);
            scanf("%d",&m[row][col]);
        }
        printf("\n\n");
    }
    printf("\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            transpose[col][row]=m[row][col];
        }
    }
    printf("\n  M = ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            printf("  %d\t",m[row][col]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("\n  TRANSPOSE  of  M = \t");
    for(row=0; row<numcol; row++)
    {

        for(col=0; col<numrow; col++)
        {
            fptr = fopen("program.txt","a");
            if(fptr == NULL)
            {
                printf("Error!");
                exit(1);
            }
            printf("%d\t",transpose[row][col]);
            fprintf(fptr,"%d\t",transpose[row][col]);
            fclose(fptr);
        }
        printf("\n");
        printf("\t\t\t");
    }
}
void sumofDiagonal()
{
    int m[10][10],row,col,numrow,numcol,sum=0;
    printf("\nEnter The Number of ROWs & COLOUMs For The MATRIX :  \n");
    scanf("%d%d",&numrow,&numcol);
    printf("\nEnter Elements For M MATRIX ....\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            printf("\nM[%d][%d] =  ",row,col);
            scanf("%d",&m[row][col]);
        }
        printf("\n\n");
    }
    printf("\n");
    printf("\n  M = ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            printf("  %d\t",m[row][col]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("\n\nDiagonal Elements :  ");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            if(row==col)
            {
                printf(" %d  ",m[row][col]);
                fprintf(fptr," %d  ",m[row][col]);
                sum=sum+m[row][col];
            }
        }
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\n\nThe Sum of The Diagonal Elements of This MATRIX is = %d\n",sum);
    fprintf(fptr,"\n\nThe Sum of The Diagonal Elements of This MATRIX is = %d\n",sum);
    fclose(fptr);
}
void UpperAndLower_matrix()
{
    int m[10][10],row,col,numrow,numcol,sum=0,uppersum=0,lowersum=0;
    printf("\nEnter The Number of ROWs & COLOUMs For The MATRIX :  \n");
    scanf("%d%d",&numrow,&numcol);
    printf("\nEnter Elements For M MATRIX ....\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            printf("\nM[%d][%d] =  ",row,col);
            scanf("%d",&m[row][col]);
        }
        printf("\n\n");
    }
    printf("\n");
    printf("\n  M = ");
    for(row=0; row<numrow; row++)
    {
        printf("\t");
        for(col=0; col<numcol; col++)
        {
            printf("  %d\t",m[row][col]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(row=0; row<numrow; row++)
    {
        for(col=0; col<numcol; col++)
        {
            if(row==col)
            {
                sum=sum+m[row][col];
            }
            if(row<col)
            {
                uppersum=uppersum+m[row][col];
            }
            if(row>col)
            {
                lowersum=lowersum+m[row][col];
            }
        }
    }
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\n\nThe Sum of The Diagonal Elements of This MATRIX is = %d\n",sum);
    fprintf(fptr,"\n\nThe Sum of The Diagonal Elements of This MATRIX is = %d\n",sum);
    printf("\n\n\nThe Sum of The Upper Triangle Elements of This MATRIX is = %d\n",uppersum);
    fprintf(fptr,"\n\n\nThe Sum of The Upper Triangle Elements of This MATRIX is = %d\n",uppersum);
    printf("\n\nThe Sum of The Lower Triangle Elements of This MATRIX is = %d\n",lowersum);
    fprintf(fptr,"\n\nThe Sum of The Lower Triangle Elements of This MATRIX is = %d\n",lowersum);
}
void quadratic()
{
    double a, b, c, d, root1, root2, realPart, imagPart;
    printf("\nEnter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d > 0)
    {
        root1 = (-b + sqrt(d))/ (2 * a);
        root2 = (-b - sqrt(d))/ (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        fptr = fopen("program.txt","a");
        if(fptr == NULL)
        {
            printf("Error!");
            exit(1);
        }
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        fprintf(fptr,"root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        fclose(fptr);
    }
}
void permutation()
{
    int r,n,npr;
    printf("\nPlease enter first number  : ");
    scanf("%d",&n);
    printf("Please enter second number : ");
    scanf("%d",&r);
    npr= permuta(n)/permuta(n-r);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("%dp%d = %d\n",n,r,npr);
    fprintf(fptr,"%dp%d = %d\n",n,r,npr);
    fclose(fptr);
}
int permuta(int n)
{
    int f;
    for(f=1; n>1; n--)
    {
        f*=n;
    }
    return f;
}

void combination()
{
    int n,r,ncr;

    printf("\nEnter 1st number: ");
    scanf("%d",&n);
    printf("Enter 2nd number: ");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Value of %dC%d = %d\n",n,r,ncr);
    fprintf(fptr,"Value of %dC%d = %d\n",n,r,ncr);
    fclose(fptr);
}
int fact(int n)
{
    int i,f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
void Round()
{
    float a;
    int result;
    printf("\nPlease enter a number:");
    scanf("%f",&a);
    result=round(a);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\nThe round value of the number is :%d",result);
    fprintf(fptr,"The round value of the number is :%d",result);
    getch();
}

void formula1()
{
    float a, b, x;


    printf("\n\nEnter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);
    x = (a * a) + (b * b) + (2 * a * b);

    if((fptr = fopen("program.txt","a"))==NULL)
    {
        printf("Error!");
    }
    printf("\nResult = %f\n", x);

    fprintf(fptr,"Result = %f\n", x);
    fclose(fptr);
}
void formula2()
{
    float a,b,c,d=0,sum=0;
    float result;
    printf("\nPlease enter first number:");
    scanf("%f",&a);
    printf("Please enter second number:");
    scanf("%f",&b);
    printf("Please enter third number:");
    scanf("%f",&c);

    result= ((a * a) + (b * b) + (2 * a * b))-(c * c);
    if((fptr = fopen("program.txt","a"))==NULL)
    {
        printf("Error!");
    }
    printf("The  value of the number is : %f",result);
    fprintf(fptr,"The  value of the number is : %f",result);
}
void formula3()
{
    float a,b,c;
    float result;
    printf("\nPlease enter first number:");
    scanf("%f",&a);
    printf("Please enter second number:");
    scanf("%f",&b);
    printf("Please enter third number:");
    scanf("%f",&c);

    result=((a * a)+(b * b)+(c * c)+(2 * a * b)+(2 * b * c)+(2 * c * a));
    if((fptr = fopen("program.txt","a"))==NULL)
    {
        printf("Error!");
    }
    printf("The value of the number is : %f",result);
    fprintf(fptr,"The  value of the number is : %f",result);
}
void formula4()
{
    float a, b, x;


    printf("\nEnter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    x = (a * a * a) + (b * b * b) + (3 * a * a * b) + (3 * a * b * b);

    if((fptr = fopen("program.txt","a"))==NULL)
    {
        printf("Error!");
    }
    printf("\n\nResult = %f\n", x);

    fprintf(fptr,"Result = %f\n", x);
    fclose(fptr);

}
void areaofCircle()
{
    int r;
    float x= 3.1416;
    float area;

    printf("\nEnter radius: ");
    scanf("%d",&r);

    area = x * r * r;
    if((fptr = fopen("program.txt","a"))==NULL)
    {
        printf("Error!");
    }
    printf("\n\nArea: %.2f",area);
    fprintf(fptr,"\nArea: %.2f",area);
    fclose(fptr);
}
void cToF()
{
    int choice;
    float celsius,fahrenhit;
    printf("\n\n Tempature conversion menu\n");
    printf("\n");
    printf("\n\n 1.Fahrenhit to celsius \n");
    printf("\n\n 2.celsius  to Fahrenhit \n");
    printf("enter your choice: ");
    scanf("%d", &choice);
    if((fptr = fopen("program.txt","a"))==NULL)
    {
        printf("Error!");
    }
    switch(choice)
    {
    case 1:
        printf("enter the fahrenhit tempaure :");
        scanf("%f",&fahrenhit);
        celsius=(fahrenhit-32)/1.8;
        printf("the tempature is % .2f\n",celsius);
        fprintf(fptr,"the tempature is % .2f\n",celsius);
        break;
    case 2:
        printf("enter the celsius tempaure : ");
        scanf("%f",&celsius);
        fahrenhit=(celsius*1.8)+32;
        printf("the tempature is % .2f\n",fahrenhit);
        fprintf(fptr,"the tempature is % .2f\n",fahrenhit);
        break;
defult:
        printf("\n\n\n Not correct option. \n please try again \n");
        fprintf(fptr,"\n\n\n Not correct option. \n please try again \n");
        fclose(fptr);
    }
    getch();
}
void Trunc()
{
    float a;
    int result;
    printf("\nPlease enter a number:");
    scanf("%f",&a);
    result=trunc(a);
    if((fptr = fopen("program.txt","a"))==NULL)
    {
        printf("Error!");
    }
    printf("The trunc value of the number is :%d",result);
    fprintf(fptr,"The trunc value of the number is :%d",result);
    getch();
}


void equation()
{
    int a1, b1, c1, a2, b2, c2;

    printf("\n\nEnter the values for the first equation.");
    printf("\nEnter the value for a1:");
    scanf("%d",&a1);
    printf("\nEnter the value for b1:");
    scanf("%d",&b1);
    printf("\nEnter the value for c1:");
    scanf("%d",&c1);
    printf("\n\nEnter the values for the Second equation:");
    printf("\nEnter the value for a2:");
    scanf("%d",&a2);
    printf("\nEnter the value for b2:");
    scanf("%d",&b2);
    printf("\nEnter the value for c2:");
    scanf("%d",&c2);
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\n\nYour system of equations is the following:\n");
    printf("%d x + %d y = %d \n",a1,b1,c1);
    fprintf(fptr,"%d x + %d y = %d \n",a1,b1,c1);
    printf("%d x + %d y = %d \n",a2,b2,c2);
    fprintf(fptr,"%d x + %d y = %d \n",a2,b2,c2);

    if ((a1 * b2) - (b1 * a2) == 0)
    {
        printf("The system has no solution.\n");
    }
    else
    {
        int res_x = ((c1*b2) - (b1*c2))/((a1*b2)-(b1*a2));
        int res_y = ((a1*c2) - (c1*a2)) / ((a1*b2) - (b1*a2));
        printf("x= %d ,y= %d",res_x,res_y);
        fprintf(fptr,"x= %d ,y= %d",res_x,res_y);
        fclose(fptr);
    }
}
void bracket()
    {
         char c;
    int numFlag=0,ind=-1;

    double ans;
    char s[1000]= {0};
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    while(1)
    {
        printf("%s\t\n",s);
        printf("\nPress these to select operation:\n");
        printf("(Operations)+,-,/,*\t(Numbers)1\t\t(Result)=\n");
        scanf("%c",&c);
        if(c=='+')
        {
            char t[1000];
            strcpy(t,s);
            strcpy(s,"(");
            strcat(s,t);
            strcat(s,")+");
            ind=1;
        }
        else if(c=='-')
        {
            char t[1000];
            strcpy(t,s);
            strcpy(s,"(");
            strcat(s,t);
            strcat(s,")-");
            ind=2;
        }
        else if(c=='*')
        {
            char t[1000];
            strcpy(t,s);
            strcpy(s,"(");
            strcat(s,t);
            strcat(s,")*");
            ind=3;
        }

        else if(c=='/')
        {
            char t[1000];
            strcpy(t,s);
            strcpy(s,"(");
            strcat(s,t);
            strcat(s,")/");
            ind=4;
        }
        else if(c=='1')
        {
            char t[100];
            double n;
            scanf("%lf",&n);
            if((numFlag++)==0)
                ans=n;
            itoa(n,t,10);
            strcat(s,t);
            if(ind==1)ans+=n,ind=-1;
            else if(ind==2)ans-=n,ind=-1;
            else if(ind==3)ans*=n,ind=-1;
            else if(ind==4)ans/=n,ind=-1;
        }
        else if(c=='=')
        {
            printf("%lf\n",ans);
            fprintf(fptr,"%lf\n",ans);
            fclose(fptr);
            getch();
        }
        system("cls");
    }

}
