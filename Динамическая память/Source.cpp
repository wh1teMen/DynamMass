#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
//Вывод массива
template <typename T> void showArr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++){
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
//Заполнение массива случайными числами от min до max
template <typename T> void fillArr(T arr[],int length,int min=0, int max=100) {
	for (int i = 0; i < length; i++){
		arr[i] = rand() % (max - min) + min;

	}

}
//Задача 1.Увеличивает размер массива на n
template <typename T> T*addEl(T arr[],unsigned int &length,  int n) { //* возвращает указатель массива
	if (n <=0)
		return arr;
	T* tmp = new T[length];
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = new T[length + n];
	length += n;
	for (int i = 0; i < length - n; i++)
		arr[i] = tmp[i];
	delete[]tmp;
	return arr;

		

}

//Задача 2. Уменеьшение размера массива
template <typename T> T* delEl(T arr[], unsigned int& length, int n) {
	if (n <= 0)
		return arr;
	length -= n;
	T* tmp = new T[length];
		for (int i = 0; i <length; i++) 
			tmp[i] = arr[i];
	delete[]arr;
	arr = new T[length];
	for (int i = 0; i < length; i++)
		arr[i] = tmp[i];
	delete[]tmp;
	return arr;
}

int main() {
	setlocale(LC_ALL, "ru");
	
	/*int* pn = new int; //резервирует 4(int) байта в оперативной памяти.
	*pn = 10;
	cout << "pn = " <<pn<<" "<< * pn << endl;
	delete pn;//удаление pn
	//нетральный адрес nullptr
	pn = nullptr;
	if (pn != nullptr)//выполняется только в случае если адрес равен nullptr(нейтральный адрес)
		cout << pn << " - " << *pn << endl;*/
	//unsigned int n; //если длина массива всегда unsigned (не может быть отрицательно)
	//const int L = 5;
	//int arr[L];
	//Динамический массив
	/*cout << "Введите длину массива: ";
	cin >> n;
	int* dArr = new int[n];
	for (int i = 0; i < n; i++)	{
		dArr[i] = i + 1;
	}
	showArr(dArr, n);
	delete [] dArr;
	dArr = nullptr;
	dArr = new int[n + 1];*/
	
	/*cout << "Задача1\nВведите длину массива: ";
	unsigned int size1;
	cin >> size1;
	int* z1 = new int[size1];
	fillArr(z1, size1, 10, 31);
	cout << "Изначальный массив: \n";
	showArr(z1, size1);
	z1 = addEl(z1, size1, 2);
	cout << "Итоговый массив\n";
	showArr(z1, size1);
	delete[]z1;*/

	cout << "Задача2\nВведите длину массива: ";
	unsigned int size2;
	cin >> size2;
	int* z2 = new int[size2];
	fillArr(z2, size2, 10, 52);
	cout << "Изначальный массив: \n";
	showArr(z2, size2);
	z2 = delEl(z2, size2, 3);
	cout << "Итоговый массив\n";
	showArr(z2, size2);
	


	

	system("pause>nul");
	return 0;
}
//Задача 2. Уменеьшение размера массива
