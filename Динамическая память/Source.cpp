#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
//¬ывод массива
template <typename T> void showArr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++){
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
//«аполнение массива случайными числами от min до max
template <typename T> void fillArr(T arr[],int length,int min=0, int max=100) {
	for (int i = 0; i < length; i++){
		arr[i] = rand() % (max - min) + min;

	}

}
//«адача 1.”величивает размер массива на n
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

int main() {
	setlocale(LC_ALL, "ru");
	
	/*int* pn = new int; //резервирует 4(int) байта в оперативной пам€ти.
	*pn = 10;
	cout << "pn = " <<pn<<" "<< * pn << endl;
	delete pn;//удаление pn
	//нетральный адрес nullptr
	pn = nullptr;
	if (pn != nullptr)//выполн€етс€ только в случае если адрес равен nullptr(нейтральный адрес)
		cout << pn << " - " << *pn << endl;*/
	//unsigned int n; //если длина массива всегда unsigned (не может быть отрицательно)
	//const int L = 5;
	//int arr[L];
	//ƒинамический массив
	/*cout << "¬ведите длину массива: ";
	cin >> n;
	int* dArr = new int[n];
	for (int i = 0; i < n; i++)	{
		dArr[i] = i + 1;
	}
	showArr(dArr, n);
	delete [] dArr;
	dArr = nullptr;
	dArr = new int[n + 1];*/
	
	cout << "«адача1\n¬ведите длину массива: ";
	unsigned int size1;
	cin >> size1;
	int* z1 = new int[size1];
	fillArr(z1, size1, 10, 31);
	cout << "»значальный массив: \n";
	showArr(z1, size1);
	z1 = addEl(z1, size1, 2);
	cout << "»тоговый массив\n";
	showArr(z1, size1);


	

	system("pause>nul");
	return 0;
}