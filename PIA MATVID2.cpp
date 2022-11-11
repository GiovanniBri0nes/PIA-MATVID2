#include <iostream>
#include <windows.h>
#include <math.h>

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
void Matriz_Compuesta(); //INCOMPLETA PAAAAAAAAAAAAAAAAAAAAAAAAAAAAA//
void Rotacion_sobre_un_vector();
void Bresenham_Lineas();
void Bresenham_Circulos();
void Bresenham_Circulos_Fuera();
void Bresenham_Elipse();
void Bresenham_Elipse_Fuera();
void Cuaterniones();
int matriz[10][10], fila, columna, matriz2[10][10], opcion, decision = 0, op, matrizR[10][10], fila2, columna2;
double matriz3[10][10], matrizRI[10][10], FyCMI, aux, pivote;
double matrizT[4][4], matrizE[4][4], matrizRot[4][4], matrizRotY[4][4], matrizRotZ[4][4], Acciones[10][10], AccionesE[10][10];
double AccionesRot[10][10], AccionesRotY[10][10], AccionesRotZ[10][10];

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
	int acc, i, j, k, num_acc, resp;;
	

		/*cout << "Seleccione las acciones a realizar" << endl;*/
		cout << "***RECUERDE QUE LA PRIMERA ACCION QUE SELECCIONE SERA LA ULTIMA,LA SEGUNDA LA PENULTIMA Y ASI SUCESIVAMENE***" << endl;
		system("pause");
		cout << "Desea agregar una traslacion?" << endl;
		cout << "1-Si         2-No" << endl;
		cin >> resp;
		if (resp == 1)
		{
			Traslacion();
		}
	
		/*cout << "Desea agregar una traslacion?" << endl;
		cout << "1-Si         2-No" << endl;
		cin >> resp;
		if (resp == 1)
		{
			Escalacion();
		}
		cout << "Desea agregar una traslacion?" << endl;
		cout << "1-Si         2-No" << endl;
		cin >> resp;
		if (resp == 1)
		{
			Rotacion_X();
		}*/

		for (k = 1; k < 6; k++)
		{
			for (i = 1; i < 5; i++)
			{
				for (j = 1; j < 5; j++)
				{
				
				}
				cout << "\n";
			}
		}
		/*cout << "Estas son las acciones que se pueden realizar" << endl;
		cout << "1-Traslacion" << endl;
		cout << "2-Escalacion" << endl;
		cout << "3-Rotacion en eje X" << endl;
		cout << "4-Rotacion en eje Y" << endl;
		cout << "5-Rotacion en eje Z" << endl;*/
	/*	cout << "Ingrese numero de acciones a realizar" << endl;
		cin >> acc;
		acc = acc + 1;*/
		/*if (acc > 0 && acc < 6)
		{*/
			//for (k = 1; k <acc ; k++)
			//{
			//	
			//			do
			//			{
			//				cout << "Ingrese el numero de la accion a realizar" << endl;
			//				cout << "1-Traslacion" << endl;
			//				cout << "2-Escalacion" << endl;
			//				cout << "3-Rotacion en eje X" << endl;
			//				cout << "4-Rotacion en eje Y" << endl;
			//				cout << "5-Rotacion en eje Z" << endl;
			//				cin >> num_acc;
			//				/*Acciones[i] = num_acc;*/
			//				switch (num_acc)
			//				{
			//				case 1:

			//					Traslacion();
			//					
			//					break;

			//				case 2:
			//					Escalacion();
			//				

			//					break;

			//				case 3:
			//					Rotacion_X();
			//					
			//					break;

			//				case 4:
			//					Rotacion_Y();
			//					
			//					break;

			//				case 5:
			//					Rotacion_Z();
			//					
			//					break;
			//				default:
			//					cout << "Opcion incorrecta" << endl;

			//				}


			//			} while (num_acc >= 6);
			//	
			//	
			//}

			//for (k = 1; k < acc; k++)
			//{
			//	cout << "Su accion #" << k << " es: " << endl;
			//	for (i = 1; i < 5; i++)
			//	{
			//		for (j = 1; j < 5; j++)
			//		{
			//			Acciones[i][j] = matrizT[i][j];
			//			Acciones[i][j] = matrizE[i][j];
			//			Acciones[i][j] = matrizRot[i][j];
			//			Acciones[i][j] = matrizRotY[i][j];
			//			Acciones[i][j] = matrizRotZ[i][j];
			//			
			//			cout << " " << Acciones[i][j] << " ";
			//			/*if (k == 2)
			//			{
			//				cout << " " << AccionesE[i][j] << " ";
			//			}
			//			if (k == 3)
			//			{
			//				cout << " " << AccionesE[i][j] << " ";
			//			}*/

			//		}
			//		cout << "\n";
			//	}
			//	
			//}
	
 


}
void Rotacion_sobre_un_vector()
{
	
	int x1, y1, z1, x2, y2, z2, angulo, vx,vy,vz,i,j,k;
	float a, b, c, d, raiz, alfa,beta,beta2,alfa2,radbet, radalf;

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
		cout << "MC=T^-1(" << x1 << "," << y1 << "," << z1 << ")*Rx(" << angulo << ")*T(" << x1 * -1 << "," << y1 * -1 << "," << z1 * -1 << ")" << endl;

	}
	else
	{
		raiz = sqrt(pow(vx, 2) + pow(vy, 2) + pow(vz, 2));
		a = vx / raiz;
		b = vy / raiz;
		c = vz / raiz;
		d = sqrt(pow(b, 2) + pow(c, 2));
		alfa = acos(c / d);
		radalf = (alfa * 180) / PI;
		beta = asin(a / (sqrt(pow(a, 2) + pow(d, 2))));
		radbet = (beta * 180) / PI;
		beta2 = radbet * -1;
		alfa2 = radalf * -1;
	
		cout << "MC=T^-1(" << x1 << "," << y1 << "," << z1 << ")*Rx^-1(" <<alfa2 << ") *Ry^-1(" << beta2 * -1 << ")*Rz(" << angulo<< ")*Ry(" << beta2 << ")*Rx(" << radalf << ") T(" << x1 * -1 << "," << y1 * -1 << "," << z1 * -1 << ")" << endl;

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









