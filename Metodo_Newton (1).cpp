#include <stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

float sis2(){
	
	float jac[2][2],fun[2][1],x[2][1],det,fxj[2][1],resulta[2][1],tol1[2], tol;
	int dan, ite1, cont;
	cout<<"Dame el valor de x: ";cin>>x[0][0];
	cout<<"Dame el valor de y: ";cin>>x[1][0];
	dan=0;do{
		cout<<"\n¿Deseas poner el numero de iteraciones maximos?\n 1.Si 2.No: ";
	cin>>ite1;
	}while(ite1 >2);
switch (ite1){
case 1:
	cout<<"\n¿Cuantas iteraciones requiere?";
	cin>>cont;
for(int r=0;r<=cont;r++){
	jac[0][0]=(2*x[0][0]);
	jac[1][0]=-exp(x[0][0]);
	jac[0][1]=2*x[1][0];
	jac[1][1]=-2;
	
	fun[0][0]=(x[0][0]*x[0][0])+(x[1][0]*x[1][0])-9;
	fun[1][0]=-exp(x[0][0])-(2*x[1][0])-3;
	cout<<"\n";

    det=(jac[0][0]*jac[1][1])-(jac[0][1]*jac[1][0]);

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(j!=i){
			jac[i][j]=(-1*jac[i][j])/det;
		}
		else{
			jac[i][j]=jac[i][j]/det;
		    }
        }
    }
	        fxj[0][0]=(jac[1][1]*fun[0][0])+(jac[0][1]*fun[1][0]);
	        fxj[1][0]=(jac[1][0]*fun[0][0])+(jac[0][0]*fun[1][0]);
	cout<<"Numero de iteracion: "<<dan<<endl;
	cout<<"El valor de x= "<<x[0][0]<<endl;
	cout<<"El valor de y= "<<x[1][0]<<endl;
	cout<<"La tolerancia es: "<<tol<<endl;
	    dan++;

    	for(int i=0;i<2;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
	    if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] ){
		tol=tol1[1];
	}
	else{
		tol=tol1[0];
	}
	
	x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
       
};
break;
case 2:

do{
	jac[0][0]=(2*x[0][0]);
	jac[1][0]=-exp(x[0][0]);
	jac[0][1]=2*x[1][0];
	jac[1][1]=-2;
	
	fun[0][0]=(x[0][0]*x[0][0])+(x[1][0]*x[1][0])-9;
	fun[1][0]=-exp(x[0][0])-(2*x[1][0])-3;
	cout<<"\n";

    det=(jac[0][0]*jac[1][1])-(jac[0][1]*jac[1][0]);

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(j!=i){
			jac[i][j]=(-1*jac[i][j])/det;
		}
		else{
			jac[i][j]=jac[i][j]/det;
		    }
        }
    }
	        fxj[0][0]=(jac[1][1]*fun[0][0])+(jac[0][1]*fun[1][0]);
	        fxj[1][0]=(jac[1][0]*fun[0][0])+(jac[0][0]*fun[1][0]);
	cout<<"Numero de iteracion: "<<dan<<endl;
	cout<<"El valor de x= "<<x[0][0]<<endl;
	cout<<"El valor de y= "<<x[1][0]<<endl;
	cout<<"La tolerancia es: "<<tol<<endl;
	    dan++;

    	for(int i=0;i<2;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
	    if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] ){
		tol=tol1[1];
	}
	else{
		tol=tol1[0];
	}
	
	x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
       
}while(tol>0.00000001);
	
	getch();
break;
}
}

float sis3(){
	float jac[3][3],jacC[3][3],fun[3][1],x[3][1],det,fxj[3][1],resulta[2][1],tol1[3],tol;
	int dan, ite1, cont;
	cout<<"Dame el valor de x: ";cin>>x[0][0];
	cout<<"Dame el valor de y: ";cin>>x[1][0];
	cout<<"Dame el valor de z: ";cin>>x[2][0];
	dan=0;do{
		cout<<"\n¿Deseas poner el numero de iteraciones maximos?\n 1.Si 2.No: ";
	cin>>ite1;
}while (ite1 >2);
switch (ite1){
case 1:
	cout<<"\n¿Cuantas iteraciones requiere?";
	cin>>cont;
for(int r=0;r<=cont;r++){
	jac[0][0]=(2*x[0][0])-4;
	jac[1][0]=(x[0][0]*2)-1;
	jac[2][0]=(x[0][0]*6)-12;
	jac[0][1]=2*x[1][0];
	jac[1][1]=-12;
	jac[2][1]=2*x[1][0];
	jac[0][2]=0;
	jac[1][2]=0;
	jac[2][2]=-6*x[2][0];
	
	fun[0][0]=(x[0][0]*x[0][0])-(4*x[0][0])+(x[1][0]*x[1][0]);
	fun[1][0]=(x[0][0]*x[0][0])-(x[0][0])-(2*x[1][0])+1;
	fun[2][0]=(x[0][0]*x[0][0]*3)-(12*x[0][0])+(x[1][0]*x[1][0])-(3*x[2][0]*x[2][0])+8;

	det=(jac[0][0]*jac[1][1]*jac[2][2])+(jac[1][0]*jac[2][1]*jac[0][2])+(jac[2][0]*jac[0][1]*jac[1][2])-(jac[0][1]*jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][1]*jac[0][2])-(jac[0][0]*jac[1][2]*jac[2][1]);

	jacC[0][0]=(jac[1][1]*jac[2][2])-(jac[2][1]*jac[1][2]);
	jacC[0][1]=-1*((jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][2]));
	jacC[0][2]=(jac[1][0]*jac[2][1])-(jac[2][0]*jac[1][1]);
	jacC[1][0]=-1*((jac[0][1]*jac[2][2])-(jac[2][1]*jac[0][2]));
	jacC[1][1]=(jac[0][0]*jac[2][2])-(jac[2][0]*jac[0][2]);
	jacC[1][2]=-1*((jac[0][0]*jac[2][1])-(jac[2][0]*jac[0][1]));
	jacC[2][0]=(jac[0][1]*jac[1][2])-(jac[1][1]*jac[0][2]);
	jacC[2][1]=-1*((jac[0][0]*jac[1][2])-(jac[1][0]*jac[0][2]));
	jacC[2][2]=(jac[0][0]*jac[1][1])-(jac[1][0]*jac[0][1]);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			jacC[i][j]=(jacC[i][j])/det;
	    }
    }
		for(int i=0;i<3;i++){
			fxj[i][0]=(jacC[0][i]*fun[0][0])+(jacC[1][i]*fun[1][0])+(jacC[2][i]*fun[2][0]);
	}
 
	    cout<<"Numero de iteracion: "<<dan<<endl;
	    cout<<"\n";
		cout<<"El valor de x= "<<x[0][0]<<endl;
		cout<<"El valor de y= "<<x[1][0]<<endl;
		cout<<"El valor de z= "<<x[2][0]<<endl;
		cout<<"\n";
		cout<<"La tolerancia es: "<<tol<<endl;
		cout<<"\n";
	    dan++;
	
	for(int i=0;i<3;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
	    if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] && tol1[2]<tol1[1]){
		tol=tol1[1];
	}
	else if(tol1[1]<tol1[2] && tol1[0]<tol1[2]){
		tol=tol1[2];
	}
	else{
		tol=tol1[0];
	}
    
	x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
    x[2][0]=resulta[2][0];
       
    
};

break;
case 2:	
do{
	jac[0][0]=(2*x[0][0])-4;
	jac[1][0]=(x[0][0]*2)-1;
	jac[2][0]=(x[0][0]*6)-12;
	jac[0][1]=2*x[1][0];
	jac[1][1]=-12;
	jac[2][1]=2*x[1][0];
	jac[0][2]=0;
	jac[1][2]=0;
	jac[2][2]=-6*x[2][0];
	
	fun[0][0]=(x[0][0]*x[0][0])-(4*x[0][0])+(x[1][0]*x[1][0]);
	fun[1][0]=(x[0][0]*x[0][0])-(x[0][0])-(2*x[1][0])+1;
	fun[2][0]=(x[0][0]*x[0][0]*3)-(12*x[0][0])+(x[1][0]*x[1][0])-(3*x[2][0]*x[2][0])+8;

	det=(jac[0][0]*jac[1][1]*jac[2][2])+(jac[1][0]*jac[2][1]*jac[0][2])+(jac[2][0]*jac[0][1]*jac[1][2])-(jac[0][1]*jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][1]*jac[0][2])-(jac[0][0]*jac[1][2]*jac[2][1]);

	jacC[0][0]=(jac[1][1]*jac[2][2])-(jac[2][1]*jac[1][2]);
	jacC[0][1]=-1*((jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][2]));
	jacC[0][2]=(jac[1][0]*jac[2][1])-(jac[2][0]*jac[1][1]);
	jacC[1][0]=-1*((jac[0][1]*jac[2][2])-(jac[2][1]*jac[0][2]));
	jacC[1][1]=(jac[0][0]*jac[2][2])-(jac[2][0]*jac[0][2]);
	jacC[1][2]=-1*((jac[0][0]*jac[2][1])-(jac[2][0]*jac[0][1]));
	jacC[2][0]=(jac[0][1]*jac[1][2])-(jac[1][1]*jac[0][2]);
	jacC[2][1]=-1*((jac[0][0]*jac[1][2])-(jac[1][0]*jac[0][2]));
	jacC[2][2]=(jac[0][0]*jac[1][1])-(jac[1][0]*jac[0][1]);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			jacC[i][j]=(jacC[i][j])/det;
	    }
    }
		for(int i=0;i<3;i++){
			fxj[i][0]=(jacC[0][i]*fun[0][0])+(jacC[1][i]*fun[1][0])+(jacC[2][i]*fun[2][0]);
	}
 
	    cout<<"Numero de iteracion: "<<dan<<endl;
	    cout<<"\n";
		cout<<"El valor de x= "<<x[0][0]<<endl;
		cout<<"El valor de y= "<<x[1][0]<<endl;
		cout<<"El valor de z= "<<x[2][0]<<endl;
		cout<<"\n";
		cout<<"La tolerancia es: "<<tol<<endl;
		cout<<"\n";
	    dan++;
	
	for(int i=0;i<3;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
	    if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] && tol1[2]<tol1[1]){
		tol=tol1[1];
	}
	else if(tol1[1]<tol1[2] && tol1[0]<tol1[2]){
		tol=tol1[2];
	}
	else{
		tol=tol1[0];
	}
    
	x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
    x[2][0]=resulta[2][0];
       
    
}while(tol>0.00001);
	
	
	getch();
break;
}
}

float sis4(){
	float jac[3][3],jacC[3][3],fun[3][1],x[3][1],det,fxj[3][1],resulta[2][1],tol1[3],tol;
	int dan, ite1,cont;
	cout<<"Dame el valor de x: ";cin>>x[0][0];
	cout<<"Dame el valor de y: ";cin>>x[1][0];
	cout<<"Dame el valor de z: ";cin>>x[2][0];
	dan=0;do{
		cout<<"\n¿Deseas poner el numero de iteraciones maximos?\n 1.Si 2.No: ";
	cin>>ite1;}while (ite1 >2);
switch (ite1){
case 1:
	cout<<"\n¿Cuantas iteraciones requiere?";
	cin>>cont;
for(int r=0;r<=cont;r++){
	jac[0][0]=(4*x[0][0])-4;
	jac[1][0]=(x[0][0]*2);
	jac[2][0]=(x[0][0]*6)-12;
	jac[0][1]=2*x[1][0];
	jac[1][1]=(2*x[1][0])-2;
	jac[2][1]=2*x[1][0];
	jac[0][2]=6*x[2][0]+6;
	jac[1][2]=4*x[2][0];
	jac[2][2]=-6*x[2][0];
	
	fun[0][0]=(x[0][0]*x[0][0]*2)-(4*x[0][0])+(x[1][0]*x[1][0])+(3*x[2][0]*x[2][0])+(6*x[2][0])+2;
	fun[1][0]=(x[0][0]*x[0][0])+(x[1][0]*x[1][0])-(2*x[1][0])+(2*x[2][0]*x[2][0])-5;
	fun[2][0]=(x[0][0]*x[0][0]*3)-(12*x[0][0])+(x[1][0]*x[1][0])-(3*x[2][0]*x[2][0])+8;

	det=(jac[0][0]*jac[1][1]*jac[2][2])+(jac[1][0]*jac[2][1]*jac[0][2])+(jac[2][0]*jac[0][1]*jac[1][2])-(jac[0][1]*jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][1]*jac[0][2])-(jac[0][0]*jac[1][2]*jac[2][1]);

	jacC[0][0]=(jac[1][1]*jac[2][2])-(jac[2][1]*jac[1][2]);
	jacC[0][1]=-1*((jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][2]));
	jacC[0][2]=(jac[1][0]*jac[2][1])-(jac[2][0]*jac[1][1]);
	jacC[1][0]=-1*((jac[0][1]*jac[2][2])-(jac[2][1]*jac[0][2]));
	jacC[1][1]=(jac[0][0]*jac[2][2])-(jac[2][0]*jac[0][2]);
	jacC[1][2]=-1*((jac[0][0]*jac[2][1])-(jac[2][0]*jac[0][1]));
	jacC[2][0]=(jac[0][1]*jac[1][2])-(jac[1][1]*jac[0][2]);
	jacC[2][1]=-1*((jac[0][0]*jac[1][2])-(jac[1][0]*jac[0][2]));
	jacC[2][2]=(jac[0][0]*jac[1][1])-(jac[1][0]*jac[0][1]);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			jacC[i][j]=(jacC[i][j])/det;
	    }
    }
		for(int i=0;i<3;i++){
			fxj[i][0]=(jacC[0][i]*fun[0][0])+(jacC[1][i]*fun[1][0])+(jacC[2][i]*fun[2][0]);
	}
 
	    cout<<"Numero de iteracion: "<<dan<<endl;
	    cout<<"\n";
		cout<<"El valor de x= "<<x[0][0]<<endl;
		cout<<"El valor de y= "<<x[1][0]<<endl;
		cout<<"El valor de z= "<<x[2][0]<<endl;
		cout<<"\n";
		cout<<"La tolerancia es: "<<tol<<endl;
		cout<<"\n";
	    dan++;
	
	for(int i=0;i<3;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
	    if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] && tol1[2]<tol1[1]){
		tol=tol1[1];
	}
	else if(tol1[1]<tol1[2] && tol1[0]<tol1[2]){
		tol=tol1[2];
	}
	else{
		tol=tol1[0];
	}
    
	x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
    x[2][0]=resulta[2][0];
}
break;

case 2:
	
do{
	jac[0][0]=(4*x[0][0])-4;
	jac[1][0]=(x[0][0]*2);
	jac[2][0]=(x[0][0]*6)-12;
	jac[0][1]=2*x[1][0];
	jac[1][1]=(2*x[1][0])-2;
	jac[2][1]=2*x[1][0];
	jac[0][2]=6*x[2][0]+6;
	jac[1][2]=4*x[2][0];
	jac[2][2]=-6*x[2][0];
	
	fun[0][0]=(x[0][0]*x[0][0]*2)-(4*x[0][0])+(x[1][0]*x[1][0])+(3*x[2][0]*x[2][0])+(6*x[2][0])+2;
	fun[1][0]=(x[0][0]*x[0][0])+(x[1][0]*x[1][0])-(2*x[1][0])+(2*x[2][0]*x[2][0])-5;
	fun[2][0]=(x[0][0]*x[0][0]*3)-(12*x[0][0])+(x[1][0]*x[1][0])-(3*x[2][0]*x[2][0])+8;

	det=(jac[0][0]*jac[1][1]*jac[2][2])+(jac[1][0]*jac[2][1]*jac[0][2])+(jac[2][0]*jac[0][1]*jac[1][2])-(jac[0][1]*jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][1]*jac[0][2])-(jac[0][0]*jac[1][2]*jac[2][1]);

	jacC[0][0]=(jac[1][1]*jac[2][2])-(jac[2][1]*jac[1][2]);
	jacC[0][1]=-1*((jac[1][0]*jac[2][2])-(jac[2][0]*jac[1][2]));
	jacC[0][2]=(jac[1][0]*jac[2][1])-(jac[2][0]*jac[1][1]);
	jacC[1][0]=-1*((jac[0][1]*jac[2][2])-(jac[2][1]*jac[0][2]));
	jacC[1][1]=(jac[0][0]*jac[2][2])-(jac[2][0]*jac[0][2]);
	jacC[1][2]=-1*((jac[0][0]*jac[2][1])-(jac[2][0]*jac[0][1]));
	jacC[2][0]=(jac[0][1]*jac[1][2])-(jac[1][1]*jac[0][2]);
	jacC[2][1]=-1*((jac[0][0]*jac[1][2])-(jac[1][0]*jac[0][2]));
	jacC[2][2]=(jac[0][0]*jac[1][1])-(jac[1][0]*jac[0][1]);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			jacC[i][j]=(jacC[i][j])/det;
	    }
    }
		for(int i=0;i<3;i++){
			fxj[i][0]=(jacC[0][i]*fun[0][0])+(jacC[1][i]*fun[1][0])+(jacC[2][i]*fun[2][0]);
	}
 
	    cout<<"Numero de iteracion: "<<dan<<endl;
	    cout<<"\n";
		cout<<"El valor de x= "<<x[0][0]<<endl;
		cout<<"El valor de y= "<<x[1][0]<<endl;
		cout<<"El valor de z= "<<x[2][0]<<endl;
		cout<<"\n";
		cout<<"La tolerancia es: "<<tol<<endl;
		cout<<"\n";
	    dan++;
	
	for(int i=0;i<3;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
	    if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] && tol1[2]<tol1[1]){
		tol=tol1[1];
	}
	else if(tol1[1]<tol1[2] && tol1[0]<tol1[2]){
		tol=tol1[2];
	}
	else{
		tol=tol1[0];
	}
    
	x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
    x[2][0]=resulta[2][0];
       
    
}while(tol>0.00001);
	
	
	getch();
	return 0;
break;
}
}

float sis1(){
	float jac[2][2],fun[2][1],x[2][1],det,fxj[2][1],resulta[2][1],tol1[2],tol;
	int dan,ite1,p,con;
	cout<<"Dame el valor de x: ";cin>>x[0][0];
	cout<<"Dame el valor de y: ";cin>>x[1][0];
	dan=0;
	do{
	cout<<"\n¿Deseas poner el numero de iteraciones maximos?\n 1.Si 2.No: ";
	cin>>ite1;}while(ite1 >2);
switch (ite1){
case 1:
	cout<<"\n¿Cuantas iteraciones requiere?";
	cin>>con;
for (p=0;p<=con;p++){
	jac[0][0]=(2*x[0][0])+x[1][0];
	jac[1][0]=(x[1][0]*x[1][0])*3;
	jac[0][1]=x[0][0];
	jac[1][1]=(6*x[1][0]*x[0][0])+1;
	
	fun[0][0]=(x[0][0]*x[0][0])+(x[0][0]*x[1][0])-10;
	fun[1][0]=x[1][0]+(3*x[0][0]*x[1][0]*x[1][0])-50;

	det=(jac[0][0]*jac[1][1])-(jac[0][1]*jac[1][0]);

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(j!=i){
			jac[i][j]=(-1*jac[i][j])/det;
			
		}
		else{
			jac[i][j]=jac[i][j]/det;
		    }
        }
    }
	    fxj[0][0]=(jac[1][1]*fun[0][0])+(jac[0][1]*fun[1][0]);
	    fxj[1][0]=(jac[1][0]*fun[0][0])+(jac[0][0]*fun[1][0]);
	cout<<"\nNumero de iteracion: "<<dan<<endl;
	cout<<"\nEl valor de x= "<<x[0][0]<<endl;
	cout<<"El valor de y= "<<x[1][0]<<endl;
	cout<<"\nLa tolerancia es: "<<tol<<endl;
	    dan++;

	for(int i=0;i<2;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
        if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] ){
		tol=tol1[1];
	}
	else{
		tol=tol1[0];
	}
    x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
       
    
};

break;
case 2:	
do{
	jac[0][0]=(2*x[0][0])+x[1][0];
	jac[1][0]=(x[1][0]*x[1][0])*3;
	jac[0][1]=x[0][0];
	jac[1][1]=(6*x[1][0]*x[0][0])+1;
	
	fun[0][0]=(x[0][0]*x[0][0])+(x[0][0]*x[1][0])-10;
	fun[1][0]=x[1][0]+(3*x[0][0]*x[1][0]*x[1][0])-50;

	det=(jac[0][0]*jac[1][1])-(jac[0][1]*jac[1][0]);

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(j!=i){
			jac[i][j]=(-1*jac[i][j])/det;
			
		}
		else{
			jac[i][j]=jac[i][j]/det;
		    }
        }
    }
	    fxj[0][0]=(jac[1][1]*fun[0][0])+(jac[0][1]*fun[1][0]);
	    fxj[1][0]=(jac[1][0]*fun[0][0])+(jac[0][0]*fun[1][0]);
	cout<<"Numero de iteracion: "<<dan<<endl;
	cout<<"\nEl valor de x= "<<x[0][0]<<endl;
	cout<<"El valor de y= "<<x[1][0]<<endl;
	cout<<"\nLa tolerancia es: "<<tol<<endl;
	    dan++;

	for(int i=0;i<2;i++){
	    resulta[i][0]=x[i][0]-fxj[i][0];
	    tol1[i]=(resulta[i][0]-x[i][0])/resulta[i][0];	
        if(tol1[i]<0){
		   tol1[i]=tol1[i]*-1;
	    }
	}
	
	if(tol1[0]<tol1[1] ){
		tol=tol1[1];
	}
	else{
		tol=tol1[0];
	}
    x[0][0]=resulta[0][0];
    x[1][0]=resulta[1][0];
       
    
}while(tol>0.00001);
	
	break;
}
	getch();
	return 0;

}

int main(){
	int op4;
	do{
		int sis;
		system ("cls");
		printf ("Rosales Trujillo Daniel No. de cuenta:419085658\n");
		printf ("Martinez Zuñiga Jose Ramiro No. de cuenta:309303589\n\n\n");
	printf ("METODO DE NEWTON\n");
	printf("Eligue un sistema a resolver\n Sistema 1\n");
	printf("1. %c1(x,y)=x%c+xy-10=0\n",159,253);
	printf("2. %c2(x,y)=y+3xy%c-50\n\n",159,253);
	printf("Sistema 2\n");
	printf("1. %c1(x,y)=x%c+y%c-9=0\n",159,253,253);
	printf("2. %c2(x,y)=-e^x-2y-3",159);
	printf("\n\nSistema 3\n");
	printf("1. %c1(x,y,z)=2x%c-4x+y%c+3z%c+2=0\n",159,253,253,253);
	printf("2. %c2(x,y,z)=x%c+y%c-2y+2z%c-5=0 \n",159,253,253,253);
	printf("3. %c3(x,y,z)=3x%c-12x+y%c-3z%c+8=0 \n",159,253,253,253);
	printf("\nSistema 4\n");
	printf("1. %c1(x,y,z)=x%c-4x+y%c=0\n",159,253,253);
	printf("2. %c2(x,y,z)=x&c-x-12y+1=0\n",159,253);
	printf("3. %c3(x,y,z)=3x%c-12x+y%c-3z%c+8=0\n",159,253,253,253);
	do{
	printf("\nIngrese el sistema que quiera resolver: ");
	
	scanf("%d", &sis);
}while (sis> 4);
switch (sis){
	case 1:
		int op;
		do{
			
		system("cls");
			printf("1. %c1(x,y)=x%c+xy-10=0\n",159,253);
	printf("2. %c2(x,y)=y+3xy%c-50\n\n",159,253);
	sis1();
	do{
cout<<"\nDeseas poner otros valores iniciales \n 1.Si 2.No: ";
cin>>op;
}while(op>2);
}while (op==1);
break;
	
	case 2:
		int op1;
		do{
		system("cls");	
			printf("1. %c1(x,y)=x%c+y%c-9=0\n",159,253,253);
			printf("2. %c2(x,y)=-e^x-2y-3\n",159);
		sis2();
		do{
	cout<<"\nDeseas poner otros valores iniciales \n 1.Si 2.No: ";
	cin>>op1;}while (op1>2);
}while(op1==1);

		break;
		
	case 3:
			int op2;
			do{
			system("cls");
			printf("1. %c1(x,y,z)=2x%c-4x+y%c+3z%c+2=0\n",159,253,253,253);
			printf("2. %c2(x,y,z)=x%c+y%c-2y+2z%c-5=0 \n",159,253,253,253);
			printf("3. %c3(x,y,z)=3x%c-12x+y%c-3z%c+8=0 \n",159,253,253,253);
		sis4();do{
cout<<"\nDeseas poner otros valores iniciales \n 1.Si 2.No: ";
cin>>op2;}while (op2>2);
}while(op2==1);
break;
 case 4:
 	int op3;
 	do{
 	system("cls");
	 printf("\nSistema 4\n");
	printf("1. %c1(x,y,z)=x%c-4x+y%c=0\n",159,253,253);
	printf("2. %c2(x,y,z)=x&c-x-12y+1=0\n",159,253);
	printf("3. %c3(x,y,z)=3x%c-12x+y%c-3z%c+8=0\n",159,253,253,253);
 	sis3();do{
 	cout<<"\nDeseas poner otros valores iniciales \n 1.Si 2.No: ";
cin>>op3;}while (op3>2);
}while(op3==1);
	 break;
	
}

system ("cls");
do{
cout<<"Deseas volver al menu principal\n 1.Si 2.NO: ";
cin>>op4;}while (op4>2);
}while(op4==1);
}
