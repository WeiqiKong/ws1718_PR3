//
// Created by gravis on 25.12.17.
//

#ifndef UEB_9_TEILNEHMER_H
#define UEB_9_TEILNEHMER_H
#define Ende 99

#include <string>

using std::string;

class Teilnehmer {
private:
    int pos;
public:
    Teilnehmer();

    virtual void Move() = 0;

    virtual void PrintRoad() = 0;

    virtual ~Teilnehmer();

    int getPos() const;

    void setPos(int pos);
};

class Igel : public Teilnehmer {
    virtual void Move();

    virtual void PrintRoad();
};

class Hase : public Teilnehmer {
    virtual void Move();

    virtual void PrintRoad();

    int getRandomNum();
};

#endif //UEB_9_TEILNEHMER_H
