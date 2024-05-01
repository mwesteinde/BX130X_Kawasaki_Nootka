////////////////////////////////////////////////////////////////////////////////
//! \file       TwinSafeGroup1.h
//! \brief      Header file of the TwinSafeGroup1 application module
//! \ingroup    TwinSafeGroup1
//! \defgroup   TwinSafeGroup1
//! \brief      Put brief description of your application module here
//! \authors    kris
//! \copyright  Put affiliation and copyright notice here
//! \version    Define version number here
//! \date       2024-04-29
//! \ingroup    Untitled1
////////////////////////////////////////////////////////////////////////////////

///\internal////////////////////////////////////////////////////////////////////
//! XML tags <...> enclosed by multiline comment markups /*...*/ are protected
//! for static code analysis. Do NOT remove or reorder any of the protected 
//! section comments defined by source code templates as safe build process may
//! fail otherwise! For further information on how to write compliant Safety C
//! user code please refer to the provided Safety C coding guidelines document!
////////////////////////////////////////////////////////////////////////////////

/*<SafeUserApplicationHFrontend>*/
#pragma once

#pragma region UserDefinedIncludes
/*<UserDefinedIncludes>*/
#include "ProjectDTS.h"     // Include your project-level data types here!
#include "ProjectLUTS.h"    // Include your project-level lookup tables here!
/*</UserDefinedIncludes>*/
#pragma endregion

#include "TwinSafeGroup1IoData.h" // Rename according to TwinSAFE group name!

#pragma region UserDefinedDefines
/*<UserDefinedDefines>*/

// Define your preprocessor constants here!

/*</UserDefinedDefines>*/
#pragma endregion

NAMESPACE(TwinSafeGroup1) // Rename according to TwinSAFE group name!
{

    #pragma region UserDefinesTypes
    /*<UserDefinedTypes>*/

    // Define your custom data types here!

    /*</UserDefinedTypes>*/
    #pragma endregion

    ////////////////////////////////////////////////////////////////////////////
    //! \class      TwinSafeGroup1
    //! \brief      Declaration of the Safety C user application module class
    //! \details    Put detailed description of your module functionality here
    ////////////////////////////////////////////////////////////////////////////
    SAFE_MODULE(TwinSafeGroup1) // Rename according to TwinSAFE group name!
    {

    // Public module interface
    PUBLIC:
        VOID Init();         //!< Runtime module initialization function
        VOID InputUpdate();  //!< Runtime module input update function
        VOID OutputUpdate(); //!< Runtime module output update function
        VOID CycleUpdate();  //!< Runtime module cycle update function

        SafetyInputs sSafetyInputs;       //!< Data structs for safe inputs
        SafetyOutputs sSafetyOutputs;     //!< Data structs for safe outputs
        StandardInputs sStandardInputs;   //!< Data structs for non-safe inputs
        StandardOutputs sStandardOutputs; //!< Data structs for non-safe outputs

        safeUINT16 u16SafeTimer; //!< Safe external hardware timer input (in ms)

        TSGData sTSGData; //!< I/O data struct for TwinSAFE group exchange data

    // Module internals
    PRIVATE:

        #pragma region UserDefinedVariables
        /*<UserDefinedVariables>*/

        // Declare your internal module variables here!

        /*</UserDefinedVariables>*/
        #pragma endregion

        #pragma region UserDefinedFunctions
        /*<UserDefinedFunctions>*/

        // Declare your internal module functions here!
        VOID StartUpChecks();

        /*</UserDefinedFunctions>*/
        #pragma endregion

        SAFE_MODULE_EXPORT();
    };

    //! Reference to project FCS symbol
    extern UINT32 SAFETY_PROJECT_FCS; // Do NOT read, write or remove!

};
/*</SafeUserApplicationHFrontend>*/
