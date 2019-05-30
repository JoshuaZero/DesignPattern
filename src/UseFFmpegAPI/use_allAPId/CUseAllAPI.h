//
// Created by st007 on 19-3-6.
//

#ifndef DESIGNPATTERN_CUSEALLAPI_H
#define DESIGNPATTERN_CUSEALLAPI_H


class CUseAllAPI {
public:
    CUseAllAPI();
    ~CUseAllAPI();

    void init();
    void printfLog();
    int printMetaInfo();
    int getaudioData(std::string src, std::string dst);
    int getvideoData(std::string src, std::string dst);
    int transMP42FLV(std::string infile, std::string outfile);
    int cropvideo(double starttime, double endtime, const std::string infile, const std::string outfile);
protected:

private:


};


#endif //DESIGNPATTERN_CUSEALLAPI_H
