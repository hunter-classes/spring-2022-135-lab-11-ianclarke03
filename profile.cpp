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


