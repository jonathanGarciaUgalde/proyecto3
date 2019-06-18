//
// Created by jon on 10/06/19.
//

#include "Photos.h"



Photos::Photos()
{

}

void Photos::setAtrributes(string name, string date, string author, string description, string base64)
{
    setName(name);
    setDate(date);
    setAuthor(author);
    setDescription(description);
    setBase64(base64);
}

QJsonObject *Photos::toJsonObject()
{
    QJsonObject *jsonObj = new QJsonObject;

    QVariant name;
    QVariant date;
    QVariant author;
    QVariant description;
    QVariant base64;

    name = QString::fromStdString(this->name);
    date = QString::fromStdString(this->date);
    author = QString::fromStdString(this->author);
    description = QString::fromStdString(this->description);
    base64 = QString::fromStdString(this->base64);

    jsonObj->insert("name", QJsonValue::fromVariant(name));
    jsonObj->insert("date", QJsonValue::fromVariant(date));
    jsonObj->insert("author", QJsonValue::fromVariant(author));
    jsonObj->insert("description", QJsonValue::fromVariant(description));
    jsonObj->insert("base64", QJsonValue::fromVariant(base64));

    return jsonObj;
}

void Photos::write(QJsonObject object){
    this->name = object["name"].toString().toStdString();
    this->date = object["date"].toString().toStdString();
    this->author = object["author"].toString().toStdString();
    this->description = object["description"].toString().toStdString();
    this->base64 = object["base64"].toString().toStdString();
}


string Photos::getBase64() const
{
    return base64;
}

void Photos::setBase64(const string &value)
{
    base64 = value;
}

string Photos::getDescription() const
{
    return description;
}

void Photos::setDescription(const string &value)
{
    description = value;
}

string Photos::getAuthor() const
{
    return author;
}

void Photos::setAuthor(const string &value)
{
    author = value;
}

string Photos::getDate() const
{
    return date;
}

void Photos::setDate(const string &value)
{
    date = value;
}

string Photos::getName() const
{
    return name;
}

void Photos::setName(const string &value)
{
    name = value;
}
