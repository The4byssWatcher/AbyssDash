#include <QMainWindow>
#include <QtWidgets>


class AbyssDash : public QWidget
{
    Q_OBJECT;
public:
    AbyssDash();
};

class DebugWindow : public QWidget
{
    Q_OBJECT;
public:
    DebugWindow(const QSize& size);
    DebugWindow(const int& width, const int& height);
};


class Window : public QMainWindow
{
    Q_OBJECT;

public:
    Window();


protected:
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);
    void closeEvent(QCloseEvent* event);
};