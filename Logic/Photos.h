//
// Created by jon on 10/06/19.
//

#ifndef CE2103PROYECTO3_PHOTOS_H
#define CE2103PROYECTO3_PHOTOS_H



#include <QString>
#include <string>
#include <QJsonObject>
#include <QJsonArray>
#include <QVariant>

    using namespace std;

    class Photos
    {
    public:
        string name;
        string date;
        string author;
        string description;
        string base64;

        Photos();
        void setAtrributes(string name, string date, string author, string description, string base64);
        QJsonObject *toJsonObject();


        string getBase64() const;
        void setBase64(const string &value);
        string getDescription() const;
        void setDescription(const string &value);
        string getAuthor() const;
        void setAuthor(const string &value);
        string getDate() const;
        void setDate(const string &value);
        string getName() const;
        void setName(const string &value);

        void write(QJsonObject JsonObj);
    };




#endif //CE2103PROYECTO3_PHOTOS_H
