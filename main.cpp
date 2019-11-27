#include "login.h"
#include "connexions.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LOGIN w;
    Connexions c;
    if(c.ouvrirConnexion()){
    w.show();
    }
    return a.exec();
}
