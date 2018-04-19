/* programa_14 horoscopo clasificados
estructura: selectiva múltiple anidada
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 19 de febrero del 2015
*/
#include <windows.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int opc1, opcion;

int main()

{

system ("color 1e");
system ("cls");
cout<<"\n Horoscopos \n";
cout<<"\n 1.- Aire";
cout<<"\n 2.- Tierra";
cout<<"\n 3.- Fuego";
cout<<"\n 4.- Agua";
cout<<"\n 5.- Salir";
cout<<"\n\n Opcion: ";
cin>>opc1;

switch (opc1)
{

case 1: {

    // AIRE
    system ("cls");
	cout<<"\n\t AIRE \n";
	cout<<"\n 1.- Geminis";
	cout<<"\n 2.- Libra";
	cout<<"\n 3.- Acuario";
	cout<<"\n 4.- Salir";
	cout<<"\n\n Opcion: ";
	cin>>opcion;

	switch (opcion)
	{

	case 1:{
        system ("cls");
		    cout<<"\n\t Geminis \n\n";
            cout<<"\n\t Color:                 Rojo";
            cout<<"\n\t Numero de la suerte:   89";
            cout<<"\n\t Piedra:                Zafiro";
            cout<<"\n\t Planeta:               Marte";
            cout<<"\n\t Consejos/predicciones: Un nuevo amor en puerta \n\n";
            system ("pause");
        return main ();
	    }

    case 2:{
        system ("cls");
		    cout<<"\n\t Libra \n\n";
            cout<<"\n\t Color:                 Magenta";
            cout<<"\n\t Numero de la suerte:   85";
            cout<<"\n\t Piedra:                Rubi";
            cout<<"\n\t Planeta:               Neptuno";
            cout<<"\n\t Consejos/predicciones: Ascenso en el trabajo \n\n";
            system ("pause");
        return main ();
	    }

    case 3:{
        system ("cls");
		    cout<<"\n\t Acuario \n\n";
            cout<<"\n\t Color:                 Verde agua";
            cout<<"\n\t Numero de la suerte:   73";
            cout<<"\n\t Piedra:                esmeralda";
            cout<<"\n\t Planeta:               Urano";
            cout<<"\n\t Consejos/predicciones: Nuevos horizontes en las finanzas \n\n";
            system ("pause");
            return main ();
	    }

    default:{cout<<"\n\t Ha elegido salir, hasta pronto! \n\n";
    	system ("pause");
    	}break;
    }
}break;

case 2:{
    //TIERRA
    system ("cls");
    cout<<"\n\t TIERRA \n";
	cout<<"\n 1.- Tauro";
	cout<<"\n 2.- Virgo";
	cout<<"\n 3.- Capricornio";
	cout<<"\n 4.- Salir";
	cout<<"\n\n Opcion: ";
	cin>>opcion;

    switch (opcion){

    case 1:{
        system ("cls");
		    cout<<"\n\t Tauro \n\n";
            cout<<"\n\t Color:                 Azul";
            cout<<"\n\t Numero de la suerte:   35";
            cout<<"\n\t Piedra:                Opalina";
            cout<<"\n\t Planeta:               Venus";
            cout<<"\n\t Consejos/predicciones: Nuevos proyectos \n\n";
            system ("pause");
        return main ();
        }
    case 2:{
        system ("cls");
		    cout<<"\n\t Virgo \n\n";
            cout<<"\n\t Color:                 Morado";
            cout<<"\n\t Numero de la suerte:   52";
            cout<<"\n\t Piedra:                Onix";
            cout<<"\n\t Planeta:               Jupiter";
            cout<<"\n\t Consejos/predicciones: Suerte en el azar \n\n";
            system ("pause");
        return main ();
    	}

    case 3:{
        system ("cls");
		    cout<<"\n\t Capricornio \n\n";
            cout<<"\n\t Color:                 Azul Cielo ";
            cout<<"\n\t Numero de la suerte:   84";
            cout<<"\n\t Piedra:                Onix";
            cout<<"\n\t Planeta:               Marte";
            cout<<"\n\t Consejos/predicciones: Oportunidades academicas \n\n";
            system ("pause");
        return main ();
    	}

    default:{cout<<"\n\t Ha elegido salir, hasta pronto! \n\n";
    	system ("pause");
    	}break;
    }
}break;

case 3:{
    //FUEGO
    system ("cls");
    cout<<"\n\t FUEGO \n";
	cout<<"\n 1.- Aries";
	cout<<"\n 2.- Leo";
	cout<<"\n 3.- Sagitario";
	cout<<"\n 4.- Salir";
	cout<<"\n\n Opcion: ";
	cin>>opcion;

    switch (opcion){

    case 1:{
        system ("cls");
		    cout<<"\n\t Aries \n\n";
            cout<<"\n\t Color:                 Verde";
            cout<<"\n\t Numero de la suerte:   2";
            cout<<"\n\t Piedra:                Cuarzo";
            cout<<"\n\t Planeta:               Saturno";
            cout<<"\n\t Consejos/predicciones: Precavido en las finanzas \n\n";
            system ("pause");
        return main ();
		}

    case 2:{
        system ("cls");
		    cout<<"\n\t Leo \n\n";
            cout<<"\n\t Color:                 Azul marino";
            cout<<"\n\t Numero de la suerte:   67";
            cout<<"\n\t Piedra:                Perla";
            cout<<"\n\t Planeta:               Pluton";
            cout<<"\n\t Consejos/predicciones: Reencuentros familiares \n\n";
            system ("pause");
        return main ();
		}

    case 3:{
    	system ("cls");
		    cout<<"\n\t Sagitario \n\n";
            cout<<"\n\t Color:                 Rojo";
            cout<<"\n\t Numero de la suerte:   100";
            cout<<"\n\t Piedra:                Oro";
            cout<<"\n\t Planeta:               Saturno";
            cout<<"\n\t Consejos/predicciones: Reencuentros con amigos \n\n";
            system ("pause");
        return main ();
		}

    default:{cout<<"\n\t Ha elegido salir, hasta pronto! \n\n";
    	system ("pause");
    	}break;
    }
}break;

case 4:{
    //AGUA
    system ("cls");
    cout<<"\n\t AGUA \n";
	cout<<"\n 1.- Cancer";
	cout<<"\n 2.- Escorpion";
	cout<<"\n 3.- Picis";
	cout<<"\n 4.- Salir";
	cout<<"\n\n Opcion: ";
	cin>>opcion;

    switch (opcion){

    case 1:{
        system ("cls");
		    cout<<"\n\t Cancer \n\n";
            cout<<"\n\t Color:                 Verde";
            cout<<"\n\t Numero de la suerte:   42";
            cout<<"\n\t Piedra:                Esmeralda";
            cout<<"\n\t Planeta:               Mercurio";
            cout<<"\n\t Consejos/predicciones: Nuevos negocios \n\n";
            system ("pause");
        return main ();
    	}

    case 2:{
        system ("cls");
		    cout<<"\n\t Escorpion \n\n";
            cout<<"\n\t Color:                 Amarillo";
            cout<<"\n\t Numero de la suerte:   79";
            cout<<"\n\t Piedra:                Diamante";
            cout<<"\n\t Planeta:               Jupiter";
            cout<<"\n\t Consejos/predicciones: Cambio de residencia \n\n";
            system ("pause");
        return main ();
    	}

    case 3:{
        system ("cls");
		    cout<<"\n\t Picis \n\n";
            cout<<"\n\t Color:                 Amarillo";
            cout<<"\n\t Numero de la suerte:   92";
            cout<<"\n\t Piedra:                Zafiro";
            cout<<"\n\t Planeta:               Venus";
            cout<<"\n\t Consejos/predicciones: Oportunidad de negocios \n\n";
            system ("pause");
        return main ();
    	}
    default:{cout<<"\n\t Ha elegido salir, hasta pronto! \n\n";
    	system ("pause");
    	}break;
    }
}break;

case 5:{
  cout<<"\n\t Ha elegido salir, hasta pronto! \n\n\t\t\t";
    system ("pause");
    }break;

default:{cout<<"\n\t Error, opcion inexistente \n\n\t\t\t";
    system ("pause");
    return main ();
    }

}

return 0;
}
