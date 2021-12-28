#include "app/Window.h"
#include "AbyssDashLog.h"

Window::Window()
{
    QRect displaySize = QApplication::desktop()->screenGeometry();
    // Display the window fullscreen and bypass X11 Window Control (Allowing to show on top of Sidebar)
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
    this->showFullScreen();

    ABYSS_LOG(this->geometry().height())
    ABYSS_LOG(this->geometry().width())

    // Fixed a bug I was having when the window size would change to 100 by 200 on start up
    if(this->geometry() != displaySize)
    {
        this->resize(displaySize.width(), displaySize.height());
    }
}