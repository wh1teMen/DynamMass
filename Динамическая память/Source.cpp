#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
//����� �������
template <typename T> void showArr(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++){
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
//���������� ������� ���������� ������� �� min �� max
template <typename T> void fillArr(T arr[],int length,int min=0, int max=100) {
	for (int i = 0; i < length; i++){
		arr[i] = rand() % (max - min) + min;

	}

}
//������ 1.����������� ������ ������� �� n
template <typename T> T*addEl(T arr[],unsigned int &length,  int n) { //* ���������� ��������� �������
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

//������ 2. ����������� ������� �������
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
	
	/*int* pn = new int; //����������� 4(int) ����� � ����������� ������.
	*pn = 10;
	cout << "pn = " <<pn<<" "<< * pn << endl;
	delete pn;//�������� pn
	//���������� ����� nullptr
	pn = nullptr;
	if (pn != nullptr)//����������� ������ � ������ ���� ����� ����� nullptr(����������� �����)
		cout << pn << " - " << *pn << endl;*/
	//unsigned int n; //���� ����� ������� ������ unsigned (�� ����� ���� ������������)
	//const int L = 5;
	//int arr[L];
	//������������ ������
	/*cout << "������� ����� �������: ";
	cin >> n;
	int* dArr = new int[n];
	for (int i = 0; i < n; i++)	{
		dArr[i] = i + 1;
	}
	showArr(dArr, n);
	delete [] dArr;
	dArr = nullptr;
	dArr = new int[n + 1];*/
	
	/*cout << "������1\n������� ����� �������: ";
	unsigned int size1;
	cin >> size1;
	int* z1 = new int[size1];
	fillArr(z1, size1, 10, 31);
	cout << "����������� ������: \n";
	showArr(z1, size1);
	z1 = addEl(z1, size1, 2);
	cout << "�������� ������\n";
	showArr(z1, size1);
	delete[]z1;*/

	cout << "������2\n������� ����� �������: ";
	unsigned int size2;
	cin >> size2;
	int* z2 = new int[size2];
	fillArr(z2, size2, 10, 52);
	cout << "����������� ������: \n";
	showArr(z2, size2);
	z2 = delEl(z2, size2, 3);
	cout << "�������� ������\n";
	showArr(z2, size2);
	


	

	system("pause>nul");
	return 0;
}
//������ 2. ����������� ������� �������
