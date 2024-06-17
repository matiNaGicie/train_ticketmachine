#include "user.h"

User::User(const QString& username, const QString& password)
    : username(username), password(password)
{
}

QString User::getUsername() const
{
    return username;
}

QString User::getPassword() const
{
    return password;
}

void User::addTicket(Train* train, const QString& seat, const QString& startStation, const QString& endStation)
{
    QString ticket = QString("Train: %1, Seat: %2, From: %3, To: %4")
                         .arg(train->getName()).arg(seat).arg(startStation).arg(endStation);
    tickets.append(ticket);
}

QStringList User::getTickets() const
{
    return tickets;
}
