#include <QApplication>
#include <QPushButton>
#include "manageDialog.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    manageDialog w;
    w.show();
    return QApplication::exec();
}
