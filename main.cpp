#include <iostream>
#include<vector>
using namespace std;

string recta1[6], recta2[6], recta3[6];
int punto1[3], punto2[3], vector1[3], vector2[3],punto3[3],vector3[3];
string plano1[9],plano2[9],plano3;


string pedirRecta(){
    string recta;
    cin >> recta;
    return recta;
}
int calcular(int a ,int b,int c,int d){
    int resultado=a*b-c*d;
    return resultado;

}
void dosRectas(){
    int ec;
    int vec=0;
    int pun=0;
    cout<<"en que ecuacion quieres dar las rectas\n",
    cout<<"1 para vectorial,"
         "\n2 para parametricas,"
         "\n3 para continua ",
           cin>>ec;
    if(ec==1) {
        int cont = 0;
        cout<<"primera recta";
        string recta=pedirRecta();
        for (int i = 0; i < recta.length(); i++) {
            if (isdigit(recta[i])) {
                recta1[cont] = recta[i];

                if(cont<3){
                    punto1[cont]=stoi(recta1[cont]);
                }
                else{
                    vector1[vec]=stoi(recta1[cont]);
                    vec++;
                }
                cont++;
            }
        }
        vec=0;
        cont=0;
        cout<<"segunda recta";
        recta=pedirRecta();

        for (int i = 0; i < recta.length(); i++) {
            if (isdigit(recta[i])) {
                recta2[cont] = recta[i];

                if(cont<3){
                    punto2[cont]=stoi(recta2[cont]);
                }
                else{
                    vector2[vec]=stoi(recta2[cont]);
                    vec++;
                }
                cont++;
            }
        }
    }


    else if(ec==2){
        string ec1,ec2,ec3;
        string ec4,ec5,ec6;
        cout<<"Primera Recta";
        cout<<"x=",cin>>ec1;
        cout<<"y=",cin>>ec2;
        cout<<"z=",cin>>ec3;
        string total=ec1+ec2+ec3;
        int cont=0;
        int
        pun=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                recta1[cont] = total[i];
                punto1[cont];
                if(cont%2==0){
                    punto1[pun]=stoi(recta1[pun]);
                    pun++;
                }
                else{
                    vector1[vec]=stoi(recta1[cont]);
                    vec++;
                }
                cont++;
            }
        }

        vec=0;
        cont=0;
        pun=0;
        cout<<"Segunda Recta";
        cout<<"x=",cin>>ec4;
        cout<<"y=",cin>>ec5;
        cout<<"z=",cin>>ec6;
        total=ec4+ec5+ec6;
        cont=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                recta2[cont] = total[i];

                if(cont%2==0){
                    punto2[pun]=stoi(recta2[pun]);
                    pun++;
                }
                else{
                    vector2[vec]=stoi(recta2[cont]);
                    vec++;
                }
                cont++;
            }

        }
    }
    else if(ec==3){

    }


    int mat[3][3]={vector1[0],-vector2[0],punto1[0]-punto2[0],vector1[1],-vector2[1],punto1[1]-punto2[1],vector1[2],-vector2[2],punto1[2]-punto2[2]};








}

