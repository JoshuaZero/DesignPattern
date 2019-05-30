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
    bool printMetaInfo();
    bool getaudioData(std::string src, std::string dst);
    bool getvideoData(std::string src, std::string dst);
    bool transMP42FLV(std::string infile, std::string outfile);

protected:

private:


};


#endif //DESIGNPATTERN_CUSEALLAPI_H
