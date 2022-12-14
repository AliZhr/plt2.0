// Generated by dia2code
#ifndef STATE__INSECT__H
#define STATE__INSECT__H

#include <string>
#include <list>

namespace state {

  /// class Insect - 
  class Insect {
    // Attributes
  private:
    std::string Name;
    std::string Color;
    std::list<int> Coord;
    int Level;
    // Operations
  public:
    void Select_Insect ();
    void Update_Coord (std::list<int> coord);
    std::list<int> Get_Position ();
    std::list<std::list<int>> Possible_Placement_Insect ();
    virtual std::list<std::list<int>> Possible_Deplacement_Insect ();
    std::string GetName ();
    std::string GetColor ();
    int GetLevel ();
    void SetPosition (std::list<int> coord);
    void SetLevel (int level);
    Insect (std::string name, std::string color, std::list<int> coord, int level);
    // Setters and Getters
  };

};

#endif