void DosPlanos(){
    int ecP;
    int x1,x2,y1,y2,z1,z2;
    int v1a,v1b,v2a,v2b,v3a,v3b;
    int vectorp1[6],vectorp2[6];
    cout<<"en que ecuacion quieres los planos\n",
            cout<<"1 para vectorial,"
                  "\n2 para parametricas,"
                  "\n3 para general ",
            cin>>ecP;
    int vec=0;
    int pun=0;
    if(ecP==1){
        int cont = 0;
        cout<<"primer plano";

        string plano=pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                plano1[cont] = plano[i];

                if(cont<3){
                    punto1[cont]=stoi(plano1[cont]);
                }
                else {
                    vectorp2[vec]=stoi(plano1[cont]);
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

                if(cont<3){
                    punto2[cont]=stoi(plano2[cont]);
                }
                else{
                    vectorp2[vec]=stoi(plano2[cont]);
                    vec++;
                }
                cont++;
            }
        }
    }


    else if(ecP==2){
        string ec1,ec2,ec3;
        string ec4,ec5,ec6;
        cout<<"Primer plano";
        cout<<"x=",cin>>ec1;
        cout<<"y=",cin>>ec2;
        cout<<"z=",cin>>ec3;
        string total=ec1+ec2+ec3;
        int cont=0;
        int pun=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano1[cont] = total[i];
                punto1[cont];
                if(cont%3==0){
                    punto1[pun]=stoi(plano1[pun]);
                    pun++;
                }
                else{
                    vectorp1[vec]=stoi(plano1[cont]);
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
        cout<<"Segundo plano ";
        cout<<"x=",cin>>ec4;
        cout<<"y=",cin>>ec5;
        cout<<"z=",cin>>ec6;
        total=ec4+ec5+ec6;
        cont=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano2[cont] = total[i];

                if(cont%3==0){
                    punto2[pun]=stoi(plano2[pun]);
                    pun++;
                }
                else {
                    vectorp2[vec]=stoi(plano2[cont]);
                    vec++;
                }
                cont++;
            }

        }
    }
    else if(ecP==3){
        cout<<"Primer plano";
        int cont=0;
        int pun=0;
        string plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta1[cont] = plano[i];


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






}
void tresPlanos() {
    int ecP;
    int x1,x2,y1,y2,z1,z2;
    int v1a,v1b,v2a,v2b,v3a,v3b;
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
        cout<<"primer plano";

        string plano=pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                plano1[cont] = plano[i];

                if(cont<3){
                    punto1[cont]=stoi(plano1[cont]);
                }
                else {
                    vectorp2[vec]=stoi(plano1[cont]);
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

                if(cont<3){
                    punto2[cont]=stoi(plano2[cont]);
                }
                else{
                    vectorp2[vec]=stoi(plano2[cont]);
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

                if(cont<3){
                    punto3[cont]=stoi(plano3[cont]);
                }
                else{
                    vectorp3[vec]=stoi(plano3[cont]);
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
        cout<<"Primer plano";
        cout<<"x=",cin>>ec1;
        cout<<"y=",cin>>ec2;
        cout<<"z=",cin>>ec3;
        string total=ec1+ec2+ec3;
        int cont=0;
        int pun=0;
        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano1[cont] = total[i];
                punto1[cont];
                if(cont%3==0){
                    punto1[pun]=stoi(plano1[pun]);
                    pun++;
                }
                else{
                    vectorp1[vec]=stoi(plano1[cont]);
                    vec++;
                }
                cont++;
            }
        }

        vec=0;
        cont=0;
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

                if(cont%3==0){
                    punto2[pun]=stoi(plano2[pun]);
                    pun++;
                }
                else {
                    vectorp2[vec]=stoi(plano2[cont]);
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
        string totalp3=ec7+ec8+ec9;

        for (int i = 0; i < total.length(); i++) {
            if (isdigit(total[i])) {
                plano3[cont] = total[i];
                punto3[cont];
                if(cont%3==0){
                    punto3[pun]=stoi(plano3[pun]);
                    pun++;
                }
                else{
                    vectorp3[vec]=stoi(plano3[cont]);
                    vec++;
                }
                cont++;
            }
        }


    }
    else if(ecP==3){
        cout<<"Primer plano";
        int cont=0;
        int pun=0;
        string plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta1[cont] = plano[i];


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


                cont++;
            }
        }
        cout<<"Tercer plano";
        int cont=0;
        int pun=0;
        string plano =pedirRecta();
        for (int i = 0; i < plano.length(); i++) {
            if (isdigit(plano[i])) {
                recta3[cont] = plano[i];


                cont++;
            }
        }

    }
    int a1,a2,b1,b2,c1,c2,d1,d2,a3,b3,c3,d3;
    if(ecP==3){
        a1=stoi(recta1[0]);
        b1=stoi(recta1[1]);
        c1=stoi(recta1[2]);
        d1=stoi(recta1[3]);
        a2=stoi(recta2[0]);
        b2=stoi(recta2[1]);
        c2=stoi(recta2[2]);
        d2=stoi(recta2[3]);
        a3=stoi(recta3[0]);
        b3=stoi(recta3[1]);
        c3=stoi(recta3[2]);
        d3=stoi(recta3[3]);



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



}








int main() {

    int n;
    cout<<"1 para 2 rectas,"
          "\n2 para 2 planos,"
          "\n3 para plano y recta, "
          "\n4 para 3 planos ",
            cin>>n;

    if(n==1){
        dosRectas();

    }
    else if(n==2){
        DosPlanos();
    }
    else if(n==3){

    }

    else if(n==4){
        tresPlanos();
    }
}