//
// Created by st007 on 19-4-3.
//

#ifndef DESIGNPATTERN_USEVIDEOCAPTURE_H
#define DESIGNPATTERN_USEVIDEOCAPTURE_H

#include "opencv2/core.hpp"

class UseVideoCapture {
public:
    UseVideoCapture();
    virtual ~UseVideoCapture();

    int openVideo();
protected:

private:
    int drawText(cv::Mat &image);

};


#endif //DESIGNPATTERN_USEVIDEOCAPTURE_H
