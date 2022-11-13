#include <iostream>
#include <windows.h>
#include <math.h>
#include <locale.h>
#define PI   3.141592

using namespace std;
void menu();
void Suma_De_Matrices();
void Inverso_Aditivo_Matrices();
void Multiplicacion_Matrices();
void Matriz_Inversa();
void Traslacion();
void Escalacion();
void Rotacion_X();
void Rotacion_Y();
void Rotacion_Z();
void Matriz_Compuesta();
void Rotacion_sobre_un_vector();
void Bresenham_Lineas();
void Bresenham_Circulos();
void Bresenham_Circulos_Fuera();
void Bresenham_Elipse();
void Bresenham_Elipse_Fuera();
void Cuaterniones();
int matriz[10][10], fila, columna, matriz2[10][10], opcion, decision = 0, op, matrizR[10][10], fila2, columna2;
double matriz3[10][10], matrizRI[10][10], FyCMI, aux, pivote;
double matrizT[4][4], matrizE[4][4], matrizRot[4][4], matrizRotY[4][4], matrizRotZ[4][4], acciones[10];
double AccionesRot[10][10], AccionesRotY[10][10], AccionesRotZ[10][10], matrizR2[4][4], matrizR3[4][4], matrizTT[4][4];
double matrizRXI[4][4], matrizRYI[4][4], matrizR4[4][4], matrizR5[4][4], matrizR6[4][4], matrizR7[4][4];
COORD coord = { 0, 0 };
void gotoxy(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	  menu();

}
void menu()
{
	int seleccion;
	do   //se usa para poder regresar al menu 
	{


		cout << "******CALCULADORA DE MATRICES******" << endl;
		cout << "Ingrese 1 para Sumar" << endl;
		cout << "Ingrese 2 para Inverso aditivo" << endl;
		cout << "Ingrese 3 para Multiplicar" << endl;
		cout << "Ingrese 4 para Matriz inversa" << endl;
		cout << "Ingrese 5 para Matriz Compuesta" << endl;
		cout << "Ingrese 6 para Rotar sobre un vector" << endl;
		cout << "Ingrese 7 para Trazado de curvas" << endl;
		cout << "Ingrese 8 para cuaterniones" << endl;
		cout << "Ingrese 9 para salir" << endl;
		cin >> opcion;



		switch (opcion) //se le da escoger al usuario las opciones
		{
		case 1:
			Suma_De_Matrices();
			return menu();
			break;

		case 2:
			Inverso_Aditivo_Matrices();
			return menu();
			break;

		case 3:
			Multiplicacion_Matrices();
			return menu();
			break;

		case 4:
			Matriz_Inversa();
			return menu();
			break;

		case 5:
			Matriz_Compuesta();
			return menu();
			break;

		case 6:
			Rotacion_sobre_un_vector();
			return menu();
			break;
		case 7:
			cout << "Seleccione una de las opciones" << endl;
			cout << "1- Bresenham_Lineas" << endl;
			cout << "2- Bresenham_Circulos" << endl;
			cout << "3- Bresenham_Circulos_Fuera_Del_Origen" << endl;
			cout << "4- Bresenham_Elipse" << endl;
			cout << "5- Bresenham_Elipse_Fuera_Del_Origen" << endl;
			cin >> seleccion;

			switch (seleccion)
			{
			case 1:
				Bresenham_Lineas();
				break;
			case 2:
				Bresenham_Circulos();
				break;
			case 3:
				Bresenham_Circulos_Fuera();
				break;
			case 4:
				Bresenham_Elipse();
				break;
			case 5:
				Bresenham_Elipse_Fuera();
				break;
			}
			return menu();
			break;
		case 8:
			Cuaterniones();
			return menu();
			break;
		default:
			cout << "OPCION INVALIDA" << endl;

		}
	} while (decision == 1); //mientras el usuario presione 1 lo regresara al menu, si no se saldra y se le mostrara un mensaje
	cout << "Tenga un buen dia";
}

