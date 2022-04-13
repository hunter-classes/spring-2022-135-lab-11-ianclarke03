#include <iostream>
#include "profile.h"

Profile::Profile(std::string usrn, std::string dspn){
  // Profile constructor for a user (initializing 
  // private variables username=usrn, displayname=dspn)
  username = usrn;   displayname = dspn;
  
}
    
Profile::Profile(){
  // Default Profile constructor (username="", displayname="")
  username = "";
  displayname = "";
}



std::string Profile::getUsername(){
  // Return username
  return username;
}


std::string Profile::getFullName(){
  // Return name in the format: "displayname (@username)"
  return (displayname + " (@" + username + ')');
}

void Profile::setDisplayName(std::string newName){
  // Change display name
  displayname = newName;
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