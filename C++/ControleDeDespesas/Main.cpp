#include <QtWidgets>
#include "Principal.h"

int main(int argc,char* argv[]) {

    QApplication * app = new QApplication(argc,argv);

    Principal * teste = new Principal();
    teste->show();

    app->exec();
}
