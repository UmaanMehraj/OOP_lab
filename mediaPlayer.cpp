#include <iostream>
using namespace std;

class MediaFile {
public:
    virtual void play() = 0;
};

class Audio : public MediaFile {
public:
    void play() {
        cout << "Playing Audio File..." << endl;
    }
};

class Video : public MediaFile {
public:
    void play() {
        cout << "Playing Video File..." << endl;
    }
};

class Image : public MediaFile {
public:
    void play() {
        cout << "Displaying Image File..." << endl;
    }
};

int main() {
    MediaFile *media[3];

    media[0] = new Audio();
    media[1] = new Video();
    media[2] = new Image();

    for(int i=0; i<3; i++) {
        media[i]->play();
        delete media[i];
    }

    return 0;
}

