#include <iostream>
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

int main() {
    std::cout << "Hello, World!" << std::endl;

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


    //Test the ffmpeg API
//    CUseAvCodec useAvcodec;
//    useAvcodec.init();
    return 0;
}