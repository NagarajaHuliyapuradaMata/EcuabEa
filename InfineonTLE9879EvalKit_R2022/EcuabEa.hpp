#pragma once
/******************************************************************************/
/* File   : EcuabEa.hpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabEa.hpp"
#include "CfgEcuabEa.hpp"
#include "EcuabEa_core.hpp"
#include "infEcuabEa_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabEa:
      INTERFACES_EXPORTED_ECUABEA
      public abstract_module
   ,  public class_EcuabEa_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabEa_Type* lptrConst = (ConstEcuabEa_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABEA_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABEA_CONST,       ECUABEA_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABEA_CONFIG_DATA, ECUABEA_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABEA_CODE) DeInitFunction (void);
      FUNC(void, ECUABEA_CODE) MainFunction   (void);
      ECUABEA_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_EcuabEa, ECUABEA_VAR) EcuabEa;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

