#include <QApplication>
#include <QSplashScreen>
#include <QLabel>


#include "app/Window.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    app.setOrganizationName("Abyssal LLC");
    app.setOrganizationDomain("abyss.com");
    app.setApplicationName("Abyss Dash");

    QPixmap pixelmap(QPixmap(":/splash.png").scaledToHeight(500));
    QSplashScreen splash(pixelmap);
    splash.show();
    app.processEvents();

    Window window;
    window.show();

    return(app.exec());
}