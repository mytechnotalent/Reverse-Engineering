#pragma once

#include <iostream>

/**
 * Hero class to handle basic hero information
 */
class Hero 
{
  private:
    int strength;;

  public:
    /**
     * The set_strength method to handle setting the hero strength
     * @param m_strength  Strength
     */
    void set_strength(int m_strength); 
    
    /**
     * The get_strength method to handle getting the hero strength
     * @returns strength  Strength
     */
    inline int get_strength() { return strength; }
};

