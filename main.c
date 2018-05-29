// fehca de entrega 21/6 fecha limite. Mejor entregar antes.
#include "funciones.h"

typedef struct{
  char nombreyapellido[50];
  int dni;
  int edad;
  int cantAtendido; // aranca en 0
  int eliminado; //1 si esta eliminado 0 sino.
}Paciente;

typedef struct{
  Paciente paciente;
  int dia;
  float hora;
  int ocupado; //1 si esta ocupado 0 disponible
  int matricula; // puede o no estar
}Turno;

typedef struct{
  char nombreyapellido[50];
  int matricula;
  char especialidad[30];
  int eliminado;
  Turno listaTurnos[100]; //turnos de 10 por dias de 0-7 dias.
}Medico;

typedef struct{
  int habitacion; // habitacion 0-99 100-199 200-299 etc.
  int ocupado; //1 si 0 no
  Paciente paciente;
}Habitacion;

//cargar minimo 50 pacientes.

int main(int argc, char const *argv[]) {
  Medico medicos[5]; // cinco especialidades.
  Habitacion habitaciones[5][10]; // 5 pisos por 10 habitaciones.
  char especialidades[5][30];
  saludar();
  return 0;
}

/*entregar
paso 1 cargar las estructuras.
paso final volcar al archivo.



  1) diario de trabajo
  2) matriz de soluciones
      problema          /posible causa        / solucines
  ej  se guarda basura  /no cerraba el archivo/ lo cerramos
  3)diagrama de estructuras/funciones.
*/
