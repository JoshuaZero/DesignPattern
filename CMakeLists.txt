cmake_minimum_required(VERSION 3.12)
project(DesignPattern)

if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "FATAL In-source builds are not allowed.
        You should create a separate directory for build files.")
endif ()

if ("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    set(CMAKE_CXX_FLAGS  "-pthread -std=c++14 -O3 -g3 -Wall -fmessage-length=0 -fPIC")
else()
    set(CMAKE_CXX_FLAGS  "-pthread -std=c++14 -O0 -g3 -Wall -fmessage-length=0 -fPIC")
endif ()


aux_source_directory(${CMAKE_SOURCE_DIR}/src/Factory APP_FACTORY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/AbstractFactory APP_ABSTRACTFACT)

add_executable(DesignPattern main.cpp ${APP_FACTORY} ${APP_ABSTRACTFACT} src/AbstractFactory/CAbstractFactory.cpp src/AbstractFactory/CAbstractFactory.h src/Singleton/CSingleton.cpp src/Singleton/CSingleton.h src/Builder/CBuilder.cpp src/Builder/CBuilder.h src/Builder/CConcreteBuilder.cpp src/Builder/CConcreteBuilder.h src/Builder/CProductPart.cpp src/Builder/CProductPart.h src/Builder/CProductBuild.cpp src/Builder/CProductBuild.h src/Builder/CDirector.cpp src/Builder/CDirector.h src/Prototype/CPrototype.cpp src/Prototype/CPrototype.h src/Prototype/CConcreteProtoType.cpp src/Prototype/CConcreteProtoType.h src/Bridge/CAbstractionImp.cpp src/Bridge/CAbstractionImp.h src/Bridge/CAbstraction.cpp src/Bridge/CAbstraction.h src/Bridge/CRefinedAbstraction.cpp src/Bridge/CRefinedAbstraction.h src/Bridge/CConcreteAbstractionImpA.cpp src/Bridge/CConcreteAbstractionImpA.h src/Bridge/CConcreteAbstractionImpB.cpp src/Bridge/CConcreteAbstractionImpB.h src/Adapter/Adapter_class/CTarget_cla.cpp src/Adapter/Adapter_class/CTarget_cla.h src/Adapter/Adapter_class/CAdaptee_cla.cpp src/Adapter/Adapter_class/CAdaptee_cla.h src/Adapter/Adapter_class/CAdapter_cla.cpp src/Adapter/Adapter_class/CAdapter_cla.h src/Adapter/Adapter_object/CTarget_obj.cpp src/Adapter/Adapter_object/CTarget_obj.h src/Adapter/Adapter_object/CAdaptee_obj.cpp src/Adapter/Adapter_object/CAdaptee_obj.h src/Adapter/Adapter_object/CAdapter_obj.cpp src/Adapter/Adapter_object/CAdapter_obj.h src/Decorator/CComponent.cpp src/Decorator/CComponent.h src/Decorator/CDecorator.cpp src/Decorator/CDecorator.h src/Decorator/CConcreteComponent.cpp src/Decorator/CConcreteComponent.h src/Decorator/CConcreteDecorator.cpp src/Decorator/CConcreteDecorator.h src/Composite/CComponent_pos.cpp src/Composite/CComponent_pos.h src/Composite/CComposite.cpp src/Composite/CComposite.h src/Composite/CLeaf.cpp src/Composite/CLeaf.h src/Flyweight/CFlyweight.cpp src/Flyweight/CFlyweight.h src/Flyweight/CFlyweightFactory.cpp src/Flyweight/CFlyweightFactory.h src/Flyweight/CConcreteFlyweight.cpp src/Flyweight/CConcreteFlyweight.h src/Flyweight/CUnshareConcreteFlyweight.cpp src/Flyweight/CUnshareConcreteFlyweight.h src/Facade/CFacade.cpp src/Facade/CFacade.h src/Facade/CSubSystemA.cpp src/Facade/CSubSystemA.h src/Facade/CSubSystemB.cpp src/Facade/CSubSystemB.h src/proxy/CProxy.cpp src/proxy/CProxy.h src/proxy/CSubject.cpp src/proxy/CSubject.h src/proxy/CConcreteSubject.cpp src/proxy/CConcreteSubject.h src/Base_problem/limits/CLimits.cpp src/Base_problem/limits/CLimits.h src/Base_problem/Array/CArrayMemoryAllocate.cpp src/Base_problem/Array/CArrayMemoryAllocate.h src/Base_problem/function/CRecures.cpp src/Base_problem/function/CRecures.h src/Base_problem/FunctionPointer/CFuncPtr.cpp src/Base_problem/FunctionPointer/CFuncPtr.h src/Base_problem/ADT_stack/CStack.cpp src/Base_problem/ADT_stack/CStack.h src/Base_problem/ADT_stack/CTestStacker.cpp src/Base_problem/ADT_stack/CTestStacker.h)