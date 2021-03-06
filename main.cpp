#include <iostream>
#include <list>
#include <ctime>
#include "./src/Factory/CProduct.h"
#include "./src/Factory/CFactory.h"
#include "./src/Factory/CConcreteProduct.h"
#include "./src/Factory/CConcreteFactory.h"

#include "./src/AbstractFactory/CAbstractFactory.h"
#include "./src/AbstractFactory/CConcreteFactoryA.h"
#include "./src/AbstractFactory/CConcreteFactoryB.h"

#include "./src/Singleton/CSingleton.h"

#include "./src/Builder/CDirector.h"
#include "./src/Builder/CConcreteBuilder.h"
#include "./src/Builder/CProductBuild.h"

#include "./src/Prototype/CPrototype.h"
#include "./src/Prototype/CConcreteProtoType.h"


#include "./src/Bridge/CAbstraction.h"
#include "./src/Bridge/CAbstractionImp.h"
#include "./src/Bridge/CRefinedAbstraction.h"
#include "./src/Bridge/CConcreteAbstractionImpA.h"
#include "./src/Bridge/CConcreteAbstractionImpB.h"

#include "./src/Adapter/Adapter_object/CAdaptee_obj.h"
#include "./src/Adapter/Adapter_object/CTarget_obj.h"
#include "./src/Adapter/Adapter_object/CAdapter_obj.h"

#include "./src/Decorator/CDecorator.h"
#include "./src/Decorator/CComponent.h"
#include "./src/Decorator/CConcreteComponent.h"
#include "./src/Decorator/CConcreteDecorator.h"


#include "./src/Composite/CComponent_pos.h"
#include "./src/Composite/CComposite.h"
#include "./src/Composite/CLeaf.h"
#include "./src/Flyweight/CFlyweightFactory.h"

#include "./src/Facade/CFacade.h"

#include "./src/proxy/CSubject.h"
#include "./src/proxy/CConcreteSubject.h"
#include "./src/proxy/CProxy.h"

#include "src/Base_problem/limits/CLimits.h"
#include "src/Base_problem/Array/CArrayMemoryAllocate.h"
#include "src/Base_problem/function/CRecures.h"
#include "src/Base_problem/FunctionPointer/CFuncPtr.h"
#include "src/Base_problem/ADT_stack/CTestStacker.h"

#include "src/Base_problem/threadpool/CThreadPool.h"

#include "src/UseFFmpegAPI/use_libavcodec/CUseAvCodec.h"

#include "src/UseCPP11New/CUseNewCPP.h"
#include "src/UseOpenCVAPI/UseVideoCapture.h"


int findnextString(const std::vector<std::vector<std::string>>::iterator& inVecIter, std::vector<std::vector<std::string>>& vec, std::vector<std::vector<std::string>>::iterator& outVecIter)
{
    vec.erase(inVecIter);
    std::vector<std::vector<std::string>>::iterator iter = vec.begin();
    for (;iter != vec.end(); iter++)
    {
        if((*iter)[0] == (*inVecIter)[0] || (*iter)[0] == (*inVecIter)[1] || (*iter)[1] == (*inVecIter)[0] || (*iter)[1] == (*inVecIter)[1])
        {
            outVecIter = iter;
            return 1;
        }

    }
    std::cout << "there is no aviable data! it connot combine one line" << std::endl;
    return 0;
}

void SplitString(const std::string& strin, std::vector<std::string>& vec, const std::string& strsplit)
{
    std::string::size_type pos1, pos2;
    pos2 = strin.find(strsplit);
    pos1 = 0;
    while(std::string::npos != pos2)
    {
        vec.push_back(strin.substr(pos1, pos2-pos1));

        pos1 = pos2 + strsplit.size();
        pos2 = strin.find(strsplit, pos1);
    }
    if(pos1 != strin.length())
        vec.push_back(strin.substr(pos1));
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    /*
    time_t  curTime;
    curTime = time(NULL);
    std::cout << curTime << std::endl;
     */
    /*

    std::string s;
    std::vector<std::string> vecstr;
    std::vector<std::vector<std::string>> vecInstr;
    std::vector<std::vector<std::string>> vecback;
    int n;
    std::cin >> n;
    std::cin.ignore();
    for(int i = 0; i < n; ++i){
        getline(std::cin, s);
        SplitString(s, vecstr, " ");
        vecInstr.push_back(vecstr);
        vecback.push_back(vecstr);
        vecstr.clear();
        //std::cout << s << std::endl;
    }

    std::list<std::vector<std::string>> liststr;
    std::vector<std::vector<std::string>>::iterator iter = vecInstr.begin();
    std::vector<std::vector<std::string>>::iterator inVeciter = vecInstr.begin();
    std::vector<std::vector<std::string>>::iterator outVeciter;
    liststr.push_back(*vecInstr.begin());
    while(outVeciter!= vecInstr.end()-1){
        int flg = findnextString(inVeciter, vecInstr, outVeciter);
        if(!flg)
            break;
        inVeciter = outVeciter;
        liststr.push_back(*outVeciter);
    }*/
    

/*
    //Test the Factory pattern
    CFactory* fac = new CConcreteFactory();
    CProduct* prt = fac->CreateProduct();
    delete prt;
    delete fac;
*/
/*
    //Test the AbstrctFactory
    CAbstractFactory* cf1 = new CConcreteFactoryA();
    cf1->CreateProductA();
    cf1->CreateProductB();

    CAbstractFactory* cf2 = new CConcreteFactoryB();
    cf2->CreateProductA();
    cf2->CreateProductB();
*/

/*
    //Test the Singleton
    CSingleton* sgn = CSingleton::Instance();
*/
/*
    //Test the Builder
    CDirector* drct = new CDirector(new CConcreteBuilder());

    drct->Construct();
*/

/*
    //Test the Prototype
    CPrototype* p = new CConcreteProtoType();
    CPrototype* pA = p->Clone();
*/

/*
    //Test the Bridge
    CAbstractionImp* AImp = new CConcreteAbstractionImpA();
    CAbstraction* Abs = new CRefinedAbstraction(AImp);
    Abs->Operation();
*/
/*
    //Test the Adapter
    CAdaptee_obj* ade_o = new CAdaptee_obj();
    CTarget_obj* adt_o = new CAdapter_obj(ade_o);
    adt_o->Request();
*/
    /*
    CAdaptee_cla* ade_c = new CAdaptee_cla();
    CTarget_cla* adt_c = bew CAdapter_cla();
    adt_c->Request();
     */
/*
    //Test the Decorator
    CComponent* com = new CConcreteComponent();
    CDecorator* dec = new CConcreteDecorator(com);
    dec->Operation();
    delete dec;
*/
/*
    //Test the Composite
    CLeaf* lf = new CLeaf();
    lf->Operation();
    CComposite* com_pos = new CComposite();
    com_pos->Add(lf);
    com_pos->Operation();
    CComponent_pos* comp = com_pos->GetChild(0);
    comp->Operation();
*/

/*
    //Test the Flyweight
    CFlyweightFactory* fc = new CFlyweightFactory();
    CFlyweight* fwA = fc->GetFlyweight("hello");
    CFlyweight* fwB = fc->GetFlyweight("world!");
    CFlyweight* fwC = fc->GetFlyweight("hello");
  */

/*
    //Test the Facade
    CFacade* fac = new CFacade();
    fac->OperationWrapper();
*/
/*
    //Test the Proxy
    CSubject* sub = new CConcreteSubject();
    CProxy* pxy = new CProxy(sub);
    pxy->Request();
*/
/*
    //Test the CLimits
    CLimits* plimit = new CLimits();
    plimit->showType();
*/
    /*
    //Test the array memery allocate
    CArrayMemoryAllocate* pArrMemAlloc = new CArrayMemoryAllocate();
    pArrMemAlloc->ShowMemAllocate();
     */
/*
    //test the recurs
    CRecures* pRecus = new CRecures();
    pRecus->countdown(7);
    pRecus->showRes();
    g<X>();
    */
/*
    //test the function pointer
    CFuncPtr* pfPtr = new CFuncPtr{};
    //pfPtr->showRes();
    pfPtr->showArfupt();
    */
/*
    //test the CTestStacker
    CTestStacker *pster = new CTestStacker();
    pster->showStacker();
    */

/*
    //test the threadpool
    CThreadPool cthpool(4);
    while(1)
    //cthpool.func();
    //auto result = cthpool.enqueue([](int answer) { return answer; }, 42);
    //std::cout << result.get() << std::endl;
    */

    //Test the connectpool

/*
    //test c++11
    CUseNewCPP temp;
    //CUseNewCPP A = CUseNewCPP(temp);
    //比上面少一次构造和析构
    CUseNewCPP && aa = CUseNewCPP(temp);
    */
//    CUseNewCPP && tempa = getCUserCPPInstance();

    //Test the ffmpeg API
//    CUseAvCodec useAvcodec;
//    useAvcodec.init();


    //Test the opencv API
   // UseVideoCapture videocap;
   // videocap.openVideo();



    return 0;
}