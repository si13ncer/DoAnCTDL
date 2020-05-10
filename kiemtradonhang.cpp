#include "kiemtradonhang.h"

KiemTraDonHang::KiemTraDonHang(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant KiemTraDonHang::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex KiemTraDonHang::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex KiemTraDonHang::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int KiemTraDonHang::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int KiemTraDonHang::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant KiemTraDonHang::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
