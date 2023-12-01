#include <iostream>
#include <cmath>
#include<iomanip>
#include <cstdlib>
#include <ctime>

/*Task1*/
void square()
{
	// ������������� ����������
	int b1 = 0; // ��������� 1
	int b2 = 0; // ��������� 2
	int h = 0; // ������
	std::cout << "1) Enter the length of the bases and height: ";
	std::cin >> b1 >> b2 >> h; // ���� ������������� ���� ��������� � ������

	double s = 0; // ������������� �������
	s = (b1 + b2) * h / 2.0; // ���������� ������� �������� �� �������
	std::cout << "Square: " << s << std::endl;// ����� ������
}


/*Task2*/
void circle()
{
	int r = 0;
	std::cout << "2) Enter the radius: ";
	std::cin >> r; // ���� ������� �������������

	const double p = 3.14; // ����� �� ���� �� ���������
	// �������������� ����������
	double c = 0;
	double s = 0;
	c = 2 * p * r; // ������� ����� ����������
	s = p * pow(r, 2); //������� ������� ����������

	// ����� �������
	std::cout << "Length: " << c << std::endl;
	std::cout << "Square: " << s << std::endl;
}


/*Task3*/
void RightTriangle()
{
	int b1 = 0; // ����� 1
	int b2 = 0; // ����� 2
	std::cout << "3) Enter the length of the cathets: ";
	std::cin >> b1 >> b2;

	double s = 0; // �������������� ���������� ��� ������� 
	double l = 0; // �������������� ���������� ��� ����� ���������� 
	int b = 0; // �������������� ���������� ��� ����� ��������� �������

	s = (b1 * b2) / 2; // ������� ������� �������������� ������������
	b = pow(b1, 2) + pow(b2, 2); // ����� ��������� �������
	l = sqrt(b); // ���������� 


	if (l * l == b1 * b1 + b2 * b2) // �������� �� ��, ��� ����������� �����������, ������� ���������� = ����� ��������� �������
	{
		// ����� �������
		std::cout << "Square: " << s << std::endl;
		std::cout << "Length: " << l << std::endl;
	}
	else std::cout << "The triangle is not rectangular" << std::endl; // �����, ���� ����������� �� �������������
}


/*Task4*/
void Digit4()
{
	int c = 0;
	std::cout << "4) Enter a 4-digit number: ";
	std::cin >> c;

	int sum = 0;
	if (c > 999 && c < 10000) // �������� �� ��, ��� ����� ������� �� 4 ����
	{
		for (int i = 0; i < 4; i++) // ������� ������ �����, ����� �� �������
		{
			sum = sum + c % 10; // ��������� ����� ����, ������ ��� ������������ "�����" ��������� �����
			c = c / 10; // "�������������" �����, ������� ��� ���������
		}

		std::cout << "Sum: " << sum << std::endl; // ����� ������
	}
	else std::cout << "The number is not 4-digit!" << std::endl; // �����, ���� ����� �� 4-�������
}

/*Task5*/
void coordinates()
{
	// ������������� ����������
	double x = 0;
	double y = 0;
	std::cout << "5) Enter the coordinates in the Cartesian coordinate system: ";
	std::cin >> x >> y;

	double r = 0;
	r = sqrt(pow(x, 2) + pow(y, 2)); // ������� �������� �� ���������� ��������� � ������

	double a = 0;
	a = atan(y / x); // ������� �������� �� ���������� ��������� � ����

	double a_g = 0;
	const double p = 3.14; // �������������� ��������� - ����� ��
	a_g = (a * 180) / p; // ������� � �������

	std::cout << "Polar coordinates: " << "radius - " << r << ", degree - " << a_g << std::endl; // ����� �������

}

