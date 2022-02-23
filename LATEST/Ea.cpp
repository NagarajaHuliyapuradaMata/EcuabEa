/*****************************************************/
/* File   : Ea.cpp                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Ea_EcuM.h"
#include "Ea_SchM.h"
#include "Ea_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Ea:
      public abstract_module
   ,  public interface_Ea_EcuM
   ,  public interface_Ea_SchM
{
   public:
      FUNC(void, EA_CODE) InitFunction   (void);
      FUNC(void, EA_CODE) DeInitFunction (void);
      FUNC(void, EA_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Ea Ea;

interface_Ea_EcuM *EcuM_Client_ptr_Ea = &Ea;
interface_Ea_SchM *SchM_Client_ptr_Ea = &Ea;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, EA_CODE) module_Ea::InitFunction(void){
}

FUNC(void, EA_CODE) module_Ea::DeInitFunction(void){
}

FUNC(void, EA_CODE) module_Ea::MainFunction(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::SetMode(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::Read(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::Write(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::Cancel(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::GetStatus(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::GetJobResult(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::InvalidateBlock(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::GetVersionInfo(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::EraseImmediateBlock(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::CbJobEndNotification(void){
}

FUNC(void, EA_CODE) class_Ea_Unused::CbJobErrorNotification(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

