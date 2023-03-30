//
//  FIXEDTEXT.hpp
//  Classes #3
//
//  Created by Jungmin Kim on 2022/12/03.
//

#ifndef FIXEDTEXT_hpp
#define FIXEDTEXT_hpp

#include "text.hpp"
#include <stdio.h>


class FixedText: public Text {
public:
    FixedText();
    void append(const std::string&) override;
};

#endif /* FIXEDTEXT_hpp */
