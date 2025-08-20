#include <iostream>
#include <math.h>
using namespace std;

/**
 * @author Mohammed Galal
 * @email MohammedGalal7777@hotmail.com
 * @github MohammedGalal-IT
 * 
 * 2023
 */

int add(int x, int y);
int multi(int x, int y);
void display(string b);
void display();
int cube(int j);
int fact(int n);
void swap1(int x, int y);
void swap2(int &x, int y);
void swap(int &x, int &y);
void print();
void multi();
void f(int n);
int sum(int a, int b, int c);
int sum(int a, int b);

int main()
{
	int loop1, loop2, loop3;
	string Name;
	cout << "Enter Your Name : ";
	cin >> Name;
	system("cls");
	do
	{
		cout << "Hello " << Name << endl
			 << "Please Enter The Number Of The Lecture :\n";
		cout << "\t\t1.Lecture_One\n\t\t2.Lecture_Two\n\t\t3.Lecture_Three\n\t\t4.Lecture_Four & Five\n\t\t5.Lecture_Six & Seven\n\t\t6.Lecture_Eight_(Functions)\n\t\t7.Restart\n\t\t8.Exit\nwaiting for your choice : ";
		cin >> loop1;
		system("cls");
		switch (loop1)
		{
		case 1:
		{
			do
			{
				cout << "Select Your Choice :\n\t\t1.Solved Programs.\n\t\t2.Unsolved Programs.\n\t\t3.Go Back.\nEnter: ";
				cin >> loop2;
				system("cls");
				switch (loop2)
				{
				case 1:
				{
					do
					{
						cout << "1.Age Typer\n2.Go Back\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							int age;
							cout << "Enter your age:";
							cin >> age;
							cout << "\nYour age is: " << age << endl
								 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 2:
							break;

						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 2);
				}
				break;

				case 2:
				{
					cout << "Sorry, This File Is Empty,,,,\n\n";
				}
					system("pause");
					system("cls");
					break;

				case 3:
					break;
				default:
					cout << "Error, Please try again !!!\n\n";
				}
			} while (loop2 != 3);
		}
		break;

		case 2:
		{
			do
			{
				cout << "Select Your Choice :\n\t\t1.Solved Programs.\n\t\t2.Unsolved Programs.\n\t\t3.Go Back.\nEnter: ";
				cin >> loop2;
				system("cls");
				switch (loop2)
				{
				case 1:
				{
					do
					{
						cout << "1.Rectangular Area.\n2.Math Operations for 10 & 7.\n3.Math Operations for Two Numbers.\n4.Circle Area.\n5.Change Between Two Values.\n6.Find The Outputs 1.\n7.Find The Outputs 2.\n8.Find The Outputs 3.\n9.To Solve f=2X*X+X+5\n10.To Solve m=Root of n\n11.To Solve y= Root of X*X\n12.To Solve Z=(X*X)+(y/2)\n13.To Solve S=(x*y)/(x+y)-12\n14.Go Back.\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							int length, width;
							cout << " Enter retangle Length ";
							cin >> length;
							cout << " Enter retangle width ";
							cin >> width;
							cout << " area = " << length * width << endl;
						}
							system("pause");
							system("cls");
							break;

						case 2:
						{
							cout << " 10 + 7 = " << 10 + 7 << endl;
							cout << " 10 - 7 = " << 10 - 7 << endl;
							cout << " 10 * 7 = " << 10 * 7 << endl;
							cout << " 10 / 7 = " << 10 / 7 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 3:
						{
							int number1, number2;
							cout << " Enter first number ";
							cin >> number1;
							cout << " Enter second number ";
							cin >> number2;
							cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
							cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
							cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
							cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 4:
						{
							const float PI = 3.14;
							float r;
							cout << " Enter radius " << endl;
							cin >> r;
							cout << " area = " << PI * r * r << endl
								 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 5:
						{
							int number1, number2, temp;
							cout << " Enter first number ";
							cin >> number1;
							cout << " Enter second number ";
							cin >> number2;
							cout << " x value is " << number1 << endl;
							cout << " y value is " << number2 << endl;
							temp = number1;
							number1 = number2;
							number2 = temp;
							cout << " x value is " << number1 << endl;
							cout << " y value is " << number2 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 6:
						{
							cout << " int a=9;\n cout <<a++<<endl;  \ncout<<a<< endl;  \ncout<<++a<< endl;  \ncout<<--a<< endl; \ncout<<a << endl; ";
							system("pause");
							system("cls");
							int a = 9;
							cout << a++ << endl;
							cout << a << endl;
							cout << ++a << endl;
							cout << --a << endl;
							cout << a << endl;
						}
							system("pause");
							system("cls");
							break;

						case 7:
						{
							cout << " int x,y; \nx=y=7; \ncout <<--x<<endl;  \nx=++y;  \ncout<<x<<endl<<--y<<endl;  \nx=x++ +y--;  \ncout<<x++<<endl<<y<<endl;\n\n ";
							system("pause");
							system("cls");
							int x, y;
							x = y = 7;
							cout << --x << endl;
							x = ++y;
							cout << x << endl
								 << --y << endl;
							x = x++ + y--;
							cout << x++ << endl
								 << y << endl;
						}
							system("pause");
							system("cls");
							break;

						case 8:
						{
							cout << " int x=5,y=3; \n cout <<--x<<endl;  \nx=y--;  \ncout<<++x<<endl<<--y<<endl;  \ncout<<x<<endl<<y<<endl; \n\n";
							system("pause");
							system("cls");
							int x = 5, y = 3;
							cout << --x << endl;
							x = y--;
							cout << ++x << endl
								 << --y << endl;
							cout << x << endl
								 << y << endl;
						}
							system("pause");
							system("cls");
							break;

						case 9:
						{
							int f, x;
							cout << "Enter the value of x \n";
							cin >> x;
							f = 2 * pow(x, 2) + x + 5;
							cout << "The value of f is :" << f << endl
								 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 10:
						{
							float m, n;
							cout << "enter the value of n \n";
							cin >> n;
							m = abs(sqrt(n));
							cout << "the value of m is :" << m << endl
								 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 11:
						{
							float x, y;
							cout << "Enter the value of x \n";
							cin >> x;
							y = sqrt(pow(x, 2));
							cout << "the value of y is :" << y << endl
								 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 12:
						{
							int x, y;
							float z;
							cout << "Enter x value: ";
							cin >> x;
							cout << "Enter y value: ";
							cin >> y;
							cout << x * x + (y / 2) << endl
								 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 13:
						{
							int x, y;
							float z;
							cout << "Enter x value: ";
							cin >> x;
							cout << "Enter y value: ";
							cin >> y;
							cout << x * x + (y / 2) << endl
								 << endl;
						}
							system("pause");
							system("cls");
							break;

						case 14:
							break;

						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 14);
				}
				break;

				case 2:
				{
					do
					{
						cout << "1.To Type Your Age in \n\tYears,\n\tMonths,\n\tDays,\n\tHours,\n\tMinutes,\n\tSeconds,\n\n2.To Change From Capital To Small & From Small To Capital.\n3.Exit\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							int preasent_year, birth_year, age, month, day, hour, min, sec;
							string any;
						start:
							cout << "Enter Preasent Year : ";
							cin >> preasent_year;
							cout << "Enter Birth Year : ";
							cin >> birth_year;
							system("cls");
							if (birth_year >= preasent_year)
							{
								cout << "Error!\nYou Haven't Enter The Correct Years.\nEnter the years again :\n\n ";
								goto start;
							}
							else
							{
								age = preasent_year - birth_year;
								month = age * 12;
								day = month * 30;
								hour = day * 24;
								min = hour * 60;
								sec = min * 60;
								cout << "Your Age in\n\t\tYears = " << age << "\n\t\tMonths = " << month << "\n\t\tDays = " << day << "\n\t\tHours = " << hour << "\n\t\tMinutes = " << min << "\n\t\tSeconds = " << sec;
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 2:
						{
							char letter;
							string change;
						start1:
							cout << "Enter the letter : ";
						start2:
							cin >> letter;
							if (letter <= 'Z' && letter >= 'A')
							{
								system("cls");
								change = letter + 32;
								cout << "the small letter is : " << change << "\n";
							}
							else if (letter <= 'z' && letter >= 'a')
							{
								system("cls");
								change = letter - 32;
								cout << "the capital letter is : " << change << "\n";
							}
							else
							{
								system("cls");
								cout << "Error !\nPlease enter a correct letter : ";
								goto start2;
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 3:
							break;

						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 3);
				}
				break;

				case 3:
					break;
				default:
					cout << "Error, Please try again !!!\n\n";
				}
			} while (loop2 != 3);
		}
		break;

		case 3:
		{
			do
			{
				cout << "Select Your Choice :\n\t\t1.Solved Programs.\n\t\t2.Unsolved Programs.\n\t\t3.Go Back.\nEnter: ";
				cin >> loop2;
				system("cls");
				switch (loop2)
				{
				case 1:
				{
					do
					{
						cout << "1.Check if The Number Bigger or Smaller Than 10.\n2.Check if The Number Positive or Negative.\n3.Check if The Number Even or odd.\n4.Check Student Degree pass or fail.\n5.To Type The Bigger Number(2 Values).\n6.To Type The Bigger Number(another code).\n7.To Type The Grade.\n8.To Type The Grade of Three Subjects.\n9.To Find Commission of Salesperson(long description)\n10.To Find W Value (long description).\n11.To Find Y Value (long description).\n12.To Type The Bigger Number(3 Values).\n13.To Type a Number from 1 to 3 .\n14.Calculator .\n15.Exit.\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							int i;
							cout << "Enter the number: ";
							cin >> i;
							if (i > 10)
								cout << i << " is greater than 10 ";
							else
								cout << i << " is smaller than 10 ";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 2:
						{
							int i;
							cout << "Enter the number: ";
							cin >> i;
							if (i < 0)
								cout << i << " is negative ";
							else
								cout << i << " is positive ";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 3:
						{
							int i;
							cout << "Enter the number: ";
							cin >> i;
							if (i % 2 == 0)
								cout << i << " is even ";
							else
								cout << i << " is odd ";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 4:
						{
							int grade;
							cout << "Enter the grade: ";
							cin >> grade;
							if (grade >= 50)
								cout << " is passing " << endl;
							else
								cout << " is failing " << endl;
						}
							system("pause");
							system("cls");
							break;

						case 5:
						{
							int a, b, c;
							cout << "Enter the value of a and b" << endl;
							cin >> a >> b;
							c = (a > b) ? a : b;
							cout << "\n"
								 << c;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 6:
						{
							int a, b;
							cout << "Enter the value of a and b" << endl;
							cin >> a >> b;
							if (a > b)
							{
								cout << "\nthe max value is a = " << a;
							}
							else
							{
								cout << "\nthe max value is b = " << b;
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 7:
						{
							int grade;
							cout << "Enter the grade: ";
							cin >> grade;
							if (grade >= 90)
								cout << " Excellent " << endl;
							else if (grade >= 80)
								cout << " Very Good " << endl;
							else if (grade >= 65)
								cout << " Good " << endl;
							else if (grade >= 50)
								cout << " Accepted " << endl;
							else
								cout << " is failing " << endl;
						}
							system("pause");
							system("cls");
							break;

						case 8:
						{
							int x, y, z, sum;
							float avg;
							cout << "enter the degree of three subject" << endl;
							cin >> x >> y >> z;
							sum = x + y + z;
							avg = sum / 3;
							cout << "the avg is " << avg << endl;
							if (avg >= 90)
								cout << "excellent ";
							else if (avg >= 80)
								cout << "very good";
							else if (avg >= 65)
								cout << "good";
							else if (avg >= 50)
								cout << "accepted";
							else
								cout << "fail";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 9:
						{
							int sales;
							float commission;
							cout << "enter the sales" << endl;
							cin >> sales;
							if (sales < 1000)
								commission = sales * 0.03;
							else if ((sales >= 1000) && (sales <= 5000))
								commission = sales * 0.06;
							else
								commission = sales * 0.09;
							cout << "commission =" << commission << "\n\n";
						}
							system("pause");
							system("cls");
							break;

						case 10:
						{
							int x, w;
							cout << "Enter the x: ";
							cin >> x;
							if (x > 0)
								w = x * x + 1;
							else if (x == 0)
								w = x + 5;
							else
								w = 2 * x * x * x - 1;
							cout << "\n"
								 << w << "\n\n";
						}
							system("pause");
							system("cls");
							break;

						case 11:
						{
							int x;
							cout << "Enter the value of x" << endl;
							cin >> x;
							if (x > 1)
								cout << "\nthe value of x is " << x + 1;
							else if (x < 1)
								cout << "\nthe value of x is " << x - 1;
							else
								cout << "\nthe value of x is" << 0;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 12:
						{
							int i, j, k;
							cout << "Enter three numbers:\n";
							cin >> i >> j >> k;
							if (i >= j && i >= k)
								cout << "\n"
									 << i << " is the largest.";
							else if (j >= i && j >= k)
								cout << "\n"
									 << j << " is the largest.";
							else
								cout << "\n"
									 << k << " is the largest.\n\n";
						}
							system("pause");
							system("cls");
							break;

						case 13:
						{
							int x;
							cout << "Enter the number : ";
							cin >> x;
							switch (x)
							{
							case 1:
								cout << "one\n\n";
								break;
							case 2:
								cout << "two\n\n";
								break;
							case 3:
								cout << "three\n\n";
								break;
							default:
								cout << "out of range \n\n";
							}
						}
							system("pause");
							system("cls");
							break;

						case 14:
						{
							float i, j;
							char op;
							cout << "Enter the number and math operator and another number:\n";
							cin >> i >> op >> j;
							cout << "\n";
							switch (op)
							{
							case '+':
								cout << i + j;
								break;
							case '-':
								cout << i - j;
								break;
							case '*':
								cout << i * j;
								break;
							case '/':
								cout << i / j;
								break;
							case '%':
								cout << int(i) % (int)j;
								break;
							default:
								cout << " ERROR !! ";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 15:
							break;

						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 15);
				}

				break;

				case 2:
				{
					cout << "Sorry, This File is Empty,,,,,,,,\n\n";
				}
					system("pause");
					system("cls");
					break;

				case 3:
					break;
				default:
					cout << "Error, Please try again !!!\n\n";
				}
			} while (loop2 != 3);
		}
		break;

		case 4:
		{
			do
			{
				cout << "Select Your Choice :\n\t\t1.Solved Programs.\n\t\t2.Unsolved Programs.\n\t\t3.Go Back.\nEnter: ";
				cin >> loop2;
				system("cls");
				switch (loop2)
				{
				case 1:
				{
					do
					{
						cout << "1.To Type From 1 To 100\n2.To Type From 100 To 1\n3.To Type Even Numbers From 1 To 100\n4.To Type Odd Numbers From 1 To 40\n5.To Type The Summation of  Numbers From 1 To 50\n6.To Type factor of 10 \n7.To Type Doubles of 5 less than 100\n8.To Type Multiplication Schule From 1 To 12 \n9.To Check The Number (1-10)\n10.Find The Outputs 1\n11.Find The Outputs 2\n12.Find The Outputs 3\n13. Find The Outputs 4\n14. Find The Outputs 5\n15.Exit\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							for (int i = 1; i <= 100; i++)
								cout << i << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 2:
						{
							for (int i = 100; i >= 1; i--)
								cout << i << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 3:
						{
							for (int i = 2; i <= 100; i += 2)
								cout << i << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 4:
						{
							for (int i = 1; i <= 40; i += 2)
								cout << i << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 5:
						{
							int sum = 0;
							for (int i = 1; i <= 50; i++)
								sum = sum + i;
							cout << sum;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 6:
						{
							int factor = 1;
							for (int i = 1; i <= 10; i++)
								factor = factor * i;
							cout << factor;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 7:
						{
							for (int i = 5; i <= 100; i += 5)
								cout << i << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 8:
						{
							for (int i = 1; i <= 12; i++)
							{
								for (int j = 1; j <= 12; j++)
									cout << i << "*" << j << "=" << j * i << " ";
								cout << endl;
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 9:
						{
							int x;
							cout << "enter the number of \n";
							cin >> x;
							if (x < 10)
								goto two;
							else
								goto one;
						one:
							cout << "the number is bigger or equal 10";
							exit(0);
						two:
							cout << "the number is less than ten \n";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 10:
						{
							cout << " int i; \nfor(i=1;i<=10;i++){ \nif(i==5)  \nbreak;  \ncout<<i<<endl; }";
							cout << "\n";
							system("pause");
							system("cls");
							int i;
							for (i = 1; i <= 10; i++)
							{
								if (i == 5)
									break;
								cout << i << endl;
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 11:
						{
							cout << "for(int i=1;i<15;i++)\n{ if(i==10)\ncontinue;\ncout<<i<<'\t';} ";
							cout << "\n\n";
							system("pause");
							system("cls");
							for (int i = 1; i < 15; i++)
							{
								if (i == 10)
									continue;
								cout << i << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 12:
						{
							cout << "for(int m=10,n=10;m<20&n>2 ;m++,n--){ \ncout<<'m'<<'\t'<<m<<'t'<<'n'<<'\t'<<n<<endl;}";
							cout << "\n\n";
							system("pause");
							system("cls");
							for (int m = 10, n = 10; m < 20 & n > 2; m++, n--)
							{
								cout << "m" << "\t" << m << "\t" << "n" << "\t" << n << endl;
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 13:
						{
							cout << " for(int k=1;k<=3;k++){\ncout<<endl; \nfor(int m=1;m<=k;m++)\n {cout<<'A';}} ";
							cout << "\n\n";
							system("pause");
							system("cls");
							for (int k = 1; k <= 3; k++)
							{
								cout << endl;
								for (int m = 1; m <= k; m++)
								{
									cout << "A";
								}
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 14:
						{
							cout << " int z; \nfor(z=1;z<=10;z++){\n if((z+1)/2<=2){ \n continue; \n break;}} \n cout<<z ;";
							cout << "\n\n";
							system("pause");
							system("cls");
							int z;
							for (z = 1; z <= 10; z++)
							{
								if ((z + 1) / 2 <= 2)
								{
									continue;
									break;
								}
							}
							cout << z;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 15:
							break;

						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 15);
				}
				break;

				case 2:
				{
					cout << "Sorry, This Flie Is Empty,,,,,,,,\n\n";
					system("pause");
					system("cls");
				}
				break;

				case 3:
					break;
				default:
					cout << "Error, Please try again !!!\n\n";
				}
			} while (loop2 != 3);
		}
		break;

		case 5:
		{
			do
			{
				cout << "Select Your Choice :\n\t\t1.Solved Programs.\n\t\t2.Unsolved Programs.\n\t\t3.Go Back.\nEnter: ";
				cin >> loop2;
				system("cls");
				switch (loop2)
				{
				case 1:
				{
					do
					{
						cout << "1.To Type Array Values (1x10)\n2.Sum and Average of Array Values (1x5)\n3.To Type Values Bigger than 5 of Array (1x5)\n4.To Find The Inverse of Array (1x5)\n5.Summation of Two Arrays (1x4)\n6.Order Array from Bigger to Smaller (1x5)\n7.To Delete An Array Element (1x5)\n8.To Separate Even and Odd Array Elements (1x10) \n9.To Search For An Array Element (1x5)\n10.Not To Allow repeating Array values (1x6)\n11.To Type Array Values (2x2)\n12.To Type Array Values (2x3)\n13.To Find The Smallest Value in The Array (2x2)\n14.To Type Main Diameter Elements ,Array(4x4) \n15.To Type Secondary Diameter Elements ,Array(4x4) \n16.To Find Summation of Main Diameter Elements ,Array(4x4) \n17.Summation of Main and Secondary Diameter Elements ,Array(4x4) \n18.To Find The Upper and Lower Triangle of Array(3x3)\n19.To Find Transposed od Array(2x3) \n20.To Type \n1\t0\t0\n0\t1\t0\n0\t0\t1\n21.To Type \n1\t0\t0\t0\n0\t2\t0\t0\n0\t0\t3\t0\n0\t0\t0\t4\n22.Go Back\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							int i, x[10];
							cout << "please enter the value of x[i]" << endl;
							for (i = 0; i < 10; i++)
							{
								cin >> x[i];
							}
							cout << "\n";
							for (i = 0; i < 10; i++)
								cout << x[i] << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 2:
						{
							int i, x[5], sum = 0;
							float avg;
							cout << "please enter the value of x[i]" << endl;
							for (i = 0; i < 5; i++)
								cin >> x[i];
							for (i = 0; i < 5; i++)
								sum += x[i];
							avg = sum / 5;
							cout << "\nthe sum is " << sum << endl;
							cout << "the average is " << avg << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 3:
						{
							int i, x[10];
							cout << "please enter the value of x[i]" << endl;
							for (i = 0; i < 10; i++)
								cin >> x[i];
							for (i = 0; i < 10; i++)
								if (x[i] > 5)
									cout << "\n[" << i << "]  " << x[i];
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 4:
						{
							int i, x[5], j, temp;
							cout << "please enter the value of x[i]" << endl;
							for (i = 0; i < 5; i++)
								cin >> x[i];
							for (i = 0, j = 4; i <= j; i++, j--)
							{
								temp = x[i];
								x[i] = x[j];
								x[j] = temp;
							}
							for (i = 0; i < 5; i++)
								cout << "\n"
									 << x[i];
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 5:
						{
							int i, x[4], y[4], add[4];
							cout << "please enter the value of x[i]" << endl;
							for (i = 0; i < 4; i++)
								cin >> x[i];
							cout << "please enter the value of y[i]" << endl;
							for (i = 0; i < 4; i++)
								cin >> y[i];
							for (i = 0; i < 4; i++)
								add[i] = x[i] + y[i];
							for (i = 0; i < 4; i++)
								cout << "\n"
									 << add[i];
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 6:
						{
							int i, a[5], j, temp;
							cout << "please enter the value of x[i]" << endl;
							for (i = 0; i <= 4; i++)
								cin >> a[i];
							for (i = 0; i <= 3; i++)
								for (j = i + 1; j <= 4; j++)
								{
									if (a[i] > a[j])
									{
										temp = a[i];
										a[i] = a[j];
										a[j] = temp;
									}
								}
							cout << " store array " << endl;
							for (i = 0; i <= 4; i++)
								cout << a[i] << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 7:
						{
							int arr[5], tot = 5, i, elem, j, found = 0;
							cout << "enter 5 array elements :";
							for (i = 0; i < tot; i++)
								cin >> arr[i];
							cout << "enter the element to delete :";
							cin >> elem;
							for (i = 0; i < tot; i++)
							{
								if (arr[i] == elem)
								{
									for (j = i; j < (tot - 1); j++)
										arr[j] = arr[j + 1];
									found++;
									i--;
									tot--;
								}
							}
							if (found == 0)
							{
								cout << "element does not found in the array:";
							}
							else
							{
								cout << "element delete successfully \n";
								for (i = 0; i < tot; i++)
									cout << arr[i] << " ";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 8:
						{
							int a[10], even[10], odd[10], ec = 0, oc = 0, j;
							for (j = 0; j <= 9; j++)
							{
								cin >> a[j];
							}
							for (int i = 0; i <= 9; i++)
							{
								if (a[i] % 2 == 0)
								{
									even[ec] = a[i];
									ec++;
								}
								else
								{
									odd[oc] = a[i];
									oc++;
								}
							}
							for (j = 0; j <= ec; j++)
							{
								a[j] = even[j];
							}
							for (j = ec, oc = 0; j <= 9; j++, oc++)
							{
								a[j] = odd[oc];
							}
							for (j = 0; j <= 9; j++)
							{
								cout << a[j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 9:
						{
							int a[5], i, n, f, index;
							float av;
							for (i = 0; i <= 4; i++)
								cin >> a[i];
							cout << "Enter the number :";
							cin >> n;
							for (i = 0; i <= 4; i++)
							{
								if (n == a[i])
								{
									f = 1;
									index = i;
									break;
								}
								else
									f = 0;
							}
							if (f == 1)
							{
								cout << "The number is found in " << index;
							}
							else
								cout << "The number is not found. ";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 10:
						{
							int a[6], i, n, f;
							n = f = 0;
							cout << "enter the value of a[n] " << endl;
							while (n < 6)
							{
								cin >> a[n];
								for (i = 0; i < n; i++)
									if (a[i] == a[n])
									{
										cout << "number is found please enter another number" << endl;
										f = 1;
									}
								if (f == 0)
									n++;
								f = 0;
							}
							for (i = 0; i < 6; i++)
								cout << "\n"
									 << a[i];
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 11:
						{
							int a[2][2], i, j;
							for (i = 0; i <= 1; i++)
								for (j = 0; j <= 1; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							for (i = 0; i <= 1; i++)
							{
								cout << endl;
								for (j = 0; j <= 1; j++)
									cout << a[i][j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 12:
						{
							int a[2][3], i, j;
							for (i = 0; i < 2; i++)
								for (j = 0; j < 3; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							for (i = 0; i < 2; i++)
							{
								cout << endl;
								for (j = 0; j < 3; j++)
									cout << a[i][j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 13:
						{
							int a[2][2], i, j, min;
							for (i = 0; i <= 1; i++)
								for (j = 0; j <= 1; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							min = a[0][0];
							for (i = 0; i <= 1; i++)
							{
								for (j = 0; j <= 1; j++)
									if (a[i][j] < min)
										min = a[i][j];
							}
							cout << "\n min = " << min;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 14:
						{
							int a[4][4], i, j, n = 4;
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							for (i = 0; i < 4; i++)
							{
								cout << endl;
								for (j = 0; j < 4; j++)
									cout << a[i][j] << "\t";
							}
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
									if (i == j)
										cout << a[i][j] << " ";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 15:
						{
							int a[4][4], i, j, n = 4;
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							for (i = 0; i < 4; i++)
							{
								cout << endl;
								for (j = 0; j < 4; j++)
									cout << a[i][j] << "\t";
							}
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
									if (i + j == n - 1) //
										cout << a[i][j] << " ";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 16:
						{
							int a[4][4], i, j, sum = 0;
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							for (i = 0; i < 4; i++)
							{
								cout << endl;
								for (j = 0; j < 4; j++)
									cout << a[i][j] << "\t";
							}
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
								{
									if (i == j)
										sum += a[i][j];
								}
							cout << sum;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 17:
						{
							int a[4][4], i, j, n = 4, sum = 0;
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							for (i = 0; i < 4; i++)
							{
								cout << endl;
								for (j = 0; j < 4; j++)
									cout << a[i][j] << "\t";
							}
							for (i = 0; i <= 3; i++)
								for (j = 0; j <= 3; j++)
								{
									if (i == j || i + j == n - 1)
										sum += a[i][j];
								}
							cout << sum;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 18:
						{
							int a[3][3], i, j, n = 3;
							for (i = 0; i < 3; i++)
								for (j = 0; j < 3; j++)
								{
									cout << "Enter a[" << i << "][" << j << "]= ";
									cin >> a[i][j];
								}
							for (i = 0; i < 3; i++)
							{
								cout << endl;
								for (j = 0; j < 3; j++)
									cout << a[i][j] << "\t";
								cout << endl;
							}
							cout << "\n\n";
							for (i = 0; i < 3; i++)
							{
								for (j = 0; j < 3; j++)
									if (i + j < n - 1)
										cout << a[i][j] << "\t";
							}
							cout << "\t\t";
							for (i = 0; i < 3; i++)
							{
								for (j = 0; j < 3; j++)
									if (i + j > n - 1)
										cout << a[i][j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 19:
						{
							int A[2][3], B[3][2], i, j;
							for (i = 0; i < 2; i++)
								for (j = 0; j < 3; j++)
								{
									cout << "Enter A[" << i << "][" << j << "]= ";
									cin >> A[i][j];
								}
							for (i = 0; i < 2; i++)
							{
								cout << endl;
								for (j = 0; j < 3; j++)
									cout << A[i][j] << "\t";
							}
							for (j = 0; j < 3; j++)
								for (i = 0; i < 2; i++)
									B[j][i] = A[i][j];
							cout << "\n\n";
							for (j = 0; j < 3; j++)
							{
								cout << endl;
								for (i = 0; i < 2; i++)
									cout << B[j][i] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 20:
						{
							int a[3][3], j, i;
							for (i = 0; i < 3; i++)
							{
								for (j = 0; j < 3; j++)
									if (i == j)
										a[i][j] = 1;
									else
										a[i][j] = 0;
							}
							for (i = 0; i < 3; i++)
							{
								cout << endl;
								for (j = 0; j < 3; j++)
									cout << a[i][j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 21:
						{
							int a[4][4], j, i;
							for (i = 0; i <= 3; i++)
							{
								for (j = 0; j <= 3; j++)
									if (i == j)
										a[i][j] = i + 1;
									else
										a[i][j] = 0;
							}
							for (i = 0; i <= 3; i++)
							{
								cout << endl;
								for (j = 0; j <= 3; j++)
									cout << a[i][j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 22:
							break;
						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 22);
				}
				break;

				case 2:
				{
					do
					{
						cout << "1.To Order The Array From The Biggest To The Smallest.\n\n2.To Make Multiplying Between A (Number) And An Array(4x2) .\n\n3.To Replace Odd Numbers by 10.\n\n4.Go Back\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							int i, j, k, s, p;
							cout << "Enter How Many Numbers You Want In The Array : ";
							cin >> i;
							system("cls");
							int a[i];
							cout << "Enter The Array Values : \n";
							for (j = 0; j < i; j++)
								cin >> a[j];
							for (j = 0; j < i; j++)
								for (k = j + 1; k < i; k++)
									if (a[j] < a[k])
									{
										s = a[j];
										a[j] = a[k];
										a[k] = s;
									}
							system("cls");
							cout << "The Order From The Biggest Number To The Smallest Number :\n ";
							for (j = 0; j < i; j++)
								cout << "\n"
									 << a[j];
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 2:
						{
							int a[4][2], n;
							cout << "Enter The Arry Value : \n";
							for (int i = 0; i < 4; i++)
								for (int j = 0; j < 2; j++)
									cin >> a[i][j];
							cout << "\nThis Is The Array : ";
							for (int i = 0; i < 4; i++)
							{
								cout << endl;
								for (int j = 0; j < 2; j++)
									cout << a[i][j] << "\t";
							}
							cout << "\nEnter A Number To Multiply The Array : ";
							cin >> n;
							system("cls");
							cout << "This Is The Result Of " << n << " * Array : ";
							for (int i = 0; i < 4; i++)
							{
								cout << endl;
								for (int j = 0; j < 2; j++)
									cout << n * a[i][j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 3:
						{
							int a[2][3];
							cout << "Enter The Arry Value : \n";
							for (int i = 0; i < 2; i++)
								for (int j = 0; j < 3; j++)
									cin >> a[i][j];
							system("cls");
							cout << "\nThis Is The Array : ";
							for (int i = 0; i < 2; i++)
							{
								cout << endl;
								for (int j = 0; j < 3; j++)
									cout << a[i][j] << "\t";
							}
							for (int i = 0; i < 2; i++)
							{
								for (int j = 0; j < 3; j++)
									if (a[i][j] % 2 != 0)
										a[i][j] = 10;
							}
							cout << "\nThis Is The Arry After Changing Every Odd Number by  10 : ";
							for (int i = 0; i < 2; i++)
							{
								cout << endl;
								for (int j = 0; j < 3; j++)
									cout << a[i][j] << "\t";
							}
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 4:
							break;

						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 4);
				}
				break;

				case 3:
					break;
				default:
					cout << "Error, Please try again !!!\n\n";
				}
			} while (loop2 != 3);
		}
		break;

		case 6:
		{
			do
			{
				cout << "Select Your Choice :\n\t\t1.Solved Programs.\n\t\t2.Unsolved Programs.\n\t\t3.Go Back.\nEnter: ";
				cin >> loop2;
				system("cls");
				switch (loop2)
				{
				case 1:
				{
					do
					{
						cout << "1.Sum of Two Numbers.\n2.Multiplting of Two Numbers.\n3.To Type Any Word on The Screen.\n4.To Type \"Welcome\" on The Screen.\n5.To Find The Cube of The Number.\n6.To Find Fact of A Number.\n7.Find The Outputs 1.\n8.Find The Outputs 2.\n9.Find The Outputs 3.\n10.Find The Outputs 4.\n11.Find The Outputs 5.\n12.Find The Outputs 6.\n13.Find The Outputs 7.\n14.Go Back.\nEnter: ";
						cin >> loop3;
						system("cls");
						switch (loop3)
						{
						case 1:
						{
							int a, b;
							cout << "enter the value of a and b \n";
							cin >> a >> b;
							cout << "the sum is " << add(a, b);
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 2:
						{
							int a, b;
							cout << "enter the value of a and b \n";
							cin >> a >> b;
							cout << "the multi is " << multi(a, b);
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 3:
						{
							cout << "enter any word \n";
							string z;
							cin >> z;
							display(z);
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 4:
						{
							display();
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 5:
						{
							int x;
							cout << "enter the value of x\n";
							cin >> x;
							cout << cube(x);
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 6:
						{
							int x;
							cout << "enter the value of x\n";
							cin >> x;
							cout << fact(x);
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 7:
						{
							cout << "void swap(int x,int y){ \nint z=x;  \nx=y;  \ny=z; \n} \nint main() { \nint x=10,y=20;\nswap(x,y); \ncout<<\"x is \"<<x<<\"\t y is\"<<y; \nreturn 0;\n}";
							cout << "\n\n";
							system("pause");
							system("cls");
							int x = 10, y = 20;
							swap1(x, y);
							cout << "x is " << x << "\t y is" << y;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 8:
						{
							cout << "void swap(int &x,int y){ \nint z=x;  \nx=y;  \ny=z; \n} \nint main() { \nint x=10,y=20;\nswap(x,y); \ncout<<\"x is \"<<x<<\"\t y is\"<<y; \nreturn 0;\n}";
							cout << "\n\n";
							system("pause");
							system("cls");
							int x = 10, y = 20;
							swap2(x, y);
							cout << "x is " << x << "\t y is" << y;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 9:
						{
							cout << "void swap(int &x,int& y){ \nint z=x;  \nx=y;  \ny=z; \n} \nint main() { \nint x=10,y=20;\nswap(x,y); \ncout<<\"x is \"<<x<<\"\t y is\"<<y; \nreturn 0;\n}";
							cout << "\n\n";
							system("pause");
							system("cls");
							int x = 10, y = 20;
							swap(x, y);
							cout << "x is " << x << "\t y is" << y;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 10:
						{
							cout << " void print(){  \ncout<<\"hello\"; \n} \nvoid multi(){  \ncout<<x*y; \n} \n int main() { \ncout<<\"nothing \"; \nreturn 0;\n}";
							cout << "\n\n";
							system("pause");
							system("cls");
							cout << "nothing ";
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 11:
						{
							cout << " void print(){ \ncout<<\"hello\"; \n} \nvoid multi(){ \ncout<<5*10;\n} \nint main() { \nprint(); \nreturn 0;\n}";
							cout << "\n\n";
							system("pause");
							system("cls");
							print();
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 12:
						{
							cout << " void f(int n){  \nif (n<1) \nreturn ; \nelse \ncout<<\"round :\"<<n<<endl;  \nf(n-1);}\nint main() { \nf(5);\nreturn 0;\n}";
							cout << "\n\n";
							system("pause");
							system("cls");
							f(5);
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 13:
						{
							cout << " int sum (int a,int b,int c){ \nreturn a+b+c; \n} \nint sum (int a,int b){ \n return a+b; \n} \nint main() { \ncout<<sum(5,3)<<endl;\nreturn 0;\n}";
							cout << "\n\n";
							system("pause");
							system("cls");
							cout << sum(5, 3) << endl;
						}
							cout << "\n\n";
							system("pause");
							system("cls");
							break;

						case 14:
						{
						}
						break;
						default:
							cout << "Error, Please try again !!!\n\n";
						}
					} while (loop3 != 14);
				}
				break;

				case 2:
				{
					cout << "Sorry, This File Is Empty,,,,,,,\n\n";
					system("pause");
					system("cls");
				}
				break;

				case 3:
					break;
				default:
					cout << "Error, Please try again !!!\n\n";
				}
			} while (loop2 != 3);
		}
		break;

		case 7:
			return main();
			break;

		case 8:
			break;
		default:
			cout << "Error, Please try again !!!\n\n";
		}
	} while (loop1 != 8);
	cout << "Thank You For Using Our Program\n\nteam Work:\n1.Mohammed Galal\n2.Majd Mostafa\n3.Mohammed Abdo Al-Kareem\n4.Yousf Mohammed\n5.Faraj Mansour\n\n#Arigato";

	return 0;
}

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int multi(int x, int y)
{
	int z;
	z = x * y;
	return z;
}

void display(string b)
{
	cout << b;
}

void display()
{
	cout << "welcom";
}

int cube(int j)
{
	int z;
	z = j * j * j;
	return z;
}

int fact(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
		f *= i;
	return f;
}

void swap1(int x, int y)
{
	int z = x;
	x = y;
	y = z;
}

void swap2(int &x, int y)
{
	int z = x;
	x = y;
	y = z;
}

void swap(int &x, int &y)
{
	int z = x;
	x = y;
	y = z;
}

void print()
{
	cout << "hello";
}

void f(int n)
{
	if (n < 1)
		return;
	else
		cout << "round :" << n << endl;
	f(n - 1);
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

int sum(int a, int b)
{
	return a + b;
}
