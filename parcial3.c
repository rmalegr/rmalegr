#include <stdio.h>

typedef struct{
    int nroAlumno; //id de alumno 
    float notas;
    char nombre[20];
    char curso;
    char materia;

}calificaciones ;

calificaciones  alumnos [20];


void imprimirEstadoAlumno(calificaciones vector[], int cantidad){
    int vectorAlumnos[cantidad];
    for(int longitudVectorLocal =0; longitudVectorLocal < cantidad; longitudVectorLocal++){
        vectorAlumnos[longitudVectorLocal]=0;
    }
    for(int idx = 0; idx < cantidad; idx++ ){
         vectorAlumnos[vector[idx].nroAlumno -1];
       
    }
    for (int longitud =0; longitud < cantidad; longitud++){
        printf("EL alumno %d con nota %.2f\n", vector[longitud].nroAlumno  , vector[longitud].notas );
    }
}

    void calcularNotas(calificaciones vect[], int notas_cant){
        float  vector_notas [notas_cant];
        int p=0;
       for(int idx=0; idx < notas_cant; idx++){
            vector_notas[ vect[idx].nroAlumno -1 ] += vect[idx].notas;
            p=vect[idx].nroAlumno -1;                 
       }
       vector_notas[p]=vector_notas[p]/3;
       for(int idx=0; idx < notas_cant; idx++){
           float promedio=0.0;

       }
        for(int idx=0; idx < notas_cant; idx ++)
           printf("Alumno %d Imprime un promedio de  %.2f\n",idx+1,vector_notas[idx]);
    }

    void calcularMateria(calificaciones vecv[], int cant){
        int proceso_vec[cant];
        for(int idx = 0 ; idx < cant ; idx++ ){
            proceso_vec[idx]=0;      
        }
        for (int longitud =0; longitud < cant; longitud++){
            if(vecv[longitud].materia == 'P'){
                proceso_vec[vecv[longitud].nroAlumno -1]++;
            }
        }
        for (int idx=0; idx < cant; idx++){
            printf("El alumno %d cursa %d veces la materia Programacion\n", idx+1, proceso_vec[idx] );
        }
    }

int main(){
    calificaciones alum1={
        .nroAlumno=1,
        .nombre="Rodrigo",
        .curso='E',
        .materia='P',
        .notas=7
        
    };

    calificaciones alum2={
        .nroAlumno=1,
        .nombre="Rodrigo",
        .curso='E',
        .materia='P',
        .notas=5
        
    };
     calificaciones alum3={
        .nroAlumno=1,
        .nombre="Rodrigo",
        .curso='E',
        .materia='C',
        .notas=9
        
    };


    alumnos[0] = alum1;
    alumnos[1] = alum2;
    alumnos[2] = alum3;

    imprimirEstadoAlumno(alumnos,2);
    calcularNotas(alumnos,3);
    calcularMateria(alumnos,3);

}