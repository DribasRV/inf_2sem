﻿// ProblemGrasshoperMathematician.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Кузнечик-математик
#include <iostream>
#include <vector>

const int32_t MOD = 937;

int64_t norm(int64_t d, int64_t MOD)
{
	return ((d % MOD) + MOD) % MOD;
}

int64_t Madd(int64_t a, int64_t b, int64_t MOD)
{
	return norm(norm(a, MOD) + norm(b, MOD), MOD);
}

int main()
{
	size_t n;
	std::cin >> n;
	std::vector<int32_t> a(n);
	for (auto& i : a) {
		std::cin >> i;
		if (i <= 0)
			std::cout << "inf\n";
	}

	std::vector<int32_t> sp(n, 0);
	sp[0] = 1;
	if (a[0] < n && a[0] > 1)
		sp[a[0]] = Madd(sp[a[0]], sp[0], MOD);
	for (size_t i = 1; i < n; ++i) {
		sp[i] = Madd(sp[i], sp[i - 1], MOD);
		if (a[i] < n - i && a[i] > 1)
			sp[i + a[i]] = Madd(sp[i + a[i]], sp[i], MOD);
	}

	std::cout << sp[n - 1] << '\n';
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
