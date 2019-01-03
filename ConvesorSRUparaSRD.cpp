#include <iostream>
#include <locale.h>
/*
Grupo:
Leonardo Augusto
Lucas Fernandes
Augusto Lucas
	ATV_Prática_01
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

		//MÁXIMO E MÍNIMO
        cout<<"Máximo para as Coordenandas (SRU X): ";
            cin>>SRU_X_max;
        cout<<"Máximo para a Coordenanda (SRU Y): ";
        	cin>>SRU_Y_max;
        cout<<"----------------------------------------"<<endl;
        cout<<"Máximo para a Coordenanda (SRD X): ";
            cin>>SRD_X_max;
        cout<<"Máximo para a Coordenanda (SRD Y): ";
            cin>>SRD_Y_max;
         cout<<"----------------------------------------"<<endl;
        cout<<"Mínimo para as Coordenandas (SRU X): ";
            cin>>SRU_X_min;
        cout<<"Mínimo para a Coordenanda (SRU Y): ";
        	cin>>SRU_Y_min;
        cout<<"----------------------------------------"<<endl;
        cout<<"Mínimo para a Coordenanda (SRD X): ";
            cin>>SRD_X_min;
        cout<<"Mínimo para a Coordenanda (SRD Y): ";
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
    cout<<"\t[Após definir os valores, escolha a opção desejada]"<<endl;
        cout<<"1-Converter valores do UNIVERSO (SRU) para DISPOSITIVO(SRD)"<<endl
            <<"2-Converter valores do DISPOSITIVO(SRD) para UNIVERSO(SRU) "<<endl;

        cout<<"Opção:";
            cin>>op;


        if(op==1){

			   //CÁLCULO PARA ACHAR O XD SEM O USO DOS MÍNIMOS
			    xd=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
                cout<<"Opção digitada["<<op<<"]"<<endl<<"Cálculo do XD"<<endl
                    <<"XD = (("<<xu<<"+"<<SRU_X_min<<")*("<<SRD_X_max<<"-"<<SRD_X_min<<")/"
					<<SRU_X_max<<"-"<<SRU_X_min<<")+"<<SRD_X_min<<endl;
                    xd=((xu-SRU_X_min)*(SRD_X_max-SRD_X_min)/(SRU_X_max-SRU_X_min))+SRD_X_min;
                        cout<<"A conversão do UNIVERSO {"<<xu<<"} para o DISPOSITIVO é: "<<xd<<endl;

			   //CÁLCULO PARA ACHAR O YD SEM O USO DOS MÍNIMOS
			yd=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
	            cout<<"Opção digitada["<<op<<"]"<<endl<<"Cálculo do YD"<<endl
	            	<<"YD = (("<<yu<<"+"<<SRU_Y_min<<")*("<<SRD_Y_min<<"-"<<SRD_Y_max<<")/"
					<<SRU_Y_max<<"-"<<SRU_Y_min<<")+"<<SRD_Y_max<<endl;
	                    yd=((yu-SRU_Y_min)*(SRD_Y_min-SRD_Y_max)/(SRU_Y_max-SRU_Y_min))+SRD_Y_max;
	                        cout<<"A conversão do UNIVERSO {"<<yu<<"} para o DISPOSITIVO é: "<<yd<<endl;

        }
        if(op==2){

        	//CÁLCULO PARA ACHAR O XU SEM O USO DOS MÍNIMOS
            xu=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
                cout<<"Opção digitada["<<op<<"]"<<endl<<"Cálculo do XU"<<endl
                	<<"XU = (("<<xd<<"+"<<SRD_X_min<<")*("<<SRU_X_max<<"-"<<SRU_X_min<<")/"
					<<SRD_X_max<<"-"<<SRD_X_min<<")+"<<SRU_X_min<<endl;
                    xu=((xd-SRD_X_min)*(SRU_X_max-SRU_X_min)/(SRD_X_max-SRD_X_min))+SRU_X_min;
                        cout<<"A conversão do DISPOSITIVO {"<<xd<<"} para o UNIVERSO é: "<<xu<<endl;

			//CÁLCULO PARA ACHAR O YU SEM O USO DOS MÍNIMOS
			yu=0;
            cout<<endl<<"--------------------------------------------------------------------------"<<endl;
	            cout<<"Opção digitada["<<op<<"]"<<endl<<"Cálculo do YD"<<endl
	               	 	<<"YU = (("<<yd<<"+"<<SRD_Y_max<<")*("<<SRU_Y_max<<"-"<<SRU_Y_min<<")/"
						<<SRD_Y_min<<"-"<<SRD_Y_max<<")+"<<SRU_Y_min<<endl;
	                    //yu=(yd*(SRU_Y_max)/SRD_Y_max)-SRU_Y_max;
	                    yu=((yd-SRD_Y_max)*(SRU_Y_max-SRU_Y_min)/(SRD_Y_min-SRD_Y_max))+SRU_Y_min;
	                        cout<<"A conversão do DISPOSITIVO {"<<yd<<"} para o UNIVERSO é: "<<yu<<endl;


        }


        	//FINAL DO - WHILE
    cout<<"\tDeseja continuar na aplicação?:";
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
