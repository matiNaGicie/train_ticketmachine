#include "train.h"

Train::Train(const QString& name, const QString& startStation, const QString& endStation, const QString& departureTime, const QString& arrivalTime, double price)
    : name(name), startStation(startStation), endStation(endStation), departureTime(departureTime), arrivalTime(arrivalTime), price(price)
{
}

QString Train::getName() const
{
    return name;
}

QString Train::getStartStation() const
{
    return startStation;
}

QString Train::getEndStation() const
{
    return endStation;
}

QString Train::getDepartureTime() const
{
    return departureTime;
}

QString Train::getArrivalTime() const
{
    return arrivalTime;
}

double Train::getPrice() const
{
    return price;
}
