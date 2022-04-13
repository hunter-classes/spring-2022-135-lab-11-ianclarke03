#include <iostream>
#include "profile.h"



class Particle {
private:
  double x;  // position, 2D coordinates
  double y;
  double vx; // velocity
  double vy;
public:
  // accessor functions for the current position of the particle
  double getX();
  double getY();
  // move the particle
  void move(double dt);
  // Constructor. Called to initialize private member variables
  // when a particle object gets created
  Particle(double posx, double posy, double velx, double vely);
  // Default constructor, will assume pos=(0,0), vel=(0,0)
  Particle();
};

double Particle::getX() { 
  return x; 
}
double Particle::getY() { 
  return y; 
}
void Particle::move(double dt) {
  x += vx * dt;  y += vy * dt;
}
Particle::Particle(double posx, double posy, double velx, double vely) {
  x = posx;   y = posy;
  vx = velx;  vy = vely;
}
Particle::Particle() {
  x = 0;   y = 0;
  vx = 0;  vy = 0;
}


//-----------------------------------------------------------------------------


class Profile {
private:
    std::string username;
    std::string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(std::string usrn, std::string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    std::string getUsername();
    // Return name in the format: "displayname (@username)"
    std::string getFullName();
    // Change display name
    void setDisplayName(std::string dspn);
};




Profile::Profile(std::string usrn, std::string dspn){
  // Profile constructor for a user (initializing 
  // private variables username=usrn, displayname=dspn)
  username = usrn;   displayname = dspn;
  
}
    
Profile::Profile(){
  // Default Profile constructor (username="", displayname="")
}



std::string Profile::getUsername(){
  // Return username
  return usrn;
}


std::string Profile::getFullName(){
  // Return name in the format: "displayname (@username)"
  return (dspn + " (@" + usrn + ')');
}

void Profile::setDisplayName(){
  // Change display name
}
















int main() {
    Profile p1("marco", "Marco");    
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    std::cout << p2.getUsername() << std::endl; // tarma1
    std::cout << p2.getFullName() << std::endl; // Tarma Roving (@tarma1)
}