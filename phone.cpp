#include<iostream>
using namespace std;
class Camera 
{
public:
    void takephoto() 
    {
        cout << "Photo clicked!\n";
    }
};
class MusicPlayer 
{
public:
    void playmusic() 
    {
        cout << "Playing music...\n";
    }
};
class Smartphone : public Camera, public MusicPlayer 
{
public:
    void showfeatures() 
    {
        takephoto();
        playmusic();
    }
};
int main() 
{
    Smartphone phone;
    phone.showfeatures();
    return 0;
}
