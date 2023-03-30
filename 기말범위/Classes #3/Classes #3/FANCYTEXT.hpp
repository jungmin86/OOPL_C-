//
//  FANCYTEXT.hpp
//  Classes #3
//
//  Created by Jungmin Kim on 2022/12/03.
//

#ifndef FANCYTEXT_hpp
#define FANCYTEXT_hpp

#include "text.hpp"
#include <stdio.h>

class FancyText: public Text {
    std::string left_bracket;
    std::string right_bracket;
    std::string connector;
public:
    FancyText(const std::string& t, const std::string& left, const std::string& right, const std::string& conn) ;
    std::string get() const override; //virtual 돼있음
    void append(const std::string& extra) override;
    
};

#endif /* FANCYTEXT_hpp */