/*Task6*/
void coordinatesR()
{
	// ������������� ����������
	double r = 0; // ������
	double a = 0; // ����
	std::cout << "5) Enter the coordinates in the Polar coordinate system: ";
	std::cin >> r >> a;

	double a_g = 0;
	const double p = 3.14; // �������������� ��������� - ����� ��
	a_g = (a * p) / 180; // ������� � �������

	double x = 0;
	double y = 0;
	// ������� �������� � ���������� ����������
	x = r * cos(a_g);
	y = r * sin(a_g);

	std::cout << "Cartesian coordinates: " << x << " " << y << std::endl; // ����� ������� 
}


/*Task7*/
void equation()
{
	// ���� ������������� �������������
	double a = 0;
	std::cout << "7) Enter A = ";
	std::cin >> a;

	double b = 0;
	std::cout << "Enter B = ";
	std::cin >> b;

	double c = 0;
	std::cout << "Enter C = ";
	std::cin >> c;


	double d = 0;
	d = pow(b, 2) - 4 * a * c; // ������� ���������� �������������

	if (a == 0) // ���� ����������� ����� x � ��������, ����� 0
	{
		double x = 0;
		x = c / b;
		std::cout << "Result: " << "x = " << x << std::endl;
	}

	else // ������� ���������� ����������� ��������� ������� �� �������������:
	{
		if (d < 0)
		{
			std::cout << "There are no real roots of the equation!" << std::endl; // �����, ���� ������. ������ ���
		}

		else if (d == 0)
		{
			double x1 = 0;
			x1 = (-b) / (2 * a);
			std::cout << "Result: " << "x1 = " << x1 << std::endl; // ����� ������
		}

		else if (d > 0)
		{
			double x1 = 0;
			double x2 = 0;
			// ����� = (-b +- ������� �������������)/(2*a)
			x1 = (-b + sqrt(d)) / (2 * a);

			x2 = (-b - sqrt(d)) / (2 * a);

			std::cout << "Result: " << "x1 = " << x1 << "; " << "x2 = " << x2 << std::endl; // ����� �������
		}

	}
}


/*Task8*/
void medians()
{
	// ������������� ����������
	int a = 0;
	int b = 0;
	int c = 0;
	std::cout << "8) Enter the lengths of the sides of the triangle: ";
	std::cin >> a >> b >> c;

	// ������������� ����������
	double m1 = 0;
	double m2 = 0;
	double m3 = 0;

	// ���������� �� ������� ������ ������������� ������������
	m1 = (sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2))) / 2;
	m2 = (sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2))) / 2;
	m3 = (sqrt(2 * pow(c, 2) + 2 * pow(b, 2) - pow(a, 2))) / 2;

	std::cout << "Medians of the original triangle: " << "m1= " << m1 << "; " << "m2= " << m2 << "; " << "m1= " << m3 << std::endl; // ����� �������

	// ������������� ����������
	double n1 = 0;
	double n2 = 0;
	double n3 = 0;

	// ���������� ������ ������ ������������, ���������� �� ������ �������������
	n1 = (sqrt(2 * pow(m1, 2) + 2 * pow(m2, 2) - pow(m3, 2))) / 2;
	n2 = (sqrt(2 * pow(m1, 2) + 2 * pow(m3, 2) - pow(m2, 2))) / 2;
	n3 = (sqrt(2 * pow(m3, 2) + 2 * pow(m2, 2) - pow(m1, 2))) / 2;

	std::cout << "Medians of a new triangle: " << "n1= " << n1 << "; " << "n2= " << n2 << "; " << "n1= " << n3 << std::endl; // ����� �������
}


/*Task9*/
void sec()
{
	int s = 0;
	std::cout << "9) Enter the number of seconds: ";
	std::cin >> s;

	std::cout << "Hours: " << s / 3600 << std::endl; // ���������� �����, � 1 ���� 3600 ������
	std::cout << "Minutes: " << s / 60 % 60 << std::endl; // ���������� �����, � 1 ������ 60 ������, ������� ������, ������� �� ������� �� ������ ����
}


/*Task10*/
void triangle()
{
	// ������������� ����������
	int a = 0;
	int b = 0;
	int c = 0;
	std::cout << "10) Enter the lengths of the sides of the triangle: ";
	std::cin >> a >> b >> c;

	if (a == b || a == c || b == c) // ����������� ����� ��������������, ���� ����� ��� ������� ����� (������, ��� �������������� ����������� - ��������������)
	{
		std::cout << "The triangle is isosceles!" << std::endl;
	}
	else
		std::cout << "The triangle is not isosceles!" << std::endl;
}



/*Task11*/
void sale()
{
	double c = 0;
	std::cout << "11) Enter the purchase price: ";
	std::cin >> c;

	if (c <= 1000) // �������� �� ������ �� 1000 ���� �������
	{
		std::cout << "There will be no discount." << std::endl;; // �����, ���� ��� ������
	}
	else
	{
		c = c * 0.90;
		std::cout << "Discounted price: " << c << std::endl; // ����� ���� �� �������
	}
}



/*Task12*/
void idealW()
{
	int h = 0;
	int w = 0;
	std::cout << "12) Enter your height and weight: ";
	std::cin >> h >> w;

	int a = 0;
	a = h - 100; // ������� ���������� ����

	// �������� ��� ��������
	if (w > a)
	{
		std::cout << "You should lose weight by " << w - a << " kg" << std::endl; // ����� ������� �� �������� ���� ��������, ������� ����� ��������� � ��������� �����
	}

	else if (w < a)
	{
		std::cout << "You should gain " << a - w << " kg" << std::endl; // ����� ������� �� �������� ���� �������, ������� ����� ��������� � ��������� �����
	}

	else if (w = a)
	{
		std::cout << "You have the ideal weight!" << std::endl; // �����, ��� � �������� ��������� ���
	}

}


/*Task13*/
void Random()
{
	std::srand(std::time(nullptr)); // ���������� ������� ����� � �������� ���������� ����� ��� ���������� ��������� ����� 
	int num1 = (rand() % 9) + 1; // ��������� ������� ����� �� 1 �� 9
	int num2 = (rand() % 9) + 1; // ��������� ������� ����� �� 1 �� 9

	int a = 0;
	std::cout << "Enter the product of the numbers " << num1 << " and " << num2 << ": "; // ������������ ��� ������� ������������ �����
	std::cin >> a;

	if (a == num1 * num2) // �������� �� ������������ ������� ������������
	{
		std::cout << "That's right!" << std::endl; // �����
	}
	else
	{
		std::cout << "The answer is incorrect!" << std::endl; // �������
	}
}


/*Task14*/
void conversation()
{
	std::cout << "14) A price per min is 15 rubles." << std::endl;

	// ������������� ����������
	int len = 0;
	int day = 1;
	std::cout << "Enter the duration of the conversation (minutes) and the day of the week (a number from 1 to 7): ";
	std::cin >> len >> day;

	int lenAll = 0;
	lenAll = len * 15; // ���������� ���� �� �� ���������, 1 ������ = 15 ������

	if (day == 6 || day == 7) // �������� �� ����, � �� � �� ������
	{
		std::cout << "You have a 20% discount! The price will be " << (lenAll * 0.80) << std::endl; // ����� ���� �� �������

	}

	else
	{
		std::cout << "The price will be " << lenAll << " rubles" << std::endl; // ����� ���� ��� ������
	}
}



/*Task15*/
void Month()
{
	int m = 1;
	std::cout << "15) Enter the month (a number from 1 to 12): ";
	std::cin >> m;

	switch (m) // ��������� �������������� ������� ��������� if/else ��� �������� �������� ����� ���������� m
	{
	case 1:
		std::cout << "Month - January; season - winter" << std::endl;
		break;
	case 2:
		std::cout << "Month - February; season - winter" << std::endl;
		break;
	case 3:
		std::cout << "Month - March; season - spring" << std::endl;
		break;
	case 4:
		std::cout << "Month - April; season - spring" << std::endl;
		break;
	case 5:
		std::cout << "Month - May; season - spring" << std::endl;
		break;
	case 6:
		std::cout << "Month - June; season - summer" << std::endl;
		break;
	case 7:
		std::cout << "Month - July; season - summer" << std::endl;
		break;
	case 8:
		std::cout << "Month - August; season - summer" << std::endl;
		break;
	case 9:
		std::cout << "Month - September; season - autumn" << std::endl;
		break;
	case 10:
		std::cout << "Month - October; season - autumn" << std::endl;
		break;
	case 11:
		std::cout << "Month - November; season - autumn" << std::endl;
		break;
	case 12:
		std::cout << "Month - December; season - winter" << std::endl;
		break;
	default:
		std::cout << "Unknown number!" << std::endl; // ���������� ��� �������� �����

	}

}



/*Task16*/
void Happy()
{
	int a = 0;
	std::cout << "16) Enter a 6-digit number: ";
	std::cin >> a;

	int sum1, sum2;
	if (a > 99999 && a < 1000000) // �������� �� ��. ��� ����� 6-�������
	{
		sum1 = a % 10 + a / 10 % 10 + a / 100 % 10; // ����� ��������� ��� �����, ��������� ����� + ������������� + ������ � �����
		sum2 = a / 1000 % 10 + a / 10000 % 10 + a / 100000; // ����� ������ ��� �����, ������ + ������ + ������

		if (sum1 == sum2) // �������� ������� ����������� �����: ����� ������ ��� ������ = ����� ��������� ���
		{
			std::cout << "The number " << a << " is lucky!" << std::endl; //����������
		}
		else
			std::cout << "The number " << a << " is not lucky." << std::endl; // �� ����������
	}
	else std::cout << "number is not 6-digit" << std::endl; //�����, ���� ����� �� 6-�������
}


/*Task17*/
void Kopeyki()
{
	int a = 0;
	std::cout << "17) Enter a number from 1 to 99: ";
	std::cin >> a;

	int n = a % 10; // ���� ������� �� 10, ����� ����������� ������ ��������� ����� ���������� �����

	if (a >= 1 && a <= 99) // �������� �� ��, ��� ��������� ����� ������ 99
	{
		if (a >= 11 && a <= 14)  // ����� ����������, ��� ��������� ����� ��
		{
			std::cout << "� ��� " << a << " ������." << std::endl;
		}
		else if (n == 1) // ��� 1 ��������� ��
		{
			std::cout << "� ��� " << a << " �������." << std::endl;
		}

		else if (n == 2 || n == 3 || n == 4) // ��� 2, 3, 4 ��������� ���
		{
			std::cout << "� ��� " << a << " �������." << std::endl;
		}

		else if (n == 5 || n == 6 || n == 7 || n == 8 || n == 9 || n == 0) // ��� 0, 5, 6, 7, 8 � 9 ��������� ��
		{
			std::cout << "� ��� " << a << " ������." << std::endl;
		}
	}

	else
		std::cout << "����� ������ ���� �� 1 �� 99!" << std::endl; // �����, ���� ����� ����� �� �� 1 �� 99
}


/*Task18*/
void Palindrom()
{
	int a = 0;
	std::cout << "18) Enter a 4-digit number: ";
	std::cin >> a;

	int n1, n2, n3, n4;
	if (a > 999 && a < 10000) // ��������, ��� ����� �������������
	{
		n4 = a % 10; // ��������� �����
		n3 = a / 10 % 10; // ������������� �����
		n2 = a / 100 % 10; // ������ �����
		n1 = a / 1000; // ������ �����
		if (n4 == n1 && n2 == n3) // � ����������� (������ � ���������) � (������ � ������) ������� �����
		{
			std::cout << "The number " << a << " is a palindrome!" << std::endl; // ����� - ���������
		}
		else
			std::cout << "The number " << a << " is not a palindrome." << std::endl; // ����� - �� ���������
	}
	else 
		std::cout << "The number should have 4 digits!" << std::endl; // �����, ���� ����� �� 4-�������
}



/*Task19*/
void Digit3()
{
	int a = 0;
	std::cout << "19) Enter a 3-digit number. a = ";
	std::cin >> a;

	int b = 0;
	std::cout << "Enter a number. b = ";
	std::cin >> b;

	if (a >= 100 && a <= 999) // ��������� �� ��, ��� ����� ����������
	{
		int m = 0;
		m = (a % 10) * (a / 10 % 10) * (a / 100 % 10);  // ������������ ����������, ������� � ������� ����� (������� � ������� �������� � ������� �� �����, ��� ��� ��������)

		int sum = 0;
		sum = (a % 10) + (a / 10 % 10) + (a / 100 % 10); // ����� ����������, ������� � ������� ����� (������� � ������� �������� � ������� �� �����, ��� ��� ��������)

		if (m > b) // �������� �� ��, ������ �� ������������ ����� b
		{
			std::cout << "The product of numbers is greater than a number " << b << std::endl; // ������
		}
		else
			std::cout << "The product of numbers is not greater than a number " << b << std::endl; // �� ������

		if (sum % 7 == 0) // ���� ����� ������� ��� ������� �� 7
		{
			std::cout << "The sum of this number is divisible by 7!" << std::endl; // �������
		}
		else
			std::cout << "The sum of this number is not divisible by 7!" << std::endl; // �� �������
	}
	else
		std::cout << "The number " << a << " should have 3 digits!" << std::endl; // �����, ���� ����� �� 3-�������
}




/*Task20*/
void rectangle()
{
	// ������������� ����������
	double a;
	double b;
	double c;
	double d;
	std::cout << "20) Enter 4 digits: ";
	std::cin >> a >> b >> c >> d;

	if ((a < c && b < d) || (a < d && b < c)) // ����� ����� ������� ������� �������������� ���� ������ �������; ������, ��� ���������� - ��� ������ ������ ��������� ����� ������, ������ �� ���������
	{
		std::cout << "A rectangle with sides " << a << " and " << b << " can be placed in a rectangle with sides " << c << " and " << d << std::endl; // �����, ���� ������
	}
	else
	{
		std::cout << "A rectangle with sides " << a << " and " << b << " cannot be placed in a rectangle with sides " << c << " and " << d << std::endl; // �����, ���� �� ������
	}

}


/*Task21*/
void size()
{
	// ��������� �������� sizeof, ������� ���������� ������ ���� ������ � ������
	std::cout << "21) Main data types: " << std::endl;
	std::cout << "Size of the int: " << sizeof(int) << " bytes" << std::endl;
	std::cout << "Size of the double: " << sizeof(double) << " bytes" << std::endl;
	std::cout << "Size of the float: " << sizeof(float) << " bytes" << std::endl;
	std::cout << "Size of the char: " << sizeof(char) << " bytes" << std::endl;
	std::cout << "Size of the bool: " << sizeof(bool) << " bytes" << std::endl;
}
//�����: ��� ������ �������� ����� ��������� ���������� ����� ����, ��� ������ ����� ������ ��� �������� ���������� ����� ����


int main()
{
	setlocale(LC_ALL, "Russian");

	/*Task1*/
	square();

	/*Task2*/
	circle();

	/*Task3*/
	RightTriangle();

	/*Task4*/
	Digit4();

	/*Task5*/
	coordinates();

	/*Task6*/
	coordinatesR();

	/*Task7*/
	equation();

	/*Task8*/
	medians();

	/*Task9*/
	sec();

	/*Task10*/
	triangle();

	/*Task11*/
	sale();

	/*Task12*/
	idealW();

	/*Task13*/
	Random();

	/*Task14*/
	conversation();

	/*Task15*/
	Month();

	/*Task16*/
	Happy();

	/*Task17*/
	Kopeyki();

	/*Task18*/
	Palindrom();

	/*Task19*/
	Digit3();

	/*Task20*/
	rectangle();

	/*Task21*/
	size();

	return 0;
}