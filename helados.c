
#include <stdio.h>

typedef struct
{
    int id;
    float precio;
    char tipo_producto;// 'A' si es helado de agua ; 'C' si es helado de crema
    int cant_actual; // cantidad alctual de stock
    int cant_minima;// cantidad de stok minimo 

} Helado;




Helado registro(int hid, int hprecio, int htipo, float hcant_actual, char hcant_minima)
{
    Helado unHelado;
    unHelado.id = hid;
    unHelado.precio = hprecio;
    unHelado.tipo_producto = htipo;
    unHelado.cant_actual = hcant_actual;
    unHelado.cant_minima = hcant_minima;
    return unHelado;
}

void parcial(Helado he[], int cantidad ){
    int vectorProcesos[cantidad];
    int cont=0;

    
    for(int i=0; i<= cantidad; i++){
        vectorProcesos[i]=0;
    }
     for (int idx=0; idx < cantidad; idx++){
         if(he[idx].tipo_producto == 'C' && he[idx].cant_actual >20 && he[idx].cant_minima == 10){
            vectorProcesos[idx]++;
         }else{
             if (he[idx].tipo_producto == 'A' &&  he[idx].cant_minima == 5 ) {
                 vectorProcesos[idx]++;
             }
        }
    }
    
      
    for(int idx=0; idx < cantidad; idx ++){
        if(vectorProcesos[idx] != 0){
            printf("helado %d\n", vectorProcesos[idx]);
        //printf("nro_id %d)\ttipo de helado %c\tcantidad de actual %d\tcantidad minima %d\n", he[idx].id, he[idx].tipo_producto, he[idx].cant_actual, he[idx].cant_minima);
        }
    }



}



int main() {

    Helado he[10];
    he[0] = registro(1, 120, 'A', 25, 10);
    he[1] = registro(2, 320, 'C', 20, 10);
    he[2] = registro(3, 320, 'C', 20, 10);
    he[3] = registro(4, 320, 'C', 20, 10);
    he[4] = registro(5, 320, 'C', 15, 5);
    he[5] = registro(6, 220, 'C', 15, 5);
    he[6] = registro(7, 120, 'A', 15, 5);

    parcial(he, 7);
}