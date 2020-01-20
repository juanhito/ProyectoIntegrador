#include <iostream>
using namespace std;

string recta1[6], recta2[6], recta3[6];
int punto1[3], punto2[3], vector1[3], vector2[3],punto3[3],vector3[3];
string plano1[9],plano2[9],plano3[9];
int suma;
int plano11[6],plano22[6],plano33[6];
string pedirRecta(){
    string recta;
    cin >> recta;
    return recta;
}
int calcular(int a ,int b,int c,int d){
    int resultado=a*b-c*d;
    return resultado;

}
int posicones2Rectas( int matrizA[3][3]){//Sergio

    int rangoM=0;
    int rangoAmp=0;
    int det1=matrizA[0][0]*matrizA[1][1]-(matrizA[0][1]*matrizA[1][0]);//para calcular el primer determinate de 2x2
    int det2=matrizA[1][0]*matrizA[2][1]-(matrizA[1][1]*matrizA[2][0]);//para calcular el segundo determinante de 2x2
    //calcular determinantes para la matriz ampliada
    int detA1=matrizA[0][0]*matrizA[1][0]-(matrizA[0][0]*matrizA[1][0]);//
    int detA2=matrizA[1][0]*matrizA[2][2]-(matrizA[1][2]*matrizA[2][0]);//determinantes
    int detA3=matrizA[0][2]*matrizA[1][1]-(matrizA[0][1]*matrizA[1][2]);//de la ampliada
    int detA4=matrizA[1][2]*matrizA[2][1]-(matrizA[1][1]*matrizA[2][2]);//

    //para el rango de la matriz
    if(det1!=0 || det2!=0){
        rangoM=2;
    }else{
        rangoM=1;
    }
    //para el rango de la matriz ampliada
    if(detA1!=0||detA2!=0||detA3!=0||detA4!=0){
        rangoAmp=2;
    }else{
        rangoAmp=1;
    }

    if(rangoM==2&&rangoAmp==2){
        cout<<"las dos rectas son secantes";
    }else if(rangoM==1&&rangoAmp==2){
        cout<<"las dos rectas son paralelas";
    }else{
        cout<<"las dos rectas son coincidentes";

    }

}
int posiciones2Planos(int matriz[2][4]){//Sergio
    int rangoM=0;
    int rangoAmp=0;

    //los diferentes determinantes necesarios
    int det1=matriz[0][0]*matriz[1][1]-(matriz[0][1]*matriz[1][0]);
    int det2=matriz[0][1]*matriz[1][2]-(matriz[0][2]*matriz[1][1]);
    int det3=matriz[0][0]*matriz[1][2]-(matriz[0][2]*matriz[1][0]);

    int detA1=matriz[0][0]*matriz[1][3]-(matriz[0][3]*matriz[1][0]);
    int detA2=matriz[0][1]*matriz[1][3]-(matriz[0][3]*matriz[1][1]);
    int detA3=matriz[0][2]*matriz[1][3]-(matriz[0][3]*matriz[1][2]);

    //para ver el rango que tienen
    if(det1!=0||det2!=0||det3!=0){
        rangoM=2;
    }else{
        rangoM=1;
    }
    if(detA1!=0||detA2!=0||detA3!=0){
        rangoAmp=2;
    }else{
        rangoAmp=1;
    }

    if(rangoM==2&&rangoAmp==2){
        cout<<"Los dos planos se cortan";
    }else if(rangoM==1&&rangoAmp==2){
        cout<<"Los dos planos son paralelos";
    }else{
        cout<<"Los dos planos son coincidentes";
    }

}
int posiciones3Planos(int matriz[3][4]){//Sergio
    int rangoM=0;
    int rangoAmp=0;


    int det1=matriz[0][0]*matriz[1][1]*matriz[2][2]+
             matriz[1][2]*matriz[0][1]*matriz[2][0]+
             matriz[2][1]*matriz[1][0]*matriz[0][2]-
             (matriz[0][2]*matriz[1][1]*matriz[2][0]+
              matriz[2][1]*matriz[1][2]*matriz[0][0]+
              matriz[1][0]*matriz[0][1]*matriz[2][2]);
    int det2=matriz[0][0]*matriz[1][1]-(matriz[0][1]*matriz[1][0]);
    int det3=matriz[0][1]*matriz[1][2]-(matriz[0][2]*matriz[1][1]);
    int det4=matriz[1][0]*matriz[2][1]-(matriz[1][1]*matriz[2][0]);
    int det5=matriz[0][1]*matriz[1][2]-(matriz[0][2]*matriz[1][1]);

    //para ver el rango de 3 de la ampliada
    int detA1=matriz[0][0]*matriz[1][1]*matriz[2][3]+
              matriz[1][3]*matriz[0][1]*matriz[2][0]+
              matriz[2][1]*matriz[1][0]*matriz[0][3]-
              (matriz[0][3]*matriz[1][1]*matriz[2][0]+
               matriz[2][1]*matriz[1][3]*matriz[0][0]+
               matriz[1][0]*matriz[0][1]*matriz[2][3]);

    int detA2=matriz[0][0]*matriz[1][3]*matriz[2][2]+
              matriz[1][2]*matriz[0][3]*matriz[2][0]+
              matriz[2][3]*matriz[1][0]*matriz[0][2]-
              (matriz[0][2]*matriz[1][3]*matriz[2][0]+
               matriz[2][3]*matriz[1][2]*matriz[0][0]+
               matriz[1][0]*matriz[0][3]*matriz[2][2]);

    int detA3=matriz[0][3]*matriz[1][1]*matriz[2][2]+
              matriz[1][2]*matriz[0][1]*matriz[2][3]+
              matriz[2][1]*matriz[1][3]*matriz[0][2]-
              (matriz[0][2]*matriz[1][1]*matriz[2][3]+
               matriz[2][1]*matriz[1][2]*matriz[0][3]+
               matriz[1][3]*matriz[0][1]*matriz[2][2]);
    //para ver el rango 2
    int detA4=matriz[0][0]*matriz[1][3]-(matriz[0][3]*matriz[1][0]);
    int detA5=matriz[0][1]*matriz[1][3]-(matriz[0][3]*matriz[1][1]);
    int detA6=matriz[0][2]*matriz[1][3]-(matriz[0][3]*matriz[1][2]);
    int detA7=matriz[1][0]*matriz[2][3]-(matriz[1][3]*matriz[2][0]);
    int detA8=matriz[1][1]*matriz[2][3]-(matriz[1][3]*matriz[2][1]);
    int detA9=matriz[1][2]*matriz[2][3]-(matriz[1][3]*matriz[2][2]);

    if(det1!=0){
        rangoM=3;
    }else if(det2!=0|| det3!=0|| det4!=0||det5!=0){
        rangoM=2;
    }else{
        rangoM=1;
    }

    if(detA1!=0||detA2!=0||detA3!=0){
        rangoAmp=3;
    }else if(detA4!=0||detA5!=0||detA6!=0||detA7!=0||detA8!=0||detA9!=0){
        rangoAmp=2;
    }else{
        rangoAmp=1;
    }

    if(rangoM==3&rangoAmp==3){
        cout<<"Los planos se cortan en un punto";
    }if(rangoM==2&rangoAmp==3){
        cout<<"Los planos se cortan 2 a 2";
    }if(rangoM==2&rangoAmp==2){
        cout<<"Los planos se cortan 2 a 2";
    }if(rangoM==1&&rangoAmp==2){
        cout<<"Los planos son paralelos";
    }if(rangoM==1&&rangoAmp==1){
        cout<<"Los planos son coincidentes";
    }
    //hola

}
void dosRectas(){//Juan
    int ec;
    int vec=0;
    int pun=0;
    cout<<"en que ecuacion quieres dar las rectas\n",
            cout<<"1 para vectorial,"
                  "\n2 para parametricas";
            cin>>ec;
    if(ec==1) {
        int cont = 0;
        cout<<"Ejemplo= (x,y,z)=(1,2,3)+t(4,5,6)\n";
        cout << "primera recta";
        string recta = pedirRecta();
        for (int i = 0; i < recta.length(); i++) {
            if (isdigit(recta[i])) {
                recta1[cont] = recta[i];
                suma = stoi(recta1[cont]) * 10;

                if (isdigit(recta[i + 1])) {
                    recta1[cont + 1] = recta[i + 1];
                    suma = suma + stoi(recta1[cont + 1]);
                    i++;
                } else {
                    suma = suma / 10;
                }
                if (cont < 3) {
                    punto1[pun] = suma;
                    pun++;
                } else {
                    vector1[vec] = suma;
                    vec++;
                }
                cont++;
            }
        }
        for (int i = 0; i < 3; i++) {
            cout << punto1[i] << " ";
        }
        cout << "Vector";
        for (int i = 0; i < 3; i++) {
            cout << vector1[i] << " ";
        }

        vec = 0;
        cont = 0;
        cout << "segunda recta";
        recta = pedirRecta();

        for (int i = 0; i < recta.length(); i++) {
            if (isdigit(recta[i])) {
                recta2[cont] = recta[i];
                suma = stoi(recta2[cont]);

                if (isdigit(recta[i + 1])) {
                    recta2[cont + 1] = recta[i + 1];
                    suma = suma*10 + stoi(recta2[cont + 1]);
                    i++;
                }
                if (cont < 3) {
                    punto2[pun] = suma;
                    pun++;
                } else {
                    vector2[vec] = suma;
                    vec++;
                }
                cont++;
            }

        }
    }

    else if(ec==2){
        string ec1,ec2,ec3;
        string ec4,ec5,ec6;
        cout<<"Ejemplo: \nx=1+3t\ny=1+12t\nz=12+1t\n\n";
        cout<<"Primera Recta\n";
        cout<<"x=",cin>>ec1;
        cout<<"y=",cin>>ec2;
        cout<<"z=",cin>>ec3;
        string total=ec1+"b"+ec2+"c"+ec3;
        int cont=0;
        int
                pun=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                recta1[cont] = total[i];
                suma = stoi(recta1[cont]);

                if (isdigit(total[i + 1])) {
                    recta2[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(recta2[cont + 1]);
                    i++;
                }
                if(cont%2==0){
                    punto1[pun]=suma;
                    pun++;
                }
                else{
                    vector1[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }

        vec=0;
        pun=0;

        cout<<"Segunda Recta";
        cout<<"x=",cin>>ec4;
        cout<<"y=",cin>>ec5;
        cout<<"z=",cin>>ec6;
        total=ec4+"a"+ec5+"s"+ec6;
        cont=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                recta2[cont]=total[i];
                suma = stoi(recta2[cont]);

                if (isdigit(total[i + 1])) {
                    recta2[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(recta2[cont + 1]);
                    i++;
                }

                if(cont%2==0){
                    punto2[pun]=suma;
                    pun++;
                }
                else{
                    vector2[vec]=suma;
                    vec++;
                }
                cont++;
            }

        }
        for(int i=0;i<3;i++){
            cout<<punto2[i]<<" ";
        }
        cout<<"Vector";
        for(int i=0;i<3;i++){
            cout<<vector2[i]<<" ";
        }
    }



    int mat[3][3]={vector1[0],-vector2[0],punto1[0]-punto2[0],vector1[1],-vector2[1],punto1[1]-punto2[1],vector1[2],-vector2[2],punto1[2]-punto2[2]};
    posicones2Rectas(mat);








}
void DosPlanos(){//Juan
    int ecP;
    int vectorp1[6],vectorp2[6];
    cout<<"en que ecuacion quieres los planos\n",
            cout<<"1 para vectorial,"
                  "\n2 para parametricas,"
                  "\n3 para general ",
            cin>>ecP;
    int vec=0;
    int pun=0;
    if(ecP==1){
        cout<<"Ejemplo: (1,2,3) + t(45,6,7) +s(7,8,9)\n";
        int cont = 0;
        cout<<"primer plano";

        string plano=pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                plano1[cont] = plano[i];
                suma = stoi(plano1[cont]);


                if (isdigit(plano[i + 1])) {
                    plano1[cont + 1] = plano[i + 1];
                    suma = suma*10 + stoi(plano1[cont + 1]);
                    i++;
                }

                if(cont<3){
                    punto1[cont]=suma;

                }
                else {
                    vectorp1[vec]=suma;
                    vec++;



                }
                cont++;
            }
        }

        vec=0;
        cont=0;
        cout<<"segundo plano";
        plano=pedirRecta();

        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                plano2[cont] = plano[i];
                suma = stoi(plano2[cont]);

                if (isdigit(plano[i + 1])) {
                    plano2[cont + 1] = plano[i + 1];
                    suma = suma*10 + stoi(plano2[cont + 1]);
                    i++;
                }

                if(cont<3){
                    punto2[cont]=suma;
                }
                else{
                    vectorp2[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }
    }


    else if(ecP==2){
        string ec1,ec2,ec3;
        string ec4,ec5,ec6;
        cout<<"Ejemplo: \n\nx=1+3t+2s\ny=1+12t+1s\nz=12+1t+31s\n\n";

        cout<<"Primer plano\n";
        cout<<"x=",cin>>ec1;
        cout<<"y=",cin>>ec2;
        cout<<"z=",cin>>ec3;
        string total=ec1+ec2+ec3;
        int cont=0;
        int pun=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano1[cont] = total[i];
                suma = stoi(plano1[cont]);

                if (isdigit(total[i + 1])) {
                    plano1[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(plano1[cont + 1]);
                    i++;
                }
                if(cont%3==0){
                    punto1[pun]=suma;
                    pun++;
                }
                else{
                    vectorp1[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }

        vec=0;
        cont=0;
        pun=0;
        for(int i=0;i<6;i++){
            cout<<vectorp1[i];
        }

        cout<<"Segundo plano\n ";

        cout<<"x=",cin>>ec4;
        cout<<"y=",cin>>ec5;
        cout<<"z=",cin>>ec6;
        total=ec4+ec5+ec6;
        cont=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {

                plano2[cont] = total[i];
                suma = stoi(plano2[cont]);

                if (isdigit(total[i + 1])) {
                    plano1[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(plano1[cont + 1]);
                    i++;
                }

                if(cont%3==0){
                    punto2[pun]=suma;
                    pun++;
                }
                else {
                    vectorp2[vec]=suma;
                    vec++;
                }
                cont++;
            }

        }
    }
    else if(ecP==3){
        cout<<"Ejemplo: 2x+1y+12z+3\n";
        cout<<"Primer plano";
        int cont=0;
        int pun=0;

        string plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta1[cont] = plano[i];
                suma = stoi(recta1[cont]);

                if (isdigit(plano[i + 1])) {
                    recta1[cont + 1] = plano[i + 1];
                    suma = suma*10 + stoi(recta1[cont + 1]);
                    i++;
                }


                cont++;
            }
        }
        cout<<"Segundo plano";
        cont=0;
        pun=0;
        plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta2[cont] = plano[i];
                suma = stoi(recta2[cont]);

                if (isdigit(plano[i + 1])) {
                    recta2[cont + 1] = plano[i + 1];
                    suma = suma*10 + stoi(recta2[cont + 1]);
                    i++;
                }


                cont++;
            }
        }

    }
    int a1,a2,b1,b2,c1,c2,d1,d2;
    if(ecP==3){
        a1=stoi(recta1[0]);
        b1=stoi(recta1[1]);
        c1=stoi(recta1[2]);
        d1=stoi(recta1[3]);
        a2=stoi(recta2[0]);
        b2=stoi(recta2[1]);
        c2=stoi(recta2[2]);
        d2=stoi(recta2[3]);



    }
    else {
        a1 = calcular(vectorp1[2], vectorp1[5], vectorp1[4], vectorp1[2]);
        b1 = calcular(vectorp1[4], vectorp1[1], vectorp1[0], vectorp1[5]);
        c1 = calcular(vectorp1[0], vectorp1[2], vectorp1[3], vectorp1[1]);
        d1 = (-punto1[0] * a1) - (punto1[1] * b1) - (punto1[2] * c1);


        a2 = calcular(vectorp2[2], vectorp2[5], vectorp2[4], vectorp2[2]);
        b2 = calcular(vectorp2[4], vectorp2[1], vectorp2[0], vectorp2[5]);
        c2 = calcular(vectorp2[0], vectorp2[2], vectorp2[3], vectorp2[1]);
        d2 = (-punto2[0] * a2) - (punto2[1] * b2) - (punto2[2] * c2);
    }
    int mat[2][4]={a1,b1,c1,d1,a2,b2,c2,d2};
    posiciones2Planos(mat);






}
void RectaPlano() {//Juan
    int ec;
    int vec = 0;
    int pun = 0;
    cout << "en que ecuacion quieres dar las rectas\n",
            cout << "1 para vectorial,"
                    "\n2 para parametricas,"
                    "\n3 para continua ",
            cin >> ec;
    if (ec == 1) {
        int cont = 0;

        cout << "Ejemplo= (x,y,z)=(1,2,3)+t(4,5,6)\n";
        cout << "primera recta";
        string recta = pedirRecta();
        for (int i = 0; i < recta.length(); i++) {
            if (isdigit(recta[i])) {
                recta1[cont] = recta[i];
                suma = stoi(recta1[cont]);

                if (isdigit(recta[i + 1])) {
                    recta1[cont + 1] = recta[i + 1];
                    suma = suma*10 + stoi(recta1[cont + 1]);
                    i++;
                }
                if (cont < 3) {
                    punto1[pun] = suma;
                    pun++;
                } else {
                    vector1[vec] = suma;
                    vec++;
                }
                cont++;
            }
        }
        for (int i = 0; i < 3; i++) {
            cout << punto1[i] << " ";
        }
        cout << "Vector";
        for (int i = 0; i < 3; i++) {
            cout << vector1[i] << " ";
        }
        cont = 0;
        cout << "Ejemplo: (1,2,3) + t(45,6,7) +s(7,8,9)\n";
        cout << "Plano";
        vec=0;
        string plano = pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                plano1[cont] = plano[i];
                suma = stoi(plano1[cont]);


                if (isdigit(plano[i + 1])) {
                    plano1[cont + 1] = plano[i + 1];
                    suma = suma * 10 + stoi(plano1[cont + 1]);
                    i++;
                }

                if(cont<3) {
                    punto2[cont] = suma;
                } else{
                    plano11[vec] = suma;
                    vec++;
                }
                cont++;
            }



        }
        int a1,b1,c1,d1;
        a1 = calcular(plano11[2], plano11[5], plano11[4], plano11[2]);
        b1 = calcular(plano11[4], plano11[1], plano11[0], plano11[5]);
        c1 = calcular(plano11[0], plano11[2], plano11[3], plano11[1]);
        d1 = (-punto2[0] * a1) - (punto2[1] * b1) - (punto2[2] * c1);

        int p=a1*punto1[0]+b1*punto1[1]+c1*punto1[2]+d1;
        int q=a1*vector1[0]+b1*vector1[1]+c1*vector1[2];
        if(q==0){
            if(p==0){
                cout<<"la recta esta contenida en el plano";
            }
            else{
                cout<<"La recta y el plano son paralelos";
            }
        }
        else{
            cout<<"se cortan en un punto";

        }



    } else if (ec == 2) {
        string ec1, ec2, ec3;
        string ec4, ec5, ec6;
        int vectorp1[6];
        cout << "Ejemplo: \nx=1+3t\ny=1+12t\nz=12+1t\n\n";
        cout << "Primera Recta\n";
        cout << "x=", cin >> ec1;
        cout << "y=", cin >> ec2;
        cout << "z=", cin >> ec3;
        string total = ec1 + "b" + ec2 + "c" + ec3;
        int cont = 0;
        int pun = 0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                recta1[cont] = total[i];
                suma = stoi(recta1[cont]);

                if (isdigit(total[i + 1])) {
                    recta2[cont + 1] = total[i + 1];
                    suma = suma * 10 + stoi(recta2[cont + 1]);
                    i++;
                }
                if (cont % 2 == 0) {
                    punto1[pun] = suma;
                    pun++;
                } else {
                    vector1[vec] = suma;
                    vec++;
                }
                cont++;
            }
        }

        cout<<"Ejemplo: \n\nx=1+3t+2s\ny=1+12t+1s\nz=12+1t+31s\n\n";

        cout<<"Primer plano\n";
        cout<<"x=",cin>>ec1;
        cout<<"y=",cin>>ec2;
        cout<<"z=",cin>>ec3;
        total=ec1+" "+ec2+" "+ec3+" ";
        cont=0;
        pun=0;
        vec=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano1[cont] = total[i];
                suma = stoi(plano1[cont]);

                if (isdigit(total[i + 1])) {
                    plano1[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(plano1[cont + 1]);
                    i++;
                }
                if(cont%3==0){
                    punto2[pun]=suma;
                    pun++;
                }
                else{
                    vectorp1[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }
        for(int i;i<6;i++){
            cout<<vectorp1[i];
        }





    }
    int a1,b1,c1,d1;
    a1 = calcular(plano11[2], plano11[5], plano11[4], plano11[2]);
    b1 = calcular(plano11[4], plano11[1], plano11[0], plano11[5]);
    c1 = calcular(plano11[0], plano11[2], plano11[3], plano11[1]);
    d1 = (-punto2[0] * a1) - (punto2[1] * b1) - (punto2[2] * c1);

    int p=a1*punto1[0]+b1*punto1[1]+c1*punto1[2]+d1;
    int q=a1*vector1[0]+b1*vector1[1]+c1*vector1[2];
    if(q==0){
        if(p==0){
            cout<<"la recta esta contenida en el plano";
        }
        else{
            cout<<"La recta y el plano son paralelos";
        }
    }
    else{
        cout<<"se cortan en un punto";

    }

}
void tresPlanos() {//Juan
    int ecP;
    int vectorp1[6],vectorp2[6],vectorp3[6];
    cout<<"en que ecuacion quieres los planos\n",
            cout<<"1 para vectorial,"
                  "\n2 para parametricas,"
                  "\n3 para general ",
            cin>>ecP;
    int vec=0;
    int pun=0;
    if(ecP==1){
        int cont = 0;
        cout<<"Ejemplo: (1,2,3) + t(45,6,7) +s(7,8,9)\n";
        cout<<"primer plano";


        string plano=pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {

                plano1[cont] = plano[i];
                suma = stoi(plano1[cont]);

                if (isdigit(plano[i + 1])) {
                    plano1[cont + 1] = plano[i + 1];
                    suma = suma*10 + stoi(plano1[cont + 1]);
                    i++;
                }

                if(cont<3){
                    punto1[cont]=suma;
                }
                else {
                    vectorp2[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }
        vec=0;
        cont=0;
        cout<<"segundo plano";
        plano=pedirRecta();

        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                plano2[cont] = plano[i];
                suma = stoi(plano2[cont]);

                if (isdigit(plano[i + 1])) {
                    plano2[cont + 1] = plano[i + 1];
                    suma = suma*10 + stoi(plano2[cont + 1]);
                    i++;
                }

                if(cont<3){
                    punto2[cont]=suma;
                }
                else{
                    vectorp2[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }
        cout<<"tercer plano";
        plano=pedirRecta();

        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                plano3[cont] = plano[i];
                suma = stoi(plano3[cont]);

                if (isdigit(plano[i + 1])) {
                    plano3[cont + 1] = plano[i + 1];
                    suma = suma*10 + stoi(plano3[cont + 1]);
                    i++;
                }

                if(cont<3){
                    punto3[cont]=suma;
                }
                else{
                    vectorp3[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }
    }


    else if(ecP==2){
        string ec1,ec2,ec3;
        string ec4,ec5,ec6;
        string ec7,ec8,ec9;
        cout<<"Ejemplo: \n\nx=1+3t+2s\ny=1+12t+1s\nz=12+1t+31s\n\n";

        cout<<"Primer plano\n";
        cout<<"x=",cin>>ec1;
        cout<<"y=",cin>>ec2;
        cout<<"z=",cin>>ec3;
        string total=ec1+ec2+ec3;
        int cont=0;
        int pun=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano1[cont] = total[i];
                suma = stoi(plano1[cont]);

                if (isdigit(total[i + 1])) {
                    plano1[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(plano1[cont + 1]);
                    i++;
                }
                punto1[cont];
                if(cont%3==0){
                    punto1[pun]=suma;
                    pun++;
                }
                else{
                    vectorp1[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }
        vec=0;
        pun=0;
        cout<<"Segundo plano ";
        cout<<"x=",cin>>ec4;
        cout<<"y=",cin>>ec5;
        cout<<"z=",cin>>ec6;
        total=ec4+ec5+ec6;
        cont=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano2[cont] = total[i];
                suma = stoi(plano2[cont]);

                if (isdigit(total[i + 1])) {
                    plano2[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(plano2[cont + 1]);
                    i++;
                }

                if(cont%3==0){
                    punto2[pun]=suma;
                    pun++;
                }
                else {
                    vectorp2[vec]=suma;
                    vec++;
                }
                cont++;
            }

        }
        vec=0;
        cont=0;
        pun=0;
        cout<<"Tercer plano";
        cout<<"x=",cin>>ec7;
        cout<<"y=",cin>>ec8;
        cout<<"z=",cin>>ec9;
        total=ec7+ec8+ec9;

        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano3[cont] = total[i];
                suma = stoi(plano3[cont]);

                if (isdigit(total[i + 1])) {
                    recta2[cont + 1] = total[i + 1];
                    suma = suma*10 + stoi(plano3[cont + 1]);
                    i++;
                }
                if(cont%3==0){
                    punto3[pun]=suma;
                    pun++;
                }
                else{
                    vectorp3[vec]=suma;
                    vec++;
                }
                cont++;
            }
        }


    }
    else if(ecP==3){
        cout<<"Ejemplo: 2x+1y+12z+3\n";

        cout<<"Primer plano";
        int cont=0;
        int pun=0;
        string plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta1[cont]=plano[i];
                if(isdigit(plano[i+1])){


                    recta1[cont + 1] = plano[i + 1];

                    suma=stoi(recta1[cont])*10+stoi(recta1[cont+1]);
                    plano11[cont]=suma;
                    i++;
                }
                else{
                    plano11[cont] = stoi(recta1[cont]);
                }
                cont++;
            }
        }
        cout<<"Segundo plano";
        cont=0;
        pun=0;
        suma=0;
        plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta2[cont]=plano[i];
                if(isdigit(plano[i+1])){


                    recta2[cont + 1] = plano[i + 1];

                    suma=stoi(recta2[cont])*10+stoi(recta2[cont+1]);
                    plano22[cont]=suma;
                    i++;
                }
                else{
                    plano22[cont] = stoi(recta2[cont]);
                }
                cont++;
            }
        }
        cout<<"Tercer plano";
        cont=0;
        pun=0;
        suma=0;
        int i=0;
        plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta3[cont]=plano[i];
                if(isdigit(plano[i+1])){


                    recta3[cont + 1] = plano[i + 1];

                    suma=stoi(recta3[cont])*10+stoi(recta3[cont+1]);
                    plano33[cont]=suma;
                    i++;
                }
                else{
                    plano33[cont] = stoi(recta3[cont]);
                }
                cont++;
            }
        }



    }
    int a1,a2,b1,b2,c1,c2,d1,d2,a3,b3,c3,d3;
    if(ecP==3){
        a1=plano11[0];
        b1=plano11[1];
        c1=plano11[2];
        d1=plano11[3];
        a2=plano22[0];
        b2=plano22[1];
        c2=plano22[2];
        d2=plano22[3];
        a3=plano33[0];
        b3=plano33[1];
        c3=plano33[2];
        d3=plano33[3];
        cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" "<<a2<<" "<<b2<<" "<<c2<<" "<<d2<<" "<<a3<<" "<<b3<<" "<<c3<<" "<<d3;



    }
    else {
        a1 = calcular(vectorp1[2], vectorp1[5], vectorp1[4], vectorp1[2]);
        b1 = calcular(vectorp1[4], vectorp1[1], vectorp1[0], vectorp1[5]);
        c1 = calcular(vectorp1[0], vectorp1[2], vectorp1[3], vectorp1[1]);
        d1 = (-punto1[0] * a1) - (punto1[1] * b1) - (punto1[2] * c1);


        a2 = calcular(vectorp2[2], vectorp2[5], vectorp2[4], vectorp2[2]);
        b2 = calcular(vectorp2[4], vectorp2[1], vectorp2[0], vectorp2[5]);
        c2 = calcular(vectorp2[0], vectorp2[2], vectorp2[3], vectorp2[1]);
        d2 = (-punto2[0] * a2) - (punto2[1] * b2) - (punto2[2] * c2);

        a3 = calcular(vectorp3[2], vectorp3[5], vectorp3[4], vectorp3[2]);
        b3 = calcular(vectorp3[4], vectorp3[1], vectorp3[0], vectorp3[5]);
        c3 = calcular(vectorp3[0], vectorp3[2], vectorp3[3], vectorp3[1]);
        d3 = (-punto3[0] * a3) - (punto3[1] * b3) - (punto3[2] * c3);


    }
    int mat[3][4]={a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3};
    posiciones3Planos(mat);



}
int main() {

    int n;
    cout << "1 para 2 rectas,"
            "\n2 para 2 planos,"
            "\n3 para plano y recta, "
            "\n4 para 3 planos ",
            cin >> n;

    if (n == 1) {
        dosRectas();

    } else if (n == 2) {
        DosPlanos();
    } else if (n == 3) {
        RectaPlano();
    } else if (n == 4) {
        tresPlanos();
    }
}