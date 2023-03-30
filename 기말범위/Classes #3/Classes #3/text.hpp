//
//  text.hpp
//  Classes #3
//
//  Created by Jungmin Kim on 2022/12/03.
//

#ifndef text_hpp
#define text_hpp

#include <stdio.h>
#include <string>

class Text{
    std::string text;
public:
    Text(const std::string& t);
    virtual std::string get() const;
    virtual void append(const std::string& extra);
};

#endif /* text_hpp */
