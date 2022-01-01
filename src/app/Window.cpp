#include "app/Window.h"
#include "AbyssDashLog.h"

// Debug Application Widget / Window
DebugWindow::DebugWindow(const QSize& size)
{
    this->resize(size);
}

DebugWindow::DebugWindow(const int& width, const int& height)
{
    this->resize(width, height);
}

// Main Application Window

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

    // Setting up Debugging Window

}

void Window::keyPressEvent(QKeyEvent* event)
{
    switch (event->key())
    {
        case Qt::Key_F10:
            ABYSS_LOG("F10 Key was Pressed!")
            return event->accept();

        case Qt::Key_F9:
            ABYSS_LOG("F9 Key was Pressed!");
            return event->accept();

        case Qt::Key_Insert:
            ABYSS_LOG("Insert Key was Pressed!");
            return event->accept();

        case Qt::Key_Escape:
            ABYSS_LOG("Escape Key was Pressed!");
            event->accept();
            this->close();
    
        default:
            break;
    }
}

void Window::keyReleaseEvent(QKeyEvent* event)
{
    if(event->key() == Qt::Key_F10)
    {
        ABYSS_LOG("Key F10 Released!")
    }
}

void Window::closeEvent(QCloseEvent* event)
{
    // Closing Code Here
    ABYSS_LOG("Window is Closing!")
}