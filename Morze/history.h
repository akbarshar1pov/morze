#ifndef HISTORY_H
#define HISTORY_H

#include <QMainWindow>

namespace Ui {
class history;
}

class history : public QMainWindow
{
    Q_OBJECT

public:
    explicit history(QWidget *parent = nullptr);
    ~history();

private slots:
    void on_sorted_clicked();
    void parsHistory();
    void on_data_of_translates_activated(int index);

private:
    Ui::history *ui;
};

#endif // HISTORY_H
