#include <iostream>
#include <cmath>
#include<iomanip>
#include <cstdlib>
#include <ctime>

/*Task1*/
void square()
{
	// инициализация переменных
	int b1 = 0; // основание 1
	int b2 = 0; // основание 2
	int h = 0; // высота
	std::cout << "1) Enter the length of the bases and height: ";
	std::cin >> b1 >> b2 >> h; // ввод пользователем длин оснований и высоты

	double s = 0; // инициализация площади
	s = (b1 + b2) * h / 2.0; // вычисление площади трапеции по формуле
	std::cout << "Square: " << s << std::endl;// вывод ответа
}


/*Task2*/
void circle()
{
	int r = 0;
	std::cout << "2) Enter the radius: ";
	std::cin >> r; // ввод радиуса пользователем

	const double p = 3.14; // число ПИ берём за константу
	// инициализируем переменные
	double c = 0;
	double s = 0;
	c = 2 * p * r; // формула длины окружности
	s = p * pow(r, 2); //формула прощади окружности

	// вывод ответов
	std::cout << "Length: " << c << std::endl;
	std::cout << "Square: " << s << std::endl;
}


/*Task3*/
void RightTriangle()
{
	int b1 = 0; // катет 1
	int b2 = 0; // катет 2
	std::cout << "3) Enter the length of the cathets: ";
	std::cin >> b1 >> b2;

	double s = 0; // инициализируем переменную под площадь 
	double l = 0; // инициализируем переменную под длину гипотенуты 
	int b = 0; // инициализируем переменную под сумму квадратов катетов

	s = (b1 * b2) / 2; // формула площади прямоугольного треугольника
	b = pow(b1, 2) + pow(b2, 2); // сумма квадратов катетов
	l = sqrt(b); // гипотенуза 


	if (l * l == b1 * b1 + b2 * b2) // проверка на то, что треугольник прямоульный, квадрат гипотенузы = сумме квадратов катетов
	{
		// вывод ответов
		std::cout << "Square: " << s << std::endl;
		std::cout << "Length: " << l << std::endl;
	}
	else std::cout << "The triangle is not rectangular" << std::endl; // вывод, если треугольник не прямоугольный
}


/*Task4*/
void Digit4()
{
	int c = 0;
	std::cout << "4) Enter a 4-digit number: ";
	std::cin >> c;

	int sum = 0;
	if (c > 999 && c < 10000) // проверка на то, что число состоит из 4 цифр
	{
		for (int i = 0; i < 4; i++) // перебор каждой цифры, чтобы их сложить
		{
			sum = sum + c % 10; // считается сумма цифр, каждый раз прибавляется "новая" последняя цифра
			c = c / 10; // "отбрасывается" цифра, которую уже прибавили
		}

		std::cout << "Sum: " << sum << std::endl; // вывод ответа
	}
	else std::cout << "The number is not 4-digit!" << std::endl; // вывод, есди число не 4-значное
}

/*Task5*/
void coordinates()
{
	// инициализация переменных
	double x = 0;
	double y = 0;
	std::cout << "5) Enter the coordinates in the Cartesian coordinate system: ";
	std::cin >> x >> y;

	double r = 0;
	r = sqrt(pow(x, 2) + pow(y, 2)); // формула перевода из декартовых координат в радиус

	double a = 0;
	a = atan(y / x); // формула перевода из декартовых координат в угол

	double a_g = 0;
	const double p = 3.14; // инициализируем константу - число ПИ
	a_g = (a * 180) / p; // перевод в градусы

	std::cout << "Polar coordinates: " << "radius - " << r << ", degree - " << a_g << std::endl; // вывод ответов

}

/*Task6*/
void coordinatesR()
{
	// инициализация переменных
	double r = 0; // радиус
	double a = 0; // угол
	std::cout << "5) Enter the coordinates in the Polar coordinate system: ";
	std::cin >> r >> a;

	double a_g = 0;
	const double p = 3.14; // инициализируем константу - число ПИ
	a_g = (a * p) / 180; // перевод в радианы

	double x = 0;
	double y = 0;
	// формулы перевода в декартовые координаты
	x = r * cos(a_g);
	y = r * sin(a_g);

	std::cout << "Cartesian coordinates: " << x << " " << y << std::endl; // вывод ответов 
}


/*Task7*/
void equation()
{
	// ввод коэффициентов пользователем
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
	d = pow(b, 2) - 4 * a * c; // формула вычисления дискриминанта

	if (a == 0) // если коэффициент перед x в квадрате, равен 0
	{
		double x = 0;
		x = c / b;
		std::cout << "Result: " << "x = " << x << std::endl;
	}

	else // формула вычисления квадратного уравнения зависит от дискриминанта:
	{
		if (d < 0)
		{
			std::cout << "There are no real roots of the equation!" << std::endl; // вывод, если действ. корней нет
		}

		else if (d == 0)
		{
			double x1 = 0;
			x1 = (-b) / (2 * a);
			std::cout << "Result: " << "x1 = " << x1 << std::endl; // вывод ответа
		}

		else if (d > 0)
		{
			double x1 = 0;
			double x2 = 0;
			// корни = (-b +- квадрат дискриминанта)/(2*a)
			x1 = (-b + sqrt(d)) / (2 * a);

			x2 = (-b - sqrt(d)) / (2 * a);

			std::cout << "Result: " << "x1 = " << x1 << "; " << "x2 = " << x2 << std::endl; // вывод ответов
		}

	}
}


/*Task8*/
void medians()
{
	// инициализация переменных
	int a = 0;
	int b = 0;
	int c = 0;
	std::cout << "8) Enter the lengths of the sides of the triangle: ";
	std::cin >> a >> b >> c;

	// инициализация переменных
	double m1 = 0;
	double m2 = 0;
	double m3 = 0;

	// вычисление по формуле медиан оригинального треугольника
	m1 = (sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2))) / 2;
	m2 = (sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2))) / 2;
	m3 = (sqrt(2 * pow(c, 2) + 2 * pow(b, 2) - pow(a, 2))) / 2;

	std::cout << "Medians of the original triangle: " << "m1= " << m1 << "; " << "m2= " << m2 << "; " << "m1= " << m3 << std::endl; // вывод ответов

	// инициализация переменных
	double n1 = 0;
	double n2 = 0;
	double n3 = 0;

	// вычисление медиан нового треугольника, состоящего из медиан оригинального
	n1 = (sqrt(2 * pow(m1, 2) + 2 * pow(m2, 2) - pow(m3, 2))) / 2;
	n2 = (sqrt(2 * pow(m1, 2) + 2 * pow(m3, 2) - pow(m2, 2))) / 2;
	n3 = (sqrt(2 * pow(m3, 2) + 2 * pow(m2, 2) - pow(m1, 2))) / 2;

	std::cout << "Medians of a new triangle: " << "n1= " << n1 << "; " << "n2= " << n2 << "; " << "n1= " << n3 << std::endl; // вывод ответов
}


/*Task9*/
void sec()
{
	int s = 0;
	std::cout << "9) Enter the number of seconds: ";
	std::cin >> s;

	std::cout << "Hours: " << s / 3600 << std::endl; // вычисление часов, в 1 часе 3600 секунд
	std::cout << "Minutes: " << s / 60 % 60 << std::endl; // вычисление минут, в 1 минуте 60 секунд, находим минуты, которых не хватило до целого часа
}


/*Task10*/
void triangle()
{
	// инициализация переменных
	int a = 0;
	int b = 0;
	int c = 0;
	std::cout << "10) Enter the lengths of the sides of the triangle: ";
	std::cin >> a >> b >> c;

	if (a == b || a == c || b == c) // треугольник будет равнобедренным, если любые две стороны равны (считаю, что равтосторонный треугольник - равнобедренный)
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

	if (c <= 1000) // проверка на больше ли 1000 цена покупки
	{
		std::cout << "There will be no discount." << std::endl;; // вывод, если нет скидки
	}
	else
	{
		c = c * 0.90;
		std::cout << "Discounted price: " << c << std::endl; // вывод цены со скидкой
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
	a = h - 100; // формула идеального веса

	// провярем все варианты
	if (w > a)
	{
		std::cout << "You should lose weight by " << w - a << " kg" << std::endl; // вывод сколько кг человеку надо сбросить, разница между идеальным и настоящим весом
	}

	else if (w < a)
	{
		std::cout << "You should gain " << a - w << " kg" << std::endl; // вывод сколько кг человеку надо набрать, разница между идеальным и настоящим весом
	}

	else if (w = a)
	{
		std::cout << "You have the ideal weight!" << std::endl; // вывод, что у человека идеальный вес
	}

}


/*Task13*/
void Random()
{
	std::srand(std::time(nullptr)); // используем текущее время в качестве начального числа для генератора случайных чисел 
	int num1 = (rand() % 9) + 1; // генерация первого числа от 1 до 9
	int num2 = (rand() % 9) + 1; // генерация второго числа от 1 до 9

	int a = 0;
	std::cout << "Enter the product of the numbers " << num1 << " and " << num2 << ": "; // пользователь сам считает произведение чисел
	std::cin >> a;

	if (a == num1 * num2) // проверка на правильность решения пользователя
	{
		std::cout << "That's right!" << std::endl; // верно
	}
	else
	{
		std::cout << "The answer is incorrect!" << std::endl; // неверно
	}
}


/*Task14*/
void conversation()
{
	std::cout << "14) A price per min is 15 rubles." << std::endl;

	// инициализация переменных
	int len = 0;
	int day = 1;
	std::cout << "Enter the duration of the conversation (minutes) and the day of the week (a number from 1 to 7): ";
	std::cin >> len >> day;

	int lenAll = 0;
	lenAll = len * 15; // вычисление цены за всё совещание, 1 минута = 15 рублей

	if (day == 6 || day == 7) // проверка на день, в вс и сб скидки
	{
		std::cout << "You have a 20% discount! The price will be " << (lenAll * 0.80) << std::endl; // вывод цены со скидкой

	}

	else
	{
		std::cout << "The price will be " << lenAll << " rubles" << std::endl; // вывод цены без скидки
	}
}



/*Task15*/
void Month()
{
	int m = 1;
	std::cout << "15) Enter the month (a number from 1 to 12): ";
	std::cin >> m;

	switch (m) // использую альтернативный вариант ветвления if/else для проверки значения одной переменной m
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
		std::cout << "Unknown number!" << std::endl; // пользоваль ввёл неверное число

	}

}



/*Task16*/
void Happy()
{
	int a = 0;
	std::cout << "16) Enter a 6-digit number: ";
	std::cin >> a;

	int sum1, sum2;
	if (a > 99999 && a < 1000000) // проверка на то. что число 6-значное
	{
		sum1 = a % 10 + a / 10 % 10 + a / 100 % 10; // сумма последних трёх чисел, последнее число + предпоследнее + третье с конца
		sum2 = a / 1000 % 10 + a / 10000 % 10 + a / 100000; // сумма первых трёх чисел, третьё + второе + первое

		if (sum1 == sum2) // проверка условия счастливого числа: сумма первых трёх числел = сумме последних трёх
		{
			std::cout << "The number " << a << " is lucky!" << std::endl; //счастливое
		}
		else
			std::cout << "The number " << a << " is not lucky." << std::endl; // не счастливое
	}
	else std::cout << "number is not 6-digit" << std::endl; //вывод, если число не 6-значное
}


/*Task17*/
void Kopeyki()
{
	int a = 0;
	std::cout << "17) Enter a number from 1 to 99: ";
	std::cin >> a;

	int n = a % 10; // берём остаток от 10, чтобы рассмотреть только последнюю цифру введенного числа

	if (a >= 1 && a <= 99) // проверка на то, что введенное число меньше 99
	{
		if (a >= 11 && a <= 14)  // цифры исключения, где окончание будет ЕК
		{
			std::cout << "У вас " << a << " копеек." << std::endl;
		}
		else if (n == 1) // при 1 окончание КА
		{
			std::cout << "У вас " << a << " копейка." << std::endl;
		}

		else if (n == 2 || n == 3 || n == 4) // при 2, 3, 4 окончание ЙКИ
		{
			std::cout << "У вас " << a << " копейки." << std::endl;
		}

		else if (n == 5 || n == 6 || n == 7 || n == 8 || n == 9 || n == 0) // при 0, 5, 6, 7, 8 и 9 окончание ЕК
		{
			std::cout << "У вас " << a << " копеек." << std::endl;
		}
	}

	else
		std::cout << "Число должно быть от 1 до 99!" << std::endl; // вывод, если ввели число не от 1 до 99
}


/*Task18*/
void Palindrom()
{
	int a = 0;
	std::cout << "18) Enter a 4-digit number: ";
	std::cin >> a;

	int n1, n2, n3, n4;
	if (a > 999 && a < 10000) // проверка, что число четырёхзначное
	{
		n4 = a % 10; // последняя цифра
		n3 = a / 10 % 10; // предпоследняя цифра
		n2 = a / 100 % 10; // вторая цифра
		n1 = a / 1000; // первая цифра
		if (n4 == n1 && n2 == n3) // у палиндромов (первая и последняя) и (вторая и третья) попарно равны
		{
			std::cout << "The number " << a << " is a palindrome!" << std::endl; // число - палиндром
		}
		else
			std::cout << "The number " << a << " is not a palindrome." << std::endl; // число - не палиндром
	}
	else 
		std::cout << "The number should have 4 digits!" << std::endl; // вывод, если число не 4-значное
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

	if (a >= 100 && a <= 999) // провернка на то, что число трёхзначное
	{
		int m = 0;
		m = (a % 10) * (a / 10 % 10) * (a / 100 % 10);  // произведение последнего, второго и первого чисел (смотрим с помощью остатков и убираем то число, что уже умножили)

		int sum = 0;
		sum = (a % 10) + (a / 10 % 10) + (a / 100 % 10); // сумма последнего, второго и первого чисел (смотрим с помощью остатков и убираем то число, что уже умножили)

		if (m > b) // проверка на то, больше ли произведение числа b
		{
			std::cout << "The product of numbers is greater than a number " << b << std::endl; // больше
		}
		else
			std::cout << "The product of numbers is not greater than a number " << b << std::endl; // не больше

		if (sum % 7 == 0) // если сумма делится без остатка на 7
		{
			std::cout << "The sum of this number is divisible by 7!" << std::endl; // делится
		}
		else
			std::cout << "The sum of this number is not divisible by 7!" << std::endl; // не делится
	}
	else
		std::cout << "The number " << a << " should have 3 digits!" << std::endl; // вывод, если число не 3-значное
}




/*Task20*/
void rectangle()
{
	// инициализация переменных
	double a;
	double b;
	double c;
	double d;
	std::cout << "20) Enter 4 digits: ";
	std::cin >> a >> b >> c >> d;

	if ((a < c && b < d) || (a < d && b < c)) // нужно чтобы стороны первого прямоугольника были меньше второго; считаю, что пеместится - это значит должен оказаться чётко внутри, равные не считаются
	{
		std::cout << "A rectangle with sides " << a << " and " << b << " can be placed in a rectangle with sides " << c << " and " << d << std::endl; // вывод, если влезет
	}
	else
	{
		std::cout << "A rectangle with sides " << a << " and " << b << " cannot be placed in a rectangle with sides " << c << " and " << d << std::endl; // вывод, если не влезет
	}

}


/*Task21*/
void size()
{
	// использую оператор sizeof, который возвращает размер типа данных в байтах
	std::cout << "21) Main data types: " << std::endl;
	std::cout << "Size of the int: " << sizeof(int) << " bytes" << std::endl;
	std::cout << "Size of the double: " << sizeof(double) << " bytes" << std::endl;
	std::cout << "Size of the float: " << sizeof(float) << " bytes" << std::endl;
	std::cout << "Size of the char: " << sizeof(char) << " bytes" << std::endl;
	std::cout << "Size of the bool: " << sizeof(bool) << " bytes" << std::endl;
}
//вывод: чем больше значений может принимать переменная этого типа, тем больше нужно памяти для хранения переменных этого типа


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