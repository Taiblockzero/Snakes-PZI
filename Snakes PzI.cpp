#include <iostream>
using namespace std;

int main()
{

	int N, M, K;
	cin >> N >> M >> K;

	char** gameboard;
	gameboard = new char*[N];
	for (int i = 0; i < N; ++i)
		gameboard[i] = new char[M];

	
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> gameboard[i][j];


	/*for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
			cout << gameboard[i][j];
		cout << endl;
	}*/










	




	for (int i = 0; i < N; ++i)
		delete[] gameboard[i];
	delete[] gameboard;


	return 0;
}