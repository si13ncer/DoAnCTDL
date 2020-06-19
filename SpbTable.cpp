#include "SpbTable.h"

SpinBoxTable::SpinBoxTable(QObject *parent)
    :QItemDelegate(parent)
{
}

QWidget *SpinBoxTable::createEditor(QWidget *parent,
        const QStyleOptionViewItem &option,
        const QModelIndex &index) const
{
    Q_UNUSED(index);
    Q_UNUSED(option);
    QSpinBox *Spb = new QSpinBox(parent);
    Spb->setMinimum(1);
    Spb->setMaximum(999);
    return Spb;
}

void SpinBoxTable::setEditorData(QWidget *Spb,
        const QModelIndex &index) const
{
    int value = index.model()->data(index, Qt::EditRole).toInt();

    QSpinBox *doubleSpinBox = static_cast<QSpinBox*>(Spb);
    doubleSpinBox->setValue(value);
}

void SpinBoxTable::setModelData(QWidget *Spb, QAbstractItemModel *model,
        const QModelIndex &index) const
{
    QSpinBox *doubleSpinBox = static_cast<QSpinBox*>(Spb);
    doubleSpinBox->interpretText();
    int value = doubleSpinBox->value();

    model->setData(index, value, Qt::EditRole);
}

void SpinBoxTable::updateEditorGeometry(QWidget *Spb,
        const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    Q_UNUSED(option);
    Spb->setGeometry(option.rect);
}
