#include<QApplication>
#include<QWidget>
int main(int argc,chat *argv[])
{
        QApplication app(argc,argv);
        QWidget a;
	a.setWindowTitle("huashanjianfa");
        a.show()  //如果没有，无法弹出窗口 
	exec();
        return 0; 
}
//QT += core gui
