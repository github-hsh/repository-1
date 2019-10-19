#include<QApplication>
#include<QWidget>
int main(int argc,chat *argv[])
{
        QApplication app(argc,argv);
        QWidget a;
	a.setWindowTitle("huashanjianfa");


        a.show()  //显示窗口 
	exec();
        return 0; 
}
//QT += core gui
