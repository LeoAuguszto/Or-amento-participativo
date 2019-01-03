#include <iostream>
#include <locale.h>
/*
Grupo:
Leonardo Augusto
Lucas Fernandes
Augusto Lucas
	ATV_Pr�tica_01
*/
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    char continuar;
    double SRD_X_max,SRD_Y_max;
    double SRU_Y_max,SRU_X_max;
    double SRD_Y_min,SRD_X_min;
    double SRU_Y_min,SRU_X_min;
    double xu,xd,yu,yd;
    int op;


    cout<<"\t[Defina os valores]"<<endl;

		//M�XIMO E M�NIMO
        cout<<"M�ximo para as Coordenandas (SRU X): ";
            cin>>SRU_X_max;
        cout<<"M�ximo para a Coordenanda (SRU Y): ";
        	cin>>SRU_Y_max;
        cout<<"----------------------------------------"<<endl;
        cout<<"M�ximo para a Coordenanda (SRD X): ";
            cin>>SRD_X_max;
        cout<<"M�ximo para a Coordenanda (SRD Y): ";
            cin>>SRD_Y_max;
         cout<<"----------------------------------------"<<endl;
        cout<<"M�nimo para as Coordenandas (SRU X): ";
            cin>>SRU_X_min;
        cout<<"M�nimo para a Coordenanda (SRU Y): ";
        	cin>>SRU_Y_min;
        cout<<"----------------------------------------"<<endl;
        cout<<"M�nimo para a Coordenanda (SRD X): ";
            cin>>SRD_X_min;
        cout<<"M�nimo para a Coordenanda (SRD Y): ";
            cin>>SRD_Y_min;
        //FIM

		cout<<endl<<"--------------------------------------------------------------------------"<<endl;

		// CORDENADAS
		cout<<"Ponto do Universo (SRU) - Coordenanda (X): ";
            cin>>xu;
        cout<<"Ponto do Universo (SRU) - Coordenanda (Y): ";
            cin>>yu;

        cout<<"Ponto do Dispositivo (SRD) - Coordenanda (X): ";
            cin>>xd;
        cout<<"Ponto do Dispositivo (SRD) - Coordenanda (Y): ";
            cin>>yd;
         //FIM

        cout<<endl<<"--------------------------------------------------------------------------"<<endl;
        	//DO - WHILE para Loop do programa
do{
			//MENU
    cout<<"\t[Ap�s definir os valores, escolha a op��o desejada]"<<endl;
        cout<<"1-Converter valores do UNIVERSO (SRU) para DISPOSITIVO(SRD)"<<endl
            <<"2-Converter valores do DISPOSITIVO(SRD) para UNIVERSO(SRU) "<<endl;

        cout<<"Op��o:";
            cin>>op;


        if(op==1){

			   //C�LCULO PARA ACHAR O XD SEM O USO DOS M�NIMOS
			    xd=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
                cout<<"Op��o digitada["<<op<<"]"<<endl<<"C�lculo do XD"<<endl
                    <<"XD = (("<<xu<<"+"<<SRU_X_min<<")*("<<SRD_X_max<<"-"<<SRD_X_min<<")/"
					<<SRU_X_max<<"-"<<SRU_X_min<<")+"<<SRD_X_min<<endl;
                    xd=((xu-SRU_X_min)*(SRD_X_max-SRD_X_min)/(SRU_X_max-SRU_X_min))+SRD_X_min;
                        cout<<"A convers�o do UNIVERSO {"<<xu<<"} para o DISPOSITIVO �: "<<xd<<endl;

			   //C�LCULO PARA ACHAR O YD SEM O USO DOS M�NIMOS
			yd=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
	            cout<<"Op��o digitada["<<op<<"]"<<endl<<"C�lculo do YD"<<endl
	            	<<"YD = (("<<yu<<"+"<<SRU_Y_min<<")*("<<SRD_Y_min<<"-"<<SRD_Y_max<<")/"
					<<SRU_Y_max<<"-"<<SRU_Y_min<<")+"<<SRD_Y_max<<endl;
	                    yd=((yu-SRU_Y_min)*(SRD_Y_min-SRD_Y_max)/(SRU_Y_max-SRU_Y_min))+SRD_Y_max;
	                        cout<<"A convers�o do UNIVERSO {"<<yu<<"} para o DISPOSITIVO �: "<<yd<<endl;

        }
        if(op==2){

        	//C�LCULO PARA ACHAR O XU SEM O USO DOS M�NIMOS
            xu=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
                cout<<"Op��o digitada["<<op<<"]"<<endl<<"C�lculo do XU"<<endl
                	<<"XU = (("<<xd<<"+"<<SRD_X_min<<")*("<<SRU_X_max<<"-"<<SRU_X_min<<")/"
					<<SRD_X_max<<"-"<<SRD_X_min<<")+"<<SRU_X_min<<endl;
                    xu=((xd-SRD_X_min)*(SRU_X_max-SRU_X_min)/(SRD_X_max-SRD_X_min))+SRU_X_min;
                        cout<<"A convers�o do DISPOSITIVO {"<<xd<<"} para o UNIVERSO �: "<<xu<<endl;

			//C�LCULO PARA ACHAR O YU SEM O USO DOS M�NIMOS
			yu=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
	            cout<<"Op��o digitada["<<op<<"]"<<endl<<"C�lculo do YD"<<endl
	               	 	<<"YU = (("<<yd<<"+"<<SRD_Y_max<<")*("<<SRU_Y_max<<"-"<<SRU_Y_min<<")/"
						<<SRD_Y_min<<"-"<<SRD_Y_max<<")+"<<SRU_Y_min<<endl;
	                    //yu=(yd*(SRU_Y_max)/SRD_Y_max)-SRU_Y_max;
	                    yu=((yd-SRD_Y_max)*(SRU_Y_max-SRU_Y_min)/(SRD_Y_min-SRD_Y_max))+SRU_Y_min;
	                        cout<<"A convers�o do DISPOSITIVO {"<<yd<<"} para o UNIVERSO �: "<<yu<<endl;


        }


        	//FINAL DO - WHILE
    cout<<"\tDeseja continuar na aplica��o?:";
        cin>>continuar;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;

       if(continuar == 's'){
       	cout<<"Universo (SRU) - Coordenanda (X): ";
            cin>>xu;
        cout<<"Universo (SRU) - Coordenanda (Y): ";
            cin>>yu;

        cout<<"Dispositivo (SRD) - Coordenanda (X): ";
            cin>>xd;
        cout<<"Dispositivo (SRD) - Coordenanda (Y): ";
            cin>>yd;
	   }

}while(continuar =='s');
	cout<<"PROGRAMA ENCERRADO COM SUCESSO."<<endl;

return(0);
}
