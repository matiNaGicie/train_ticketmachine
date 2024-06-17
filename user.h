#ifndef USER_H
#define USER_H

#include <QString>
#include <QStringList>
#include "train.h"

class User
{
public:
    User(const QString& username, const QString& password);
    QString getUsername() const;
    QString getPassword() const;
    void addTicket(Train* train, const QString& seat, const QString& startStation, const QString& endStation);
    QStringList getTickets() const;

private:
    QString username;
    QString password;
    QStringList tickets;
};

#endif