void Suma_De_Matrices()
{
	cout << "***SUMA DE MATRICES***" << endl;
	cout << "Ingrese numero de filas" << endl;
	cin >> fila;
	cout << "Ingrese numero de columnas" << endl;
	cin >> columna;

	fila = fila + 1;
	columna = columna + 1;

	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << "Digite los numeros que componen su matriz  [" << i << "] [" << j << "]: ";
			cin >> matriz[i][j];
		}

	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << "Digite los numeros que componen su matriz 2 [" << i << "] [" << j << "]: ";
			cin >> matriz2[i][j];
		}

	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << matriz2[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			matrizR[i][j] = matriz[i][j] + matriz2[i][j];
		}

	}
	cout << "Su resultado es: \n";
	for (int i = 1; i < fila; i++)
	{

		for (int j = 1; j < columna; j++)
		{

			cout << matrizR[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
}
void Inverso_Aditivo_Matrices()
{
	cout << "***INVERSO ADITIVO DE MATRICES***" << endl;
	cout << "Ingrese numero de filas" << endl;
	cin >> fila;
	cout << "Ingrese numero de columnas" << endl;
	cin >> columna;

	fila = fila + 1;
	columna = columna + 1;

	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << "Digite los numeros que componen su matriz  [" << i << "] [" << j << "]: ";
			cin >> matriz[i][j];
		}

	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << "Digite los numeros que componen su matriz 2 [" << i << "] [" << j << "]: ";
			cin >> matriz2[i][j];
		}

	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			cout << matriz2[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i < fila; i++)
	{
		for (int j = 1; j < columna; j++)
		{
			matrizR[i][j] = matriz[i][j] - matriz2[i][j];
		}

	}
	cout << "Su resultado es: \n";
	for (int i = 1; i < fila; i++)
	{

		for (int j = 1; j < columna; j++)
		{

			cout << matrizR[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
}
void Multiplicacion_Matrices()
{

	cout << "***SUMA DE MATRICES***" << endl;
	cout << "Ingrese numero de filas Matriz 1" << endl;
	cin >> fila;
	cout << "Ingrese numero de columnas Matriz 1" << endl;
	cin >> columna;
	cout << "Ingrese numero de filas Matriz 2" << endl;
	cin >> fila2;
	cout << "Ingrese numero de columnas Matriz 2" << endl;
	cin >> columna2;

	fila = fila + 1;
	columna = columna + 1;
	fila2 = fila2 + 1;
	columna2 = columna2 + 1;

	if (columna == fila2)
	{
		for (int i = 1; i < fila; i++)
		{
			for (int j = 1; j < columna; j++)
			{
				cout << "Digite los numeros que componen su matriz  [" << i << "] [" << j << "]: ";
				cin >> matriz[i][j];
			}

		}
		for (int i = 1; i < fila; i++)
		{
			for (int j = 1; j < columna; j++)
			{
				cout << matriz[i][j] << " ";
			}
			cout << "\n";
		}
		for (int i = 1; i < fila2; i++)
		{
			for (int j = 1; j < columna2; j++)
			{
				cout << "Digite los numeros que componen su matriz 2  [" << i << "] [" << j << "]: ";
				cin >> matriz2[i][j];
			}

		}
		for (int i = 1; i < fila2; i++)
		{
			for (int j = 1; j < columna2; j++)
			{
				cout << matriz2[i][j] << " ";
			}
			cout << "\n";
		}

		for (int i = 1; i < fila; i++)
		{
			for (int j = 1; j < columna2; j++)
			{
				matrizR[i][j] = 0;
				for (int k = 1; k < columna; k++)
				{
					matrizR[i][j] += matriz[i][k] * matriz2[k][j];
				}
			}
		
		}
		cout << "Su resultado es: \n";
		for (int i = 1; i < fila; i++)
		{

			for (int j = 1; j < columna2; j++)
			{

				cout << matrizR[i][j] << " ";
			}
			cout << "\n";
		}

	
	}
	else
	{
		cout << "NO SE PUEDE REALIZAR MULTIPLICACION" << endl;
	}
	
	system("pause");


}
void Matriz_Inversa()
{
	cout << "Ingrese numero de filas y columnas de su matriz" << endl;
	cin >> FyCMI;
	FyCMI = FyCMI + 1;
	system ("cls");
	for (int i = 1; i < FyCMI; i++)
	{
		for (int j = 1; j < FyCMI; j++)
		{
			gotoxy(j * 5 , i +	 3);
			cin >> matriz3[i][j];
			matrizRI[i][j] = 0;
			if (i == j)
			{
				matrizRI[i][j] = 1;
			}
		}

	}

	for (int i = 1; i < FyCMI; i++)
	{
		pivote = matriz3[i][i];
		for (int k = 1; k < FyCMI; k++)
		{
			matriz3[i][k] = matriz3[i][k] / pivote;
			matrizRI[i][k] = matrizRI[i][k] / pivote;

		}

		for (int j = 1; j < FyCMI; j++)
		{
			if (i != j)
			{
				aux = matriz3[j][i];
				for (int k = 0; k < FyCMI; k++)
				{
					matriz3[j][k] = matriz3[j][k] - aux * matriz3[i][k];
					matrizRI[j][k] = matrizRI[j][k] - aux * matrizRI[i][k];
				}
			}

		}
	}



	for (int i = 1; i < FyCMI; i++)
	{
		for (int j = 1; j < FyCMI; j++)
		{
		
			gotoxy(j * 5, i + 10);
			cout << matriz3[i][j];
			gotoxy(50 + j * 10, i + 10);
			cout << matrizRI[i][j];
			
			
		}

	}
	cout << "\n";
	cout << "\n";

}
void Traslacion()
{
	int x, y, z;
	cout << "Ingrese coordenada en X" << endl;
	cin >> x;
	cout << "Ingrese coordenada en Y" << endl;
	cin >> y;
	cout << "Ingrese coordenada en Z" << endl;
	cin >> z;
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (i == j)
			{
				matrizT[i][j] = 1;

			}
			else
			{
				if (matrizT[i][j] == matrizT[1][4])
				{
					matrizT[1][4] = x;

				}
				if (matrizT[i][j] == matrizT[2][4])
				{
					matrizT[2][4] = y;

				}
				if (matrizT[i][j] == matrizT[3][4])
				{
					matrizT[3][4] = z;

				}
			}
			
			
		}
		

	}

	for (int i = 1; i < 5; i++)
	{

		for (int j = 1; j < 5; j++)
		{
			
			cout << " " << matrizT[i][j];
			
		}
		cout << "\n";
	}

}
void Escalacion()
{
	int x, y, z;
	cout << "Ingrese coordenada en X" << endl;
	cin >> x;
	cout << "Ingrese coordenada en Y" << endl;
	cin >> y;
	cout << "Ingrese coordenada en Z" << endl;
	cin >> z;
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (i == j)
			{
				matrizE[1][1] = x;
				matrizE[2][2] = y;
				matrizE[3][3] = z;
				matrizE[4][4] = 1;
			}
		}
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{

			cout << " " << matrizE[i][j];

		}
		cout << "\n";
	}



}
void Rotacion_X()
{
	float seno, coseno, rad, angl;
	char eje;

	cout << "Ingrese el angulo" << endl;
	cin >> angl;
	rad = (angl * PI) / 180;
	seno = sin(rad);
	coseno = cos(rad);
	
	for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRot[i][j] = 1;
					if (matrizRot[i][j] == matrizRot[2][2])
					{
						matrizRot[2][2] = coseno;

					}
					if (matrizRot[i][j] == matrizRot[3][3])
					{
						matrizRot[3][3] = coseno;
					}
				}
				else
				{
					
					if (matrizRot[i][j] == matrizRot[2][3])
					{
						matrizRot[2][3] = -1 * seno;
					}
					if (matrizRot[i][j] == matrizRot[3][2])
					{
						matrizRot[3][2] = seno;
					}
					
				}
			}
		}
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRot[i][j]<<" ";
			}
			cout << "\n";
		}
		
}
void Rotacion_Y()
{
	float seno, coseno, rad, angl;
	char eje;

	cout << "Ingrese el angulo" << endl;
	cin >> angl;
	rad = (angl * PI) / 180;
	seno = sin(rad);
	coseno = cos(rad);
	
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRotY[i][j] = 1;
					if (matrizRotY[i][j] == matrizRotY[1][1])
					{
						matrizRotY[1][1] = coseno;

					}
					if (matrizRotY[i][j] == matrizRotY[3][3])
					{
						matrizRotY[3][3] = coseno;
					}
				}
				else
				{

					if (matrizRotY[i][j] == matrizRotY[1][3])
					{
						matrizRotY[1][3] = seno;
					}
					if (matrizRotY[i][j] == matrizRotY[3][1])
					{
						matrizRotY[3][1] = -1 * seno;
					}

				}
			}
		}
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRotY[i][j] << " ";
			}
			cout << "\n";
		}
	
}
void Rotacion_Z()
{
	float seno, coseno, rad, angl;
	char eje;

	cout << "Ingrese el angulo" << endl;
	cin >> angl;
	rad = (angl * PI) / 180;
	seno = sin(rad);
	coseno = cos(rad);
	
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRotZ[i][j] = 1;
					if (matrizRotZ[i][j] == matrizRotZ[1][1])
					{
					matrizRotZ[1][1] = coseno;

					}
					if (matrizRotZ[i][j] == matrizRotZ[2][2])
					{
						matrizRotZ[2][2] = coseno;
					}
				}
				else
				{

				if (matrizRotZ[i][j] == matrizRotZ[1][2])
				{
					matrizRotZ[1][2] = -1 * seno;
				}
				if (matrizRotZ[i][j] == matrizRotZ[2][1])
				{
					matrizRotZ[2][1] = seno;
				}

				}
			}
		}
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRotZ[i][j] << " ";
			}
			cout << "\n";
		}

}
void Matriz_Compuesta()
{
	setlocale(LC_ALL, "spanish");
	int op = 0, op2 = 0, op3 = 0, op4 = 0, acciones[7] = {}, rotEJE[7] = {}, pts;
	float escal[7][4] = {}, MatEscal[4][4] = {}, rotANG[7] = {}, MatRot[4][4] = {}, tras[7][4] = {}, puntosPRP[8][2], Zprp, puntosTPRP[8][2];
	float MatComp[4][4] = {}, mult, seno, coseno, tangente, rad, MatTras[4][4] = {}, puntos[8][4] = {}, MatAux[4][4] = {}, puntosT[8][4] = {};

	cout << "\t MATRIZ COMPUESTA" << endl;
	cout << "¿Cuántas acciones desea realizar? (Maximo 7)" << endl;
	cin >> op2;



	//Matriz Inicial y Auxiliar
	for (int f = 0; f < 4; f++) {
		for (int c = 0; c < 4; c++) {
			if (f == c) {
				MatAux[f][c] = 1;
			}
			else {
				MatAux[f][c] = 0;
			}
		}
	}

	for (int f = 0; f < 4; f++) {
		for (int c = 0; c < 4; c++) {
			if (f == c) {
				MatComp[f][c] = 1;
			}
			else {
				MatComp[f][c] = 0;
			}
		}
	}

	if (op2 > 7) {
		cout << "Ingrese una cantidad válida" << endl;
		system("pause");
		system("cls");
	}
	else {
		//Registro de acciones
		for (int i = 0; i < op2; i++) {
			cout << "Ingrese la accion #" << i + 1 << endl;
			cout << "1)Escalamiento" << endl << "2)Rotación" << endl << "3)Traslación" << endl;
			cin >> op3;
			//Escalamiento
			if (op3 == 1) {
				acciones[i] = 1;
				cout << "Ingrese los valores de escalamiento" << endl;
				cout << "Sx: ";
				cin >> escal[i][0];
				cout << endl << "Sy: ";
				cin >> escal[i][1];
				cout << endl << "Sz: ";
				cin >> escal[i][2];
				escal[i][3] = 1;
			}
			//Rotación
			if (op3 == 2) {
				acciones[i] = 2;
				cout << "Ingrese el eje de rotación" << endl;
				cout << "1)Rx" << endl << "2)Ry" << endl << "3)Rz" << endl;
				cin >> op4;
				switch (op4) {
				case 1: {
					cout << "\tRotación en X" << endl;
					cout << "Ingrese el ángulo de rotación: ";
					cin >> rotANG[i];
					rotEJE[i] = 1;
				}break;
				case 2: {
					cout << "\tRotación en Y" << endl;
					cout << "Ingrese el ángulo de rotación: ";
					cin >> rotANG[i];
					rotEJE[i] = 2;
				}break;
				case 3: {
					cout << "\tRotación en Z" << endl;
					cout << "Ingrese el ángulo de rotación: ";
					cin >> rotANG[i];
					rotEJE[i] = 3;
				}break;
				}
			}
			//Traslación
			if (op3 == 3) {
				acciones[i] = 3;
				cout << "Ingrese los valores de Traslación" << endl;
				cout << "Tx: ";
				cin >> tras[i][0];
				cout << "Ty: ";
				cin >> tras[i][1];
				cout << "Tz: ";
				cin >> tras[i][2];
				tras[i][3] = 1;
			}
		}

		//Procedimiento
		for (int i = op2; i >= 0; i--) {
			//Escalamiento
			if (acciones[i] == 1) {
				//Matriz Escalacion
				for (int f = 0; f < 4; f++) {
					for (int c = 0; c < 4; c++) {
						if (f == c) {
							MatEscal[f][c] = escal[i][f];
						}
						else {
							MatEscal[f][c] = 0;
						}
					}
				}

				//Multiplicacion
				for (int f = 0; f < 4; f++) {
					for (int c = 0; c < 4; c++) {
						mult = (MatComp[f][0] * MatEscal[0][c]) + (MatComp[f][1] * MatEscal[1][c]) + (MatComp[f][2] * MatEscal[2][c]) + (MatComp[f][3] * MatEscal[3][c]);
						if (MatComp[f][c] = 1) {
							MatComp[f][c] = mult;
						}
						if (MatComp[f][c] = 0) {
							MatComp[f][c] = mult;
						}
						else {
							MatComp[f][c] = MatComp[f][c] + mult;
						}
					}
				}
			}

			//Rotación
			if (acciones[i] == 2) {
				rad = rotANG[i] * PI / 180;
				seno = sin(rad);
				coseno = cos(rad);
				tangente = tan(rad);

				for (int f = 0; f < 4; f++) {
					for (int c = 0; c < 4; c++) {
						if (f == c) {
							MatAux[f][c] = MatComp[f][c];
						}
						else {
							MatAux[f][c] = MatComp[f][c];
						}
					}
				}

				//Matriz Rotación en X
				if (rotEJE[i] == 1) {
					MatRot[0][0] = 1;
					MatRot[0][1] = 0;
					MatRot[0][2] = 0;
					MatRot[0][3] = 0;
					MatRot[1][0] = 0;
					MatRot[1][1] = coseno;
					MatRot[1][2] = -seno;
					MatRot[1][3] = 0;
					MatRot[2][0] = 0;
					MatRot[2][1] = seno;
					MatRot[2][2] = coseno;
					MatRot[2][3] = 0;
					MatRot[3][0] = 0;
					MatRot[3][1] = 0;
					MatRot[3][2] = 0;
					MatRot[3][3] = 1;
				}

				//Matriz Rotación en Y
				if (rotEJE[i] == 2) {
					MatRot[0][0] = coseno;
					MatRot[0][1] = 0;
					MatRot[0][2] = seno;
					MatRot[0][3] = 0;
					MatRot[1][0] = 0;
					MatRot[1][1] = 1;
					MatRot[1][2] = 0;
					MatRot[1][3] = 0;
					MatRot[2][0] = -seno;
					MatRot[2][1] = 0;
					MatRot[2][2] = coseno;
					MatRot[2][3] = 0;
					MatRot[3][0] = 0;
					MatRot[3][1] = 0;
					MatRot[3][2] = 0;
					MatRot[3][3] = 1;
				}

				//Matriz Rotación en Z
				if (rotEJE[i] == 3) {
					MatRot[0][0] = coseno;
					MatRot[0][1] = -seno;
					MatRot[0][2] = 0;
					MatRot[0][3] = 0;
					MatRot[1][0] = seno;
					MatRot[1][1] = coseno;
					MatRot[1][2] = 0;
					MatRot[1][3] = 0;
					MatRot[2][0] = 0;
					MatRot[2][1] = 0;
					MatRot[2][2] = 1;
					MatRot[2][3] = 0;
					MatRot[3][0] = 0;
					MatRot[3][1] = 0;
					MatRot[3][2] = 0;
					MatRot[3][3] = 1;
				}

				//Multiplicacion
				for (int f = 0; f < 4; f++) {
					for (int c = 0; c < 4; c++) {
						mult = (MatAux[f][0] * MatRot[0][c]) + (MatAux[f][1] * MatRot[1][c]) + (MatAux[f][2] * MatRot[2][c]) + (MatAux[f][3] * MatRot[3][c]);
						if (MatComp[f][c] = 1) {
							MatComp[f][c] = mult;
						}
						if (MatComp[f][c] = 0) {
							MatComp[f][c] = mult;
						}
						else {
							MatComp[f][c] = MatComp[f][c] + mult;
						}
					}
				}
			}

			//Traslación
			if (acciones[i] == 3) {
				//Matriz Traslacion
				MatTras[0][0] = 1;
				MatTras[0][1] = 0;
				MatTras[0][2] = 0;
				MatTras[0][3] = tras[i][0];
				MatTras[1][0] = 0;
				MatTras[1][1] = 1;
				MatTras[1][2] = 0;
				MatTras[1][3] = tras[i][1];
				MatTras[2][0] = 0;
				MatTras[2][1] = 0;
				MatTras[2][2] = 1;
				MatTras[2][3] = tras[i][2];
				MatTras[3][0] = 0;
				MatTras[3][1] = 0;
				MatTras[3][2] = 0;
				MatTras[3][3] = 1;

				//Multiplicación
				for (int f = 0; f < 4; f++) {
					for (int c = 0; c < 4; c++) {
						mult = (MatComp[f][0] * MatTras[0][c]) + (MatComp[f][1] * MatTras[1][c]) + (MatComp[f][2] * MatTras[2][c]) + (MatComp[f][3] * MatTras[3][c]);
						if (MatComp[f][c] = 1) {
							MatComp[f][c] = mult;
						}
						if (MatComp[f][c] = 0) {
							MatComp[f][c] = mult;
						}
						else {
							MatComp[f][c] = MatComp[f][c] + mult;
						}
					}
				}
			}
		}

		//Imprimir Matriz Compuesta
		cout << "Matriz Compuesta: " << endl;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << MatComp[i][j] << " ";
			}
			cout << endl;
		}

		//Ingresar puntos
		cout << "¿Cuántos puntos va a modificar? (Máximo 8):" << endl;
		cin >> pts;
		for (int i = 0; i < pts; i++) {
			cout << "Ingrese la componente X del punto " << i + 1 << ":" << endl;
			cin >> puntos[i][0];
			cout << "Ingrese la componente Y del punto " << i + 1 << ":" << endl;
			cin >> puntos[i][1];
			cout << "Ingrese la componente Z del punto " << i + 1 << ":" << endl;
			cin >> puntos[i][2];
			puntos[i][3] = 1;
		}

		//Procesado puntos
		for (int i = 0; i < pts; i++) {
			//Multiplicación
			for (int f = 0; f < 3; f++) {
				mult = (MatComp[f][0] * puntos[i][0]) + (MatComp[f][1] * puntos[i][1]) + (MatComp[f][2] * puntos[i][2]) + (MatComp[f][3] * puntos[i][3]);
				puntosT[i][f] = mult;
				puntosT[i][3] = 1;
			}
		}

		//Imprimir Puntos
		cout << "Puntos Procesados: " << endl;
		for (int i = 0; i < pts; i++) {
			for (int j = 0; j < 4; j++) {
				cout << puntosT[i][j] << " "<<endl;
			}
			cout << endl;
		}
	}

	//Perspectiva
	cout << "Perspectiva" << endl;
	cout << "Ingrese Z perspectiva: " << endl;
	cin >> Zprp;

	//Obtener X y Y prp
	for (int i = 0; i < pts; i++)
	{
		puntosPRP[i][0] = (puntos[i][0] * Zprp) / (Zprp - puntos[i][2]);
		puntosPRP[i][1] = (puntos[i][1] * Zprp) / (Zprp - puntos[i][2]);
	}
	for (int i = 0; i < pts; i++) {
		puntosTPRP[i][0] = (puntosT[i][0] * Zprp) / (Zprp - puntosT[i][2]);
		puntosTPRP[i][1] = (puntosT[i][1] * Zprp) / (Zprp - puntosT[i][2]);
	}

	//Imprimir puntos Perspectiva
	cout << "Puntos Perspectiva Originales" << endl;
	for (int i = 0; i < pts; i++)
	{
		for (int j = 0; j < 2; j++) {
			cout << puntosPRP[i][j] << ",";
		}
		cout << endl;
	}
	cout << "Puntos Perspectiva Transformados" << endl;
	for (int i = 0; i < pts; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << puntosTPRP[i][j] << ",";
		}
		cout << endl;
	}
	system("pause");





	
		
	
		


}
void Rotacion_sobre_un_vector()
{
	
	int x1, y1, z1, x2, y2, z2, angulo, vx,vy,vz,i,j,k;
	float a, b, c, d, raiz, alfa, beta, beta2, alfa2, radbet, radalf, rad, seno, coseno,seno2,coseno2, seno3, coseno3,seno4,coseno4,seno5,coseno5;
	float alfaMC, betaMC, tetaMC;
	cout << "Ingrese coordenada en X para P1V" << endl;
	cin >> x1;
	cout << "Ingrese coordenada en Y para P1V" << endl;
	cin >> y1;
	cout << "Ingrese coordenada en Z para P1V" << endl;
	cin >> z1;
	cout << "Ingrese coordenada en X para P2V" << endl;
	cin >> x2;
	cout << "Ingrese coordenada en Y para P2V" << endl;
	cin >> y2;
	cout << "Ingrese coordenada en Z para P2V" << endl;
	cin >> z2;
	cout << "Ingrese el angulo" << endl;
	cin >> angulo;

	vx = x2 - x1;
	vy = y2 - y1;
	vz = z2 - z1;
	if (vx==0 &&vy==0 || vx==0 && vz==0 || vy==0 && vz==0)
	{
		rad = (angulo * PI) / 180;
		seno = sin(rad);
		coseno = cos(rad);
		cout << "MC=T^-1(" << x1 << "," << y1 << "," << z1 << ")*Rx(" << angulo << ")*T(" << x1 * -1 << "," << y1 * -1 << "," << z1 * -1 << ")" << endl;
		system("pause");
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizT[i][j] = 1;

				}
				else
				{
					if (matrizT[i][j] == matrizT[1][4])
					{
						matrizT[1][4] = x1;

					}
					if (matrizT[i][j] == matrizT[2][4])
					{
						matrizT[2][4] = y1;

					}
					if (matrizT[i][j] == matrizT[3][4])
					{
						matrizT[3][4] = z1;

					}
				}


			}
		}
		
		
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRot[i][j] = 1;
					if (matrizRot[i][j] == matrizRot[2][2])
					{
						matrizRot[2][2] = coseno;

					}
					if (matrizRot[i][j] == matrizRot[3][3])
					{
						matrizRot[3][3] = coseno;
					}
				}
				else
				{

					if (matrizRot[i][j] == matrizRot[2][3])
					{
						matrizRot[2][3] = -1 * seno;
					}
					if (matrizRot[i][j] == matrizRot[3][2])
					{
						matrizRot[3][2] = seno;
					}

				}
			}
		}
		
	
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR2[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR2[i][j] += matrizT[i][k] * matrizRot[k][j];
				}
			}

		}
		
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizTT[i][j] = 1;

				}
				else
				{
					if (matrizTT[i][j] == matrizTT[1][4])
					{
						matrizTT[1][4] = x1*-1;

					}
					if (matrizTT[i][j] == matrizTT[2][4])
					{
						matrizTT[2][4] = y1*-1;

					}
					if (matrizTT[i][j] == matrizTT[3][4])
					{
						matrizTT[3][4] = z1*-1;

					}
				}


			}
		}
	


		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR3[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR3[i][j] += matrizR2[i][k] * matrizTT[k][j];
				}
			}

		}

		cout << "Su matriz compuesta es: \n";
		for (int i = 1; i < 5; i++)
		{

			for (int j = 1; j < 5; j++)
			{

				cout <<matrizR3[i][j] << "\t ";
			}
			cout << "\n";
		}

		
	}
	else
	{
		raiz = sqrt(pow(vx, 2) + pow(vy, 2) + pow(vz, 2));
		a = vx / raiz;
		b = vy / raiz;
		c = vz / raiz;
		d = sqrt(pow(b, 2) + pow(c, 2));
		alfa = acos(c / d);
		
		alfaMC = (alfa * 180) / PI;/*para la formula*/
		radalf = (alfaMC * PI) / 180;
		beta = asin(a / (sqrt(pow(a, 2) + pow(d, 2))));

		betaMC = (beta * 180) / PI;/*para la formula*/
		radbet = (betaMC * PI) / 180;
		beta2 = radbet * -1;
		alfa2 = radalf * -1;
		/*RZ*/
	
		rad = (angulo * PI) / 180;
	
		seno = sin(rad);
		coseno = cos(rad);
		/*cout << angulo<< endl;
		cout << seno << "," << coseno << endl;*/
		system("pause");
		/*RX inverso*/
		/*cout << alfaMC*-1 << endl;*/
		seno2 = sin(alfa2);
		coseno2 = cos(alfa2);
		/*cout << seno2 << endl;
		cout << coseno2 << endl;
		system("pause");*/
		/*RY INVERSO*/
		/*cout << betaMC*-1 << endl;*/
		seno3 = sin((beta2));
		coseno3 = cos((beta2));
		/*cout << seno3 << "," << coseno3 << endl;
		system("pause");*/
		/*RX*/
		/*cout << alfaMC << endl;*/
	
		seno4 = sin(radalf);
		coseno4 = cos(radalf);
		/*cout << seno4 << "," << coseno4 << endl;
		system("pause");*/
		/*RY*/
		/*cout << betaMC << endl;*/
		seno5 = sin(beta2*-1 );
		coseno5 = cos(beta2*-1 );
		/*cout << seno5 << "," << coseno5 << endl;*/
	
		/*system("pause");*/
		cout << "MC=T^-1(" << x1 << "," << y1 << "," << z1 << ")*Rx^-1(" <<alfaMC*-1 << ") *Ry^-1(" << betaMC * -1 << ")*Rz(" << angulo<< ")*Ry(" << betaMC << ")*Rx(" << alfaMC << ") T(" << x1 * -1 << "," << y1 * -1 << "," << z1 * -1 << ")" << endl;
		system("pause");
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizT[i][j] = 1;

				}
				else
				{
					if (matrizT[i][j] == matrizT[1][4])
					{
						matrizT[1][4] = x1;

					}
					if (matrizT[i][j] == matrizT[2][4])
					{
						matrizT[2][4] = y1;

					}
					if (matrizT[i][j] == matrizT[3][4])
					{
						matrizT[3][4] = z1;

					}
				}


			}
		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizT[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRot[i][j] = 1;
					if (matrizRot[i][j] == matrizRot[2][2])
					{
						matrizRot[2][2] = coseno2;

					}
					if (matrizRot[i][j] == matrizRot[3][3])
					{
						matrizRot[3][3] = coseno2;
					}
				}
				else
				{

					if (matrizRot[i][j] == matrizRot[2][3])
					{
						matrizRot[2][3] = -1 * seno2;
					}
					if (matrizRot[i][j] == matrizRot[3][2])
					{
						matrizRot[3][2] = seno2;
					}

				}
			}
		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRot[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR2[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR2[i][j] += matrizT[i][k] * matrizRot[k][j];
				}
			}

		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizR2[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRYI[i][j] = 1;
					if (matrizRYI[i][j] == matrizRYI[1][1])
					{
						matrizRYI[1][1] = coseno3;

					}
					if (matrizRYI[i][j] == matrizRYI[3][3])
					{
						matrizRYI[3][3] = coseno3;
					}
				}
				else
				{

					if (matrizRYI[i][j] == matrizRYI[1][3])
					{
						matrizRYI[1][3] = seno3;
					}
					if (matrizRYI[i][j] == matrizRYI[3][1])
					{
						matrizRYI[3][1] = seno3*-1;
					}

				}
			}
		}
		/*	for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRYI[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR3[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR3[i][j] += matrizR2[i][k] * matrizRYI[k][j];
				}
			}

		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizR3[i][j] << " ";
			}
			cout << "\n";
		}

		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRotZ[i][j] = 1;
					if (matrizRotZ[i][j] == matrizRotZ[1][1])
					{
						matrizRotZ[1][1] = coseno;

					}
					if (matrizRotZ[i][j] == matrizRotZ[2][2])
					{
						matrizRotZ[2][2] = coseno;
					}
				}
				else
				{

					if (matrizRotZ[i][j] == matrizRotZ[1][2])
					{
						matrizRotZ[1][2] = -1 * seno;
					}
					if (matrizRotZ[i][j] == matrizRotZ[2][1])
					{
						matrizRotZ[2][1] = seno;
					}

				}
			}
		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRotZ[i][j] << " ";
			}
			cout << "\n";
		}

		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR4[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR4[i][j] += matrizR3[i][k] * matrizRotZ[k][j];
				}
			}

		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizR4[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRotY[i][j] = 1;
					if (matrizRotY[i][j] == matrizRotY[1][1])
					{
						matrizRotY[1][1] = coseno5;

					}
					if (matrizRotY[i][j] == matrizRotY[3][3])
					{
						matrizRotY[3][3] = coseno5;
					}
				}
				else
				{

					if (matrizRotY[i][j] == matrizRotY[1][3])
					{
						matrizRotY[1][3] = seno5;
					}
					if (matrizRotY[i][j] == matrizRotY[3][1])
					{
						matrizRotY[3][1] = -1 * seno5;
					}

				}
			}
		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRotY[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR5[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR5[i][j] += matrizR4[i][k] * matrizRotY[k][j];
				}
			}

		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizR5[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizRXI[i][j] = 1;
					if (matrizRXI[i][j] == matrizRXI[2][2])
					{
						matrizRXI[2][2] = coseno4;

					}
					if (matrizRXI[i][j] == matrizRXI[3][3])
					{
						matrizRXI[3][3] = coseno4;
					}
				}
				else
				{

					if (matrizRXI[i][j] == matrizRXI[2][3])
					{
						matrizRXI[2][3] = -1 * seno4;
					}
					if (matrizRXI[i][j] == matrizRXI[3][2])
					{
						matrizRXI[3][2] = seno4;
					}

				}
			}
		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizRXI[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR6[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR6[i][j] += matrizR5[i][k] * matrizRXI[k][j];
				}
			}

		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizR6[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				if (i == j)
				{
					matrizTT[i][j] = 1;

				}
				else
				{
					if (matrizTT[i][j] == matrizTT[1][4])
					{
						matrizTT[1][4] = x1*-1;

					}
					if (matrizTT[i][j] == matrizTT[2][4])
					{
						matrizTT[2][4] = y1*-1;

					}
					if (matrizTT[i][j] == matrizTT[3][4])
					{
						matrizTT[3][4] = z1*-1;

					}
				}


			}
		}
		/*for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizTT[i][j] << " ";
			}
			cout << "\n";
		}
		system("pause");*/
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{
				matrizR7[i][j] = 0;
				for (int k = 1; k < 5; k++)
				{
					matrizR7[i][j] += matrizR6[i][k] * matrizTT[k][j];
				}
			}

		}
		cout << "Su matriz compuesta es: " << endl;
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j < 5; j++)
			{

				cout << " " << matrizR7[i][j] << " ";
			}
			cout << "\n";
		}

	}


}
void Bresenham_Lineas()
{
	
	float m, x0, y0, pk, pk1 = 0, x1, y1, dx, dy, i, j, x, y, rep;
	cout << "Ingrese coordenada en X para el primer punto" << endl;
	cin >> x0;
	cout << "Ingrese coordenada en Y el primer punto" << endl;
	cin >> y0;
	cout << "Ingrese coordenada en X para el segundo punto" << endl;
	cin >> x1;
	cout << "Ingrese coordenada en Y para el segundo punto" << endl;
	cin >> y1;
	dx = x1 - x0;
	dy = y1 - y0;
	pk = (2 * dy) - dx;
	rep = (dx - 1);
	x = x0;
	y = y0;
	m = (y1 - y0) / (x1 - x0);
	cout << m << endl;
	system("pause");
	if (m > 0 && m < 1)
	{
		cout << "Coordenadas:" << "\t" << "pk" << endl;
		cout << x << "," << y << "\t\t" << pk << endl;

		if (pk < 0)
		{
			x = x + 1;
			pk1 = pk + (2 * dy);
			cout << "Coordenadas:" << "\t" << "pk" << endl;
			cout << x << "," << y << "\t\t" << pk1 << endl;
			for (i = 0; i < rep; i++)
			{
				if (pk1 < 0)
				{
				
					
						x = x + 1;
						pk1 = pk1 + (2 * dy);
						cout << "Coordenadas:" << "\t" << "pk" << endl;
						cout << x << "," << y << "\t\t" << pk1 << endl;
				
				
				}
				else
				{
					
						x = x + 1;
						y = y + 1;
						pk1 = pk1 + (2 * dy) - (2 * dx);
						cout << "Coordenadas:" << "\t" << "pk" << endl;
						cout << x << "," << y << "\t\t" << pk1 << endl;

					
				}
			}
		}
		else
		{
			x = x + 1;
			y = y + 1;
			pk1 = pk + (2 * dy)-(2*dx);
			cout << "Coordenadas:" << "\t" << "pk" << endl;
			cout << x << "," << y << "\t\t" << pk1 << endl;
			for (i = 0; i < rep; i++)
			{
				if (pk1 < 0)
				{


					x = x + 1;
					pk1 = pk1 + (2 * dy);
					cout << "Coordenadas:" << "\t" << "pk" << endl;
					cout << x << "," << y << "\t\t" << pk1 << endl;


				}
				else
				{

					x = x + 1;
					y = y + 1;
					pk1 = pk1 + (2 * dy) - (2 * dx);
					cout << "Coordenadas:" << "\t" << "pk" << endl;
					cout << x << "," << y << "\t\t" << pk1 << endl;


				}
			}

		}
	}
	else
	{
		cout << "No se puede realizar" << endl;
	}
	

}
void Bresenham_Circulos()
{
	int r, pk, pk1 = 0, x = 0;
	cout << "Ingrese el radio" << endl;
	cin >> r;

	pk = (5 / 4) - r;
	cout << "Coordenadas: " << "\t\t\t" << "pk" << endl;
	cout << x << "," << r << "\t\t\t\t" << pk << endl;
	cout << "Coordenadas 2do cuadrante: " << endl;
	cout << x * -1 << "," << r << endl;
	cout << "Coordenadas 3er cuadrante: " << endl;
	cout << x * -1 << "," << r * -1 << endl;
	cout << "Coordenadas 4to cuadrante: " << endl;
	cout << x << "," << r * -1 << endl;


	if (pk < 0)
	{
		pk1 = pk + (2 * x+2)+1;
		x = x + 1;
		
		cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
		cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << x * -1 << "," << r << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << x * -1 << "," << r*-1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << x  << "," << r*-1 << endl;

		do
		{
			if (pk1 < 0)
			{


				pk1 = pk1 + (2 * x + 2) + 1;
				x = x + 1;
				cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
				cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;

			}
			else
			{
				pk1 = pk1 + (2 * x + 2) + 1-(2*r-2);
				x = x + 1;
				r = r - 1;


				cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
				cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;

			}
		} while (x < r);
	}
	else
	{
		pk1 = pk + (2 * x + 2) + 1 - (2 * r - 2);
		x = x + 1;
		r = r - 1;
		cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
		cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << x * -1 << "," << r << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << x * -1 << "," << r * -1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << x << "," << r * -1 << endl;
		do
		{
			if (pk1 < 0)
			{


				pk1 = pk1 + (2 * x + 2) + 1;
				x = x + 1;
				cout << "Coordenadas:" << "\t" << "pk" << endl;
				cout << x << "," << r << "\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;

			}
			else
			{
				pk1 = pk1 + (2 * x + 2) + 1 - (2 * r - 2);
				x = x + 1;
				r = r - 1;


				cout << "Coordenadas:" << "\t" << "pk" << endl;
				cout << x << "," << r << "\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;

			}
		} while (x < r);
	}

	

}
void Bresenham_Circulos_Fuera()
{
	int r, pk, pk1 = 0, x = 0, xc, yc;
	cout << "Ingrese el radio" << endl;
	cin >> r;
	cout << "Ingrese la coordenada en X" << endl;
	cin >> xc;
	cout << "Ingrese la coordenada en Y" << endl;
	cin >> yc;
	pk = (5 / 4) - r;

	cout << "Coordenadas: " << "\t\t\t" << "pk" << endl;
	cout << x << "," << r << "\t\t\t\t" << pk << endl;
	cout << "Coordenadas 2do cuadrante: " << endl;
	cout << x * -1 << "," << r << endl;
	cout << "Coordenadas 3er cuadrante: " << endl;
	cout << x * -1 << "," << r * -1 << endl;
	cout << "Coordenadas 4to cuadrante: " << endl;
	cout << x << "," << r * -1 << endl;
	cout << "----------------------------------------------------------------------------------------------------" << endl;
	cout << "Coordenadas fuera del origen" << endl;

	cout << xc + x << "," << yc + r << endl;
	cout << "Coordenadas 2do cuadrante: " << endl;
	cout << (xc + x) * -1 << "," << yc + r << endl;
	cout << "Coordenadas 3er cuadrante: " << endl;
	cout << (xc + x) * -1 << "," << (yc + r) * -1 << endl;
	cout << "Coordenadas 4to cuadrante: " << endl;
	cout << xc + x << "," << (yc + r) * -1 << endl;
	cout << "----------------------------------------------------------------------------------------------------" << endl;

	cout << "Coordenada volteada:" << endl;
	cout << r << "," << x << endl;
	cout << "Coordenadas 2do cuadrante: " << endl;
	cout << r << "," << x * -1 << endl;
	cout << "Coordenadas 3er cuadrante: " << endl;
	cout << r * -1 << "," << x * -1 << endl;
	cout << "Coordenadas 4to cuadrante: " << endl;
	cout << r * -1 << "," << x << endl;
	cout << "----------------------------------------------------------------------------------------------------" << endl;
	cout << "Coordenadas volteada fuera del origen" << endl;
	cout << xc + r << "," << yc + x << endl;
	cout << "Coordenada 2do cuadrante: " << endl;
	cout << (xc + r) * -1 << "," << yc + x << endl;
	cout << "Coordenada 3er cuadrante: " << endl;
	cout << (xc + r) * -1 << "," << (yc + x) * -1 << endl;
	cout << "Coordenada 4to cuadrante: " << endl;
	cout << xc + r << "," << (yc + x) * -1 << endl;
	cout << "----------------------------------------------------------------------------------------------------" << endl;
	system("pause");
	if (pk < 0)
	{
		pk1 = pk + (2 * x + 2) + 1;
		x = x + 1;

		cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
		cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << x * -1 << "," << r << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << x * -1 << "," << r * -1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << x << "," << r * -1 << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;
		cout << "Coordenadas fuera del origen" << endl;

		cout << xc + x << "," << yc + r << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << (xc + x) * -1 << "," << yc + r << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << (xc + x) * -1 << "," << (yc + r) * -1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << xc + x << "," << (yc + r) * -1 << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;

		cout << "Coordenada volteada:" << endl;
		cout << r << "," << x << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << r << "," << x * -1 << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << r * -1 << "," << x * -1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << r * -1 << "," << x << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;
		cout << "Coordenada volteada fuera del origen" << endl;

		cout << xc + r << "," << yc + x << endl;
		cout << "Coordenada 2do cuadrante: " << endl;
		cout << (xc + r) * -1 << "," << yc + x << endl;
		cout << "Coordenada 3er cuadrante: " << endl;
		cout << (xc + r) * -1 << "," << (yc + x) * -1 << endl;
		cout << "Coordenada 4to cuadrante: " << endl;
		cout << xc + r << "," << (yc + x) * -1 << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;
		system("pause");
		do
		{
			if (pk1 < 0)
			{


				pk1 = pk1 + (2 * x + 2) + 1;
				x = x + 1;

				cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
				cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenadas fuera del origen" << endl;

				cout << xc + x << "," << yc + r << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << yc + r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << (yc + r) * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << xc + x << "," << (yc + r) * -1 << endl;

				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenada volteada:" << endl;
				cout << r << "," << x << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << r << "," << x * -1 << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << r * -1 << "," << x * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << r * -1 << "," << x << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenadas volteadas fuera del origen" << endl;

				cout << xc + r << "," << yc + x << endl;
				cout << "Coordenada 2do cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << yc + x << endl;
				cout << "Coordenada 3er cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << (yc + x) * -1 << endl;
				cout << "Coordenada 4to cuadrante: " << endl;
				cout << xc + r << "," << (yc + x) * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				system("pause");
			}
			else
			{
				pk1 = pk1 + (2 * x + 2) + 1 - (2 * r - 2);
				x = x + 1;
				r = r - 1;


				cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
				cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenadas fuera del origen" << endl;

				cout << xc + x << "," << yc + r << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << yc + r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << (yc + r) * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << xc + x << "," << (yc + r) * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;

				cout << "Coordenada volteada:" << endl;
				cout << r << "," << x << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << r << "," << x * -1 << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << r * -1 << "," << x * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << r * -1 << "," << x << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;

				cout << "Coordenadas volteada fuera del origen" << endl;

				cout << xc + r << "," << yc + x << endl;
				cout << "Coordenada 2do cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << yc + x << endl;
				cout << "Coordenada 3er cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << (yc + x) * -1 << endl;
				cout << "Coordenada 4to cuadrante: " << endl;
				cout << xc + r << "," << (yc + x) * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				system("pause");
			}


		} while (x < r);
	
	}



	else
	{
		pk1 = pk + (2 * x + 2) + 1 - (2 * r - 2);
		x = x + 1;
		r = r - 1;

		cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
		cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << x * -1 << "," << r << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << x * -1 << "," << r * -1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << x << "," << r * -1 << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;
		cout << "Coordenadas fuera del origen" << endl;

		cout << xc + x << "," << yc + r << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << (xc + x) * -1 << "," << yc + r << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << (xc + x) * -1 << "," << (yc + r) * -1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << xc + x << "," << (yc + r) * -1 << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;

		cout << "Coordenada volteada:" << endl;
		cout << r << "," << x << endl;
		cout << "Coordenadas 2do cuadrante: " << endl;
		cout << r << "," << x * -1 << endl;
		cout << "Coordenadas 3er cuadrante: " << endl;
		cout << r * -1 << "," << x * -1 << endl;
		cout << "Coordenadas 4to cuadrante: " << endl;
		cout << r * -1 << "," << x << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;
		cout << "Coordenada volteada fuera del origen" << endl;

		cout << xc + r << "," << yc + x << endl;
		cout << "Coordenada 2do cuadrante: " << endl;
		cout << (xc + r) * -1 << "," << yc + x << endl;
		cout << "Coordenada 3er cuadrante: " << endl;
		cout << (xc + r) * -1 << "," << (yc + x) * -1 << endl;
		cout << "Coordenada 4to cuadrante: " << endl;
		cout << xc + r << "," << (yc + x) * -1 << endl;
		cout << "----------------------------------------------------------------------------------------------------" << endl;
		system("pause");
		do
		{
			if (pk1 < 0)
			{


				pk1 = pk1 + (2 * x + 2) + 1;
				x = x + 1;

				cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
				cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenadas fuera del origen" << endl;

				cout << xc + x << "," << yc + r << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << yc + r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << (yc + r) * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << xc + x << "," << (yc + r) * -1 << endl;

				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenada volteada:" << endl;
				cout << r << "," << x << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << r << "," << x * -1 << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << r * -1 << "," << x * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << r * -1 << "," << x << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenadas volteadas fuera del origen" << endl;

				cout << xc + r << "," << yc + x << endl;
				cout << "Coordenada 2do cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << yc + x << endl;
				cout << "Coordenada 3er cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << (yc + x) * -1 << endl;
				cout << "Coordenada 4to cuadrante: " << endl;
				cout << xc + r << "," << (yc + x) * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				system("pause");
			}
			else
			{
				pk1 = pk1 + (2 * x + 2) + 1 - (2 * r - 2);
				x = x + 1;
				r = r - 1;


				cout << "Coordenadas:" << "\t\t\t" << "pk" << endl;
				cout << x << "," << r << "\t\t\t\t" << pk1 << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << x * -1 << "," << r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << x * -1 << "," << r * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << x << "," << r * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				cout << "Coordenadas fuera del origen" << endl;

				cout << xc + x << "," << yc + r << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << yc + r << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << (xc + x) * -1 << "," << (yc + r) * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << xc + x << "," << (yc + r) * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;

				cout << "Coordenada volteada:" << endl;
				cout << r << "," << x << endl;
				cout << "Coordenadas 2do cuadrante: " << endl;
				cout << r << "," << x * -1 << endl;
				cout << "Coordenadas 3er cuadrante: " << endl;
				cout << r * -1 << "," << x * -1 << endl;
				cout << "Coordenadas 4to cuadrante: " << endl;
				cout << r * -1 << "," << x << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;

				cout << "Coordenadas volteada fuera del origen" << endl;

				cout << xc + r << "," << yc + x << endl;
				cout << "Coordenada 2do cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << yc + x << endl;
				cout << "Coordenada 3er cuadrante: " << endl;
				cout << (xc + r) * -1 << "," << (yc + x) * -1 << endl;
				cout << "Coordenada 4to cuadrante: " << endl;
				cout << xc + r << "," << (yc + x) * -1 << endl;
				cout << "----------------------------------------------------------------------------------------------------" << endl;
				system("pause");
			}


		} while (x < r);
	}
	
	

}
void Bresenham_Elipse()
{

	float rx, ry, pk, pk1=0, pk20, pk22=0,x=0,ryy,rxx,y;

	cout << "Introduzca rx" << endl;
	cin >> rx;
	cout << "Introduzca ry" << endl;
	cin >> ry;
	y = ry;
	ryy = 2 * pow(ry, 2) * x;
	rxx = 2 * pow(rx, 2) * ry;
	pk = pow(ry, 2) -( pow(rx, 2) * ry) + (float)1 /4  * pow(rx, 2);

	cout << "***********REGION 1************" << endl;
	cout << "Coordenada" << "\t\t" << "pk"<<"\t\t"<<"2ry^2X" << "\t\t" << "2rx^2Y" << endl;
	cout << x << "," << y << "\t\t\t" <<pk<<"\t\t"<< ryy <<"\t\t"<< rxx << endl;
	cout << "Coordenadas espejo" << endl;
	cout << x*-1 << "," << y << endl;
	cout << x * -1 << "," << y*-1 << endl;
	cout << x << "," << y*-1 << endl;
	cout << "----------------------------------------------------------------" << endl;
	if (pk < 0)
	{
		pk1 = pk + ((2 * pow(ry, 2)) *x +( 2 * pow(ry, 2))) + pow(ry, 2);
		x = x + 1;
		ryy = 2 * pow(ry, 2) * x;
		rxx = 2 * pow(rx, 2) *ry;
		cout << x << "," << ry << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		do
		{
			if (pk1 < 0)
			{
				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2))) + pow(ry, 2);
			
				x = x + 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2)) * y;
			
				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				system("pause");
			}
			else
			{
				
				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2)) - (2 * pow(rx, 2) * y - (2 * pow(rx, 2))) + pow(ry, 2));
		
				x = x + 1;
				y=y- 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2) )* y;
				
				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				system("pause");
			}
		} while (ryy < rxx);

		pk20 = pow(ry, 2) * pow((x + (float)1 / 2), 2) + pow(rx, 2) * pow((y - 1), 2) - pow(rx, 2) * pow(ry, 2);
		cout << "***********REGION 2************" << endl;
		cout << "Coordenada" << "\t\t" << "pk" << endl;
		cout << x << "," << y << "\t\t\t" << pk20 <<  endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		if (pk20 < 0)
		{
			pk22 = pk20 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
			x = x + 1;
			y = y - 1;
			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;
					
					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));
			
					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);
		}
		else
		{
			pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));
			y = y - 1;
		

			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;

			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);

		}
	}
	else
	{

		pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2)) - (2 * pow(rx, 2) * y - (2 * pow(rx, 2))) + pow(ry, 2));
		
		x = x + 1;
		y = y - 1;
		ryy = (2 * pow(ry, 2)) * x;
		rxx = (2 * pow(rx, 2)) * y;
		cout << x << "," << ry << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		do
		{
			if (pk1 < 0)
			{
				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2))) + pow(ry, 2);

				x = x + 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2)) * y;

				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				system("pause");
			}
			else
			{

				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2)) - (2 * pow(rx, 2) * y - (2 * pow(rx, 2))) + pow(ry, 2));

				x = x + 1;
				y = y - 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2)) * y;

				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				system("pause");
			}
		} while (ryy < rxx);

		pk20 = pow(ry, 2) * pow((x + (float)1 / 2), 2) + pow(rx, 2) * pow((y - 1), 2) - pow(rx, 2) * pow(ry, 2);
		cout << "***********REGION 2************" << endl;
		cout << "Coordenada" << "\t\t" << "pk" << endl;
		cout << x << "," << y << "\t\t\t" << pk20 << endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		if (pk20 < 0)
		{
			pk22 = pk20 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
			x = x + 1;
			y = y - 1;
			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);
		}
		else
		{
			pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));
			y = y - 1;


			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;

			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);

		}


	}

}
void Bresenham_Elipse_Fuera()
{
	float rx, ry, pk, pk1 = 0, pk20, pk22 = 0, x = 0, ryy, rxx, y,xc,yc;

	cout << "Introduzca rx" << endl;
	cin >> rx;
	cout << "Introduzca ry" << endl;
	cin >> ry;
	cout << "Introduzca XC" << endl;
	cin >> xc;
	cout << "Introduzca YC" << endl;
	cin >> yc;
	y = ry;
	ryy = 2 * pow(ry, 2) * x;
	rxx = 2 * pow(rx, 2) * ry;
	pk = pow(ry, 2) - (pow(rx, 2) * ry) + (float)1 / 4 * pow(rx, 2);

	cout << "***********REGION 1************" << endl;
	cout << "Coordenada" << "\t\t" << "pk" << "\t\t" << "2ry^2X" << "\t\t" << "2rx^2Y" << endl;
	cout << x << "," << y << "\t\t\t" << pk << "\t\t" << ryy << "\t\t" << rxx << endl;
	cout << "Coordenadas espejo" << endl;
	cout << x * -1 << "," << y << endl;
	cout << x * -1 << "," << y * -1 << endl;
	cout << x << "," << y * -1 << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "Coordenada fuera del origen" << endl;
	cout << x+xc << "," << y+yc <<  endl;
	cout << "Coordenadas espejo fuera del origen" << endl;
	cout << (x+xc) * -1 << "," << y+yc << endl;
	cout << (x + xc) * -1 << "," << (y+yc) * -1 << endl;
	cout << x + xc << "," << (y + yc) * -1 << endl;
	cout << "----------------------------------------------------------------" << endl;

	if (pk < 0)
	{
		pk1 = pk + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2))) + pow(ry, 2);
		x = x + 1;
		ryy = 2 * pow(ry, 2) * x;
		rxx = 2 * pow(rx, 2) * ry;
		cout << x << "," << ry << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "Coordenada fuera del origen" << endl;
		cout << x + xc << "," << y + yc << endl;
		cout << "Coordenadas espejo fuera del origen" << endl;
		cout << (x + xc) * -1 << "," << y + yc << endl;
		cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
		cout << x + xc << "," << (y + yc) * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		do
		{
			if (pk1 < 0)
			{
				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2))) + pow(ry, 2);

				x = x + 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2)) * y;

				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				cout << "Coordenada fuera del origen" << endl;
				cout << x + xc << "," << y + yc << endl;
				cout << "Coordenadas espejo fuera del origen" << endl;
				cout << (x + xc) * -1 << "," << y + yc << endl;
				cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
				cout << x + xc << "," << (y + yc) * -1 << endl;
				cout << "----------------------------------------------------------------" << endl;
				system("pause");
			}
			else
			{

				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2)) - (2 * pow(rx, 2) * y - (2 * pow(rx, 2))) + pow(ry, 2));

				x = x + 1;
				y = y - 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2)) * y;

				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				cout << "Coordenada fuera del origen" << endl;
				cout << x + xc << "," << y + yc << endl;
				cout << "Coordenadas espejo fuera del origen" << endl;
				cout << (x + xc) * -1 << "," << y + yc << endl;
				cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
				cout << x + xc << "," << (y + yc) * -1 << endl;
				cout << "----------------------------------------------------------------" << endl;
				system("pause");
			}
		} while (ryy < rxx);

		pk20 = pow(ry, 2) * pow((x + (float)1 / 2), 2) + pow(rx, 2) * pow((y - 1), 2) - pow(rx, 2) * pow(ry, 2);
		cout << "***********REGION 2************" << endl;
		cout << "Coordenada" << "\t\t" << "pk" << endl;
		cout << x << "," << y << "\t\t\t" << pk20 << endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "Coordenada fuera del origen" << endl;
		cout << x + xc << "," << y + yc << endl;
		cout << "Coordenadas espejo fuera del origen" << endl;
		cout << (x + xc) * -1 << "," << y + yc << endl;
		cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
		cout << x + xc << "," << (y + yc) * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		if (pk20 < 0)
		{
			pk22 = pk20 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
			x = x + 1;
			y = y - 1;
			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			cout << "Coordenada fuera del origen" << endl;
			cout << x + xc << "," << y + yc << endl;
			cout << "Coordenadas espejo fuera del origen" << endl;
			cout << (x + xc) * -1 << "," << y + yc << endl;
			cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
			cout << x + xc << "," << (y + yc) * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);
		}
		else
		{
			pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));
			y = y - 1;


			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			cout << "Coordenada fuera del origen" << endl;
			cout << x + xc << "," << y + yc << endl;
			cout << "Coordenadas espejo fuera del origen" << endl;
			cout << (x + xc) * -1 << "," << y + yc << endl;
			cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
			cout << x + xc << "," << (y + yc) * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;

			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);

		}
	}
	else
	{

		pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2)) - (2 * pow(rx, 2) * y - (2 * pow(rx, 2))) + pow(ry, 2));

		x = x + 1;
		y = y - 1;
		ryy = (2 * pow(ry, 2)) * x;
		rxx = (2 * pow(rx, 2)) * y;
		cout << x << "," << ry << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "Coordenada fuera del origen" << endl;
		cout << x + xc << "," << y + yc << endl;
		cout << "Coordenadas espejo fuera del origen" << endl;
		cout << (x + xc) * -1 << "," << y + yc << endl;
		cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
		cout << x + xc << "," << (y + yc) * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		do
		{
			if (pk1 < 0)
			{
				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2))) + pow(ry, 2);

				x = x + 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2)) * y;

				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				cout << "Coordenada fuera del origen" << endl;
				cout << x + xc << "," << y + yc << endl;
				cout << "Coordenadas espejo fuera del origen" << endl;
				cout << (x + xc) * -1 << "," << y + yc << endl;
				cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
				cout << x + xc << "," << (y + yc) * -1 << endl;
				cout << "----------------------------------------------------------------" << endl;
				system("pause");
			}
			else
			{

				pk1 = pk1 + ((2 * pow(ry, 2)) * x + (2 * pow(ry, 2)) - (2 * pow(rx, 2) * y - (2 * pow(rx, 2))) + pow(ry, 2));

				x = x + 1;
				y = y - 1;
				ryy = (2 * pow(ry, 2)) * x;
				rxx = (2 * pow(rx, 2)) * y;

				cout << x << "," << y << "\t\t\t" << pk1 << "\t\t" << ryy << "\t\t" << rxx << endl;
				cout << "Coordenadas espejo" << endl;
				cout << x * -1 << "," << y << endl;
				cout << x * -1 << "," << y * -1 << endl;
				cout << x << "," << y * -1 << endl;
				cout << "Coordenada fuera del origen" << endl;
				cout << x + xc << "," << y + yc << endl;
				cout << "Coordenadas espejo fuera del origen" << endl;
				cout << (x + xc) * -1 << "," << y + yc << endl;
				cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
				cout << x + xc << "," << (y + yc) * -1 << endl;
				cout << "----------------------------------------------------------------" << endl;
				system("pause");
			}
		} while (ryy < rxx);

		pk20 = pow(ry, 2) * pow((x + (float)1 / 2), 2) + pow(rx, 2) * pow((y - 1), 2) - pow(rx, 2) * pow(ry, 2);
		cout << "***********REGION 2************" << endl;
		cout << "Coordenada" << "\t\t" << "pk" << endl;
		cout << x << "," << y << "\t\t\t" << pk20 << endl;
		cout << "Coordenadas espejo" << endl;
		cout << x * -1 << "," << y << endl;
		cout << x * -1 << "," << y * -1 << endl;
		cout << x << "," << y * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "Coordenada fuera del origen" << endl;
		cout << x + xc << "," << y + yc << endl;
		cout << "Coordenadas espejo fuera del origen" << endl;
		cout << (x + xc) * -1 << "," << y + yc << endl;
		cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
		cout << x + xc << "," << (y + yc) * -1 << endl;
		cout << "----------------------------------------------------------------" << endl;
		if (pk20 < 0)
		{
			pk22 = pk20 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
			x = x + 1;
			y = y - 1;
			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			cout << "Coordenada fuera del origen" << endl;
			cout << x + xc << "," << y + yc << endl;
			cout << "Coordenadas espejo fuera del origen" << endl;
			cout << (x + xc) * -1 << "," << y + yc << endl;
			cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
			cout << x + xc << "," << (y + yc) * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);
		}
		else
		{
			pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));
			y = y - 1;


			cout << x << "," << y << "\t\t\t" << pk22 << endl;
			cout << "Coordenadas espejo" << endl;
			cout << x * -1 << "," << y << endl;
			cout << x * -1 << "," << y * -1 << endl;
			cout << x << "," << y * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;
			cout << "Coordenada fuera del origen" << endl;
			cout << x + xc << "," << y + yc << endl;
			cout << "Coordenadas espejo fuera del origen" << endl;
			cout << (x + xc) * -1 << "," << y + yc << endl;
			cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
			cout << x + xc << "," << (y + yc) * -1 << endl;
			cout << "----------------------------------------------------------------" << endl;

			do
			{
				if (pk22 < 0)
				{
					pk22 = pk22 + (2 * pow(ry, 2) * x + 2 * pow(ry, 2) - (2 * pow(rx, 2) * y - 2 * pow(rx, 2)) + pow(rx, 2));
					x = x + 1;
					y = y - 1;

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}
				else
				{
					y = y - 1;
					pk22 = pk22 - (2 * pow(rx, 2) * y - 2 * pow(rx, 2) + pow(rx, 2));

					cout << x << "," << y << "\t\t\t" << pk22 << endl;
					cout << "Coordenadas espejo" << endl;
					cout << x * -1 << "," << y << endl;
					cout << x * -1 << "," << y * -1 << endl;
					cout << x << "," << y * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
					cout << "Coordenada fuera del origen" << endl;
					cout << x + xc << "," << y + yc << endl;
					cout << "Coordenadas espejo fuera del origen" << endl;
					cout << (x + xc) * -1 << "," << y + yc << endl;
					cout << (x + xc) * -1 << "," << (y + yc) * -1 << endl;
					cout << x + xc << "," << (y + yc) * -1 << endl;
					cout << "----------------------------------------------------------------" << endl;
				}

			} while (y > 0);

		}


	}
}
void Cuaterniones()
{
	double q, coseno, sen,uu, ui,uj,uk,angl,Q,Px,Py,Pz,rad,I,J,K;
	cout << "Ingrese en angulo" << endl;
	cin >> angl;
	cout << "Ingrese i" << endl;
	cin >> I;
	cout << "Ingrese j" << endl;
	cin >> J;
	cout << "Ingrese k" << endl;
	cin >> K;
	rad = (angl * PI) / 180;
	coseno = cos(rad / 2);
	sen = sin(rad / 2);
	uu = sqrt((pow(I, 2) + pow(J, 2) + pow(K, 2)));
	
	/*NO SE :(*/


}


