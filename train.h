#ifndef TRAIN_H
#define TRAIN_H

#include <QString>

class Train
{
public:
    Train(const QString& name, const QString& startStation, const QString& endStation, const QString& departureTime, const QString& arrivalTime, double price);

    QString getName() const;
    QString getStartStation() const;
    QString getEndStation() const;
    QString getDepartureTime() const;
    QString getArrivalTime() const;
    double getPrice() const;

private:
    QString name;
    QString startStation;
    QString endStation;
    QString departureTime;
    QString arrivalTime;
    double price;
};

#endif
