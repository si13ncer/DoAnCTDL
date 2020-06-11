#include "cbxitemdelegate.h"
#include <QComboBox>
#include "dslkUser.h"

ComboBoxItemDelegate::ComboBoxItemDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{
}


ComboBoxItemDelegate::~ComboBoxItemDelegate()
{
}


QWidget *ComboBoxItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    // Create the combobox and populate it
    Q_UNUSED(index);
    Q_UNUSED(option);
    QComboBox *cb = new QComboBox(parent);
    cb->addItem(QString("Đã tạo đơn"));
    cb->addItem(QString("Đang gửi"));
    cb->addItem(QString("Huỷ đơn"));
    cb->addItem(QString("Đã nhận"));
    cb->addItem(QString("Lỗi - Gửi trả"));
    if (per=="ad") // phân quyền trạng thái
    {

       cb->model()->setData(cb->model()->index(2, 0), 0, Qt::UserRole - 1);
       cb->model()->setData(cb->model()->index(3, 0), 0, Qt::UserRole - 1);
       cb->model()->setData(cb->model()->index(4, 0), 0, Qt::UserRole - 1);
    }
    else
    {
        cb->model()->setData(cb->model()->index(0, 0), 0, Qt::UserRole - 1);
        cb->model()->setData(cb->model()->index(1, 0), 0, Qt::UserRole - 1);
    }

    return cb;
}


void ComboBoxItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QComboBox *cb = qobject_cast<QComboBox *>(editor);
    Q_ASSERT(cb);
    // get the index of the text in the combobox that matches the current value of the item
    const QString currentText = index.data(Qt::EditRole).toString();
    const int cbIndex = cb->findText(currentText);
    // if it is valid, adjust the combobox
    if (cbIndex >= 0)
       cb->setCurrentIndex(cbIndex);
}


void ComboBoxItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *cb = qobject_cast<QComboBox *>(editor);
    Q_ASSERT(cb);
    model->setData(index, cb->currentText(), Qt::EditRole);
}
