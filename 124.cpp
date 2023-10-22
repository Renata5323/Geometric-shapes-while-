#include <iostream>
int main() {
	using namespace std;setlocale(0, "");
	int q,p,w; char o;
	cout << "[ + ] Программа - “Геометрические фигуры”" << endl << "[ 1 ] Линия" << endl << "[ + ] Выберите фигуру: "; cin>>q;
	cout<<"[ + ] Фигура: “Линия”"<<endl<<"[ 1 ] Горизонтальная"<<endl<<"[ 2 ] Вертикальная"<<endl<<"[ + ] Выберите тип: "; cin>>p;
	cout<<"[ + ] Длина линии: "; cin>> w;cout<<"[ + ] Текстура линии: ";cin>>o;
    while (p==1){
	    cout<<"[ + ] Результат: ";
	    while(w>0){--w;
	        cout<<o;
	    }
    break;
	}
	while(p==2){
	    cout<<"[ + ] Результат: "<<endl;
	    while(w>0){--w;
	        cout<<"\t"<<o<<endl;
	    }
	    break;
	}
	
	
}
