#include "minimal_window.h"
#include "ui_minimal_window.h"

minimal_window::minimal_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::minimal_window)
{
    ui->setupUi(this);
}

minimal_window::~minimal_window()
{
    delete ui;
}
