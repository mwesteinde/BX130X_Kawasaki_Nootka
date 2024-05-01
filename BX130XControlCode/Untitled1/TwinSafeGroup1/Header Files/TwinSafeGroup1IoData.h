////////////////////////////////////////////////////////////////////////////////
//! \file       TwinSafeGroup1IoData.h
//! \brief      Header file containing struct definitions for I/O alias devices
//! \ingroup    TwinSafeGroup1
//! \authors    TwinCAT 3 Safety Editor
//! \version    V1.2
//! \date       2024-04-29
//! \attention  This file was auto-generated for build. Do NOT edit manually!
////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "SafeModuleHelper.h"

NAMESPACE(TwinSafeGroup1)
{

	#pragma region StandardInputAliasDevices
	//! Struct providing input data of the corresponding standard alias devices
	struct StandardInputs
	{
		//! ..\Alias Devices\ErrorAcknowledgement.sds
		BOOL ErrorAcknowledgement;
		//! ..\Alias Devices\Run.sds
		BOOL Run;

	};
	#pragma endregion


	#pragma region StandardOutputAliasDevices
	//! Struct storing output data for the corresponding standard alias devices
	struct StandardOutputs
	{

	};
	#pragma endregion


	#pragma region SafetyInputAliasDevices
	//! Struct providing input data of the corresponding safety alias devices
	struct SafetyInputs
	{

	};
	#pragma endregion


	#pragma region SafetyOutputAliasDevices
	//! Struct storing output data for the corresponding safety alias devices
	struct SafetyOutputs
	{

	};
	#pragma endregion


	#pragma region TwinSafeGroupExchangeData
	//! Struct storing the TwinSAFE group exchange data
	struct TSGData
	{

	};
	#pragma endregion


	//! Safety project FCS symbol
	STATIC UINT32 PROJECT_CRC32_3B165594 = 0x3B165594;
	STATIC UINT32 &PROJECT_CRC32 = PROJECT_CRC32_3B165594;
	
};

