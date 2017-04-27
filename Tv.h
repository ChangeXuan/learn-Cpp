//
// Created by Day on 2017/4/20.
//

#ifndef LEARNCPP_TV_H
#define LEARNCPP_TV_H

class Tv {
private:
    int state;
    int volume;
    int maxChannel;
    int channel;
    int mode;
    int input;
public:
    enum {Off,On};
    enum {minVal,maxVal=20};
    enum {Antenna,Cable};
    enum {TV,DVD};

    Tv(int s = Off,int mc = 125):
            state(s),volume(5),
            maxChannel(mc),channel(2),
            mode(Cable),input(TV){}
    void onOff() {state=(state == On)?Off:On;}
    bool isOn() const {return state == On;}
    void setMode() {mode=(mode == Antenna)?Cable:Antenna;}
    void setInput() {input=(input == TV)?DVD:TV;}
    bool volUp();
    bool volDown();
    void chanUp();
    void chanDown();
    void setting() const;
    friend class Remote;
    //因为遥控器不是电视机，遥控器也不是电视机的一部分

};

class Remote {
private:
    int mode;
public:
    Remote(int mode=Tv::TV):mode(mode){}
    void onOff(Tv &t) {t.onOff();}
    bool volUp(Tv &t) {return t.volUp();}
    bool volDown(Tv &t) {return t.volDown();}
    void chanUp(Tv &t) {t.chanUp();}
    void chanDown(Tv &t) {t.chanDown();}
    void setChannel(Tv &t,int n) {t.channel = n;}
    void setMode(Tv &t) {t.setMode();}
    void setInput(Tv &t) {t.setInput();}

};

#endif //LEARNCPP_TV_H
