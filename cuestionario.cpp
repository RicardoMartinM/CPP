#include <iostream>
using namespace std;

char respuesta1,respuesta2,respuesta3,respuesta4,respuesta5,respuesta6,respuesta7,respuesta8,respuesta9,respuesta10;
int score;

int main() {

    //Pregunta No.1

 cout << "Pregunta No. 1 ¿Quién creó el lenguaje compilado C++?" << endl;
 cout << "a) Bjarne Stroustrup" << endl;
 cout << "b) Elon Musk" << endl;
 cout << "c) Guido van Rossum" << endl;

cin >> respuesta1;

    if(respuesta1 == 'a' || 'A') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es a) Bjarne Stroustrup" << endl;
    }

//Pregunta No.2

 cout << "Pregunta No. 2 ¿Quién es el Rector General de la Universidad de Guadalajara?" << endl;
 cout << "a) Luis Gustavo Padilla Montes" << endl;
 cout << "b) Ricardo Villanueva Lomelí" << endl;
 cout << "c) Felipe Galindo" << endl;

cin >> respuesta2;

    if(respuesta2 == 'b' || 'B') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es b) Ricardo Villanueva Lomelí" << endl;
    }

     //Pregunta No.3

 cout << "Pregunta No. 3 ¿Quién es actual Rector de CUCEA?" << endl;
 cout << "a) Felipe Galindo" << endl;
 cout << "b) Ricardo Villanueva Lomelí" << endl;
 cout << "c) Luis Gustavo Padilla Montes" << endl;

cin >> respuesta3;

    if(respuesta3 == 'c' || 'C') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es c) Luis Gustavo Padilla Montes" << endl;
    }

//Pregunta No.4

 cout << "Pregunta No. 4 ¿Quién fué el fundador de la Universidad de Guadalajara?" << endl;
 cout << "a) Luis Gustavo Padilla Montes" << endl;
 cout << "b) Ricardo Villanueva Lomelí" << endl;
 cout << "c) Felipe Galindo" << endl;

cin >> respuesta4;

    if(respuesta4 == 'c' || 'C') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es c) Felipe Galindo" << endl;
    }

//Pregunta No.5

 cout << "Pregunta No. 5 ¿Quién es el Rector General de la Universidad de Guadalajara?" << endl;
 cout << "a) Luis Gustavo Padilla Montes" << endl;
 cout << "b) Ricardo Villanueva Lomelí" << endl;
 cout << "c) Felipe Galindo" << endl;

cin >> respuesta5;

    if(respuesta5 == 'b' || 'B') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es b) Ricardo Villanueva Lomelí" << endl;
    }

    //Pregunta No.6

 cout << "Pregunta No. 6 ¿Quién es el actual presidente de Estados Unidos de América?" << endl;
 cout << "a) Joe Biden" << endl;
 cout << "b) Donald Trump" << endl;
 cout << "c) Andrés Manuel López Obrador" << endl;

cin >> respuesta6;

    if(respuesta6 == 'a' || 'A') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es a) Joe Biden" << endl;
    }

//Pregunta No.7

 cout << "Pregunta No. 7 ¿Quién es el actual presidente de Estados Unidos México?" << endl;
 cout << "a) Joe Biden" << endl;
 cout << "b) Donald Trump" << endl;
 cout << "c) Andrés Manuel López Obrador" << endl;

cin >> respuesta7;

    if(respuesta7 == 'c' || 'C') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es c) Andrés Manuel López Obrador" << endl;
    }

    //Pregunta No.8

 cout << "Pregunta No. 8 ¿Cúando se inician las próximas elecciones de México?" << endl;
 cout << "a) 2 de Mayo de 2024" << endl;
 cout << "b) 15 Junio de 2024" << endl;
 cout << "c) 2 de Junio de 2024" << endl;

cin >> respuesta8;

    if(respuesta8 == 'c' || 'C') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es c) 2 de Junio de 2024" << endl;
    }

    //Pregunta No.9

 cout << "Pregunta No. 9 ¿Cúando se inician las próximas elecciones de Estados Unidos de América?" << endl;
 cout << "a) 2 de Mayo de 2024" << endl;
 cout << "b) 15 Junio de 2024" << endl;
 cout << "c) 5 de Noviembre de 2024" << endl;

cin >> respuesta9;

    if(respuesta9 == 'c' || 'C') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es c) 5 de Noviembre de 2024" << endl;
    }

    //Pregunta No.10

 cout << "Pregunta No. 10 ¿Cómo se llama el encargado principal de FUNDAMENTOS DE PROGRAMACION FOR DUMMIES?" << endl;
 cout << "a) Ricardo Martin Martínez" << endl;
 cout << "b) Jesus Omar López González" << endl;
 cout << "c) Hector Eduardo Lopez Martinez" << endl;

cin >> respuesta10;

    if(respuesta10 == 'b' || 'B') {
        cout << "Correcto" << endl;
        score++;
    } else {
        cout << "Incorrecto. La respuesta correcta es b) Jesus Omar López González " << endl;
    }

    return 0;
    }