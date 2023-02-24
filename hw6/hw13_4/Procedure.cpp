//
// Created by noah holt on 2/24/23.
//

#include <iostream>
#include <string>

#include "Procedure.h"

using namespace std;

Procedure::Procedure(string whatsHappening, string today, string whatsUpDoc, double money)
{
    procedureName = whatsHappening;
    date = today;
    doctorName = whatsUpDoc;
    charge = money;
}

#pragma region setters

void Procedure::setProcedureName(string whatsHappeing)
{
    procedureName = whatsHappeing;
}

void Procedure::setDate(string today)
{
    date = today;
}

void Procedure::setDoctorName(string whatsUpDoc)
{
    doctorName = whatsUpDoc;
}

void Procedure::setCharge(double money)
{
    charge = money;
}
#pragma endregion

#pragma region getters

string Procedure::getProcedureName()
{
    return procedureName;
}

string Procedure::getDate()
{
    return date;
}

string Procedure::getDoctorName()
{
    return doctorName;
}

double Procedure::getCharge()
{
    return charge;
}

#pragma endregion
