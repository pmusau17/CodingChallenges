// tvfm.h -- Tv and remote classes using a friend member 
#ifndef TVFM_H_
#define TVFM_H_


class Tv; // This is the forward declaration


class Remote
{
    public: 
        enum State{Off,On};
        enum {MinVal, MaxVal = 20};
        enum {Antenna, Cable};
        enum {TV, VCR};
    private: 
        int mode; 
    public: 
        Remote(int m = TV): mode(m) {}
        bool volup(Tv & t);
        bool voldown(Tv & t);
        void onoff(Tv & t );
        void chanup(Tv & t);
        void chandown(Tv & t);
        void set_chan(Tv & t, int c);
        void set_mode(Tv & t);
        void set_input(Tv & t);
};

class Tv
{
    private: 
        int state;          // on or off
        int volume;         // assumed to be digitized
        int maxchannel;     // maximum number of channels
        int channel;        // current channel setting
        int mode;           // broadcast or cable
        int input;          // TV or VCR
    
    public: 
        friend void Remote::set_chan(Tv & t, int c); // Remote can access tv private parts
        enum {Off,On};
        enum {MinVal, MaxVal = 20};
        enum {Antenna, Cable};
        enum {TV, VCR};

        Tv(int s = Off, int mc = 100): state(s), volume(5),maxchannel(mc),channel(2), mode(Cable), input(TV) {}
        void onoff() {state = (state == On)? Off: On;}
        bool ison() const {return state;}
        bool volup();
        bool voldown();
        void chanup();
        void chandown();
        void set_mode() {mode = (mode == Antenna)? Cable : Antenna;}
        void set_input() {input = (input == TV) ? VCR: TV;}
        void settings() const;
};


// Remote methods as inline functions 

inline bool Remote::volup(Tv & t) {return t.volup();}
inline bool Remote::voldown(Tv & t) {return t.voldown();}
inline void Remote::onoff(Tv & t ) {t.onoff();}
inline void Remote::chanup(Tv & t) {t.chanup();}
inline void Remote::chandown(Tv & t) {t.chandown();}
inline void Remote::set_mode(Tv & t) {t.set_mode();}
inline void Remote::set_input(Tv & t) {t.set_input();}
inline void Remote::set_chan(Tv & t, int c) {t.channel = c;}

#endif 