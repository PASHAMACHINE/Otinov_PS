#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;


	//������ 1. ���������� ������ N ���������
	
	std::cout << "������ 1. \n����������� ������:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (20+1 - 10) + 10;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; //������ ������� �� ��������� ������ � ������� � �������� ������ ������ ������
	std::cout << "������� ���������� ��������� ��� ���������� ";
	std::cin >> n;
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);

	//������� ����������
	/*std::sort(arr1, arr1 + n);
	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++) {
		std::cout << arr1[i] << ' ';
	}*/

	std::cout << "\n\n";

	//������ 2. ����������� � ������
	std::cout << "������ 2. ������: \n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 + 1 + 30) - 30;
	}

	std::cout << "������� ����� -> ";
	std::cin >> n;
	int counter = 0;
	int sum = 0;

	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "�����. = " <<
		double(sum)/size2 << "\n���-�� �����, ��������� ������� = " <<
		counter << "\n\n";
	std::cout << "���-�� �����, ��������� ������� = " <<
		counter << std::endl;

	for (int i = 0; i < size2; i++) {
			std::cout << arr2[i] << ' ';
		}

	//������ 3. ��������� � ��������

	std::cout << "������ 3. \n������� ������ ��������� -> ";
	std::cin >> n;
	std::cout << "������� ����� ��������� -> ";
	std::cin >> m;

	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100;
		std::cout << i << ". " << arr3[i] <<
			(arr3[i] >= n && arr3[i] <= m ? '!' : ' ') <<
			std::endl; 
	}





	return 0;
}