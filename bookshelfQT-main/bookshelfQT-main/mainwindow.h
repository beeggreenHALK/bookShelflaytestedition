#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
#include <QListWidgetItem>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_addBShelf_clicked();

    void on_listWidget_BShelfs_itemClicked(QListWidgetItem *item);

    void on_pushButton_addSelf_clicked();

    void on_listWidget_Shelfs_itemClicked(QListWidgetItem *item);

    void on_pushButton_addBook_clicked();

    void on_listWidget_Books_itemClicked(QListWidgetItem *item);

    void on_pushButton_delBShelf_clicked();

    void on_pushButton_delShelf_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
    vector<BookShelf> bookShelfs;//Шкафы
    int bShelfID;
    int shelfID;
    int bookID;
    void updateBookList();
};
#endif // MAINWINDOW_H
