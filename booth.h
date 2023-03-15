#pragma once

#pragma once

#ifndef _BOOTH_H_
#define _BOOTH_H_

#include <Fl/gl.h>
#include <vector>
#include<string>
#include<glm/glm.hpp>

class Booth {
private:
    GLubyte display_list;   // The display list that does all the work.
    GLuint  texture_obj;    // The object for the grass texture.
    bool    initialized;    // Whether or not we have been initialised.

public:
    // Constructor. Can't do initialization here because we are
    // created before the OpenGL context is set up.
    Booth(void) { display_list = 0; initialized = false; };

    // Destructor. Frees the display lists and texture object.
    ~Booth(void);

    // Initializer. Creates the display list.
    bool    Initialize(void);

    // Does the drawing.
    void    Draw(void);

};


#endif
