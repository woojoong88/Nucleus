/*
 * Copyright 2019-present, Infosys Limited.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __SUBS_DATAGROUPMANAGER__
#define __SUBS_DATAGROUPMANAGER__
/**************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/ctxtManagerTmpls/subsDataGroupManager.h.tt>
 ***************************************/
#include <unordered_map>
#include <mutex>
#include "dataGroupManager.h"

#include "contextManager/dataBlocks.h"
#include "contextManager/uEContextManager.h"
#include "contextManager/mmContextManager.h"
#include "contextManager/sessionContextManager.h"
#include "contextManager/bearerContextManager.h"
#include "contextManager/mmeProcedureCtxtManager.h"
#include "contextManager/mmeAttachProcedureCtxtManager.h"
#include "contextManager/mmeDetachProcedureCtxtManager.h"
#include "contextManager/mmeS1RelProcedureCtxtManager.h"
#include "contextManager/mmeSvcReqProcedureCtxtManager.h"
#include "contextManager/mmeTauProcedureCtxtManager.h"
#include "contextManager/s1HandoverProcedureContextManager.h"
#include "contextManager/mmeErabModIndProcedureCtxtManager.h"
namespace mme
{	
	class SubsDataGroupManager:public cmn::DGM::DataGroupManager
	{
		public:
		
			/******************************************
			* Instance 
			*    Creates static instance for the SubsDataGroupManager
			*******************************************/
			static SubsDataGroupManager* Instance();
	
			/****************************************
			* SubsDataGroupManager
			*    Destructor
			****************************************/
			virtual ~SubsDataGroupManager();
			
			/******************************************
			* initialize
			* Initializes control block and pool managers
			******************************************/
			void initialize();

			/******************************************
			 * getUEContext
			 * Get UEContext data block
			 ******************************************/
			UEContext* getUEContext();
			
			/******************************************
			 * deleteUEContext
			 *  Delete a UEContext data block
			 ******************************************/
			void deleteUEContext(UEContext* UEContextp );
			/******************************************
			 * getMmContext
			 * Get MmContext data block
			 ******************************************/
			MmContext* getMmContext();
			
			/******************************************
			 * deleteMmContext
			 *  Delete a MmContext data block
			 ******************************************/
			void deleteMmContext(MmContext* MmContextp );
			/******************************************
			 * getSessionContext
			 * Get SessionContext data block
			 ******************************************/
			SessionContext* getSessionContext();
			
			/******************************************
			 * deleteSessionContext
			 *  Delete a SessionContext data block
			 ******************************************/
			void deleteSessionContext(SessionContext* SessionContextp );
			/******************************************
			 * getBearerContext
			 * Get BearerContext data block
			 ******************************************/
			BearerContext* getBearerContext();
			
			/******************************************
			 * deleteBearerContext
			 *  Delete a BearerContext data block
			 ******************************************/
			void deleteBearerContext(BearerContext* BearerContextp );
			/******************************************
			 * getMmeProcedureCtxt
			 * Get MmeProcedureCtxt data block
			 ******************************************/
			MmeProcedureCtxt* getMmeProcedureCtxt();
			
			/******************************************
			 * deleteMmeProcedureCtxt
			 *  Delete a MmeProcedureCtxt data block
			 ******************************************/
			void deleteMmeProcedureCtxt(MmeProcedureCtxt* MmeProcedureCtxtp );
			/******************************************
			 * getMmeAttachProcedureCtxt
			 * Get MmeAttachProcedureCtxt data block
			 ******************************************/
			MmeAttachProcedureCtxt* getMmeAttachProcedureCtxt();
			
			/******************************************
			 * deleteMmeAttachProcedureCtxt
			 *  Delete a MmeAttachProcedureCtxt data block
			 ******************************************/
			void deleteMmeAttachProcedureCtxt(MmeAttachProcedureCtxt* MmeAttachProcedureCtxtp );
			/******************************************
			 * getMmeDetachProcedureCtxt
			 * Get MmeDetachProcedureCtxt data block
			 ******************************************/
			MmeDetachProcedureCtxt* getMmeDetachProcedureCtxt();
			
			/******************************************
			 * deleteMmeDetachProcedureCtxt
			 *  Delete a MmeDetachProcedureCtxt data block
			 ******************************************/
			void deleteMmeDetachProcedureCtxt(MmeDetachProcedureCtxt* MmeDetachProcedureCtxtp );
			/******************************************
			 * getMmeS1RelProcedureCtxt
			 * Get MmeS1RelProcedureCtxt data block
			 ******************************************/
			MmeS1RelProcedureCtxt* getMmeS1RelProcedureCtxt();
			
			/******************************************
			 * deleteMmeS1RelProcedureCtxt
			 *  Delete a MmeS1RelProcedureCtxt data block
			 ******************************************/
			void deleteMmeS1RelProcedureCtxt(MmeS1RelProcedureCtxt* MmeS1RelProcedureCtxtp );
			/******************************************
			 * getMmeSvcReqProcedureCtxt
			 * Get MmeSvcReqProcedureCtxt data block
			 ******************************************/
			MmeSvcReqProcedureCtxt* getMmeSvcReqProcedureCtxt();
			
			/******************************************
			 * deleteMmeSvcReqProcedureCtxt
			 *  Delete a MmeSvcReqProcedureCtxt data block
			 ******************************************/
			void deleteMmeSvcReqProcedureCtxt(MmeSvcReqProcedureCtxt* MmeSvcReqProcedureCtxtp );
			/******************************************
			 * getMmeTauProcedureCtxt
			 * Get MmeTauProcedureCtxt data block
			 ******************************************/
			MmeTauProcedureCtxt* getMmeTauProcedureCtxt();
			
			/******************************************
			 * deleteMmeTauProcedureCtxt
			 *  Delete a MmeTauProcedureCtxt data block
			 ******************************************/
			void deleteMmeTauProcedureCtxt(MmeTauProcedureCtxt* MmeTauProcedureCtxtp );
			/******************************************
			 * getS1HandoverProcedureContext
			 * Get S1HandoverProcedureContext data block
			 ******************************************/
			S1HandoverProcedureContext* getS1HandoverProcedureContext();
			
			/******************************************
			 * deleteS1HandoverProcedureContext
			 *  Delete a S1HandoverProcedureContext data block
			 ******************************************/
			void deleteS1HandoverProcedureContext(S1HandoverProcedureContext* S1HandoverProcedureContextp );
			/******************************************
			 * getMmeErabModIndProcedureCtxt
			 * Get MmeErabModIndProcedureCtxt data block
			 ******************************************/
			MmeErabModIndProcedureCtxt* getMmeErabModIndProcedureCtxt();
			
			/******************************************
			 * deleteMmeErabModIndProcedureCtxt
			 *  Delete a MmeErabModIndProcedureCtxt data block
			 ******************************************/
			void deleteMmeErabModIndProcedureCtxt(MmeErabModIndProcedureCtxt* MmeErabModIndProcedureCtxtp );
			
			/******************************************
			* addimsikey
			* Add a imsi as key and cb index as value to imsi_cb_id_map
			******************************************/
			int addimsikey( DigitRegister15 key, int cb_index );
			
			/******************************************
			* deleteimsikey
			* delete a imsi key from imsi_cb_id_map
			******************************************/		
			int deleteimsikey( DigitRegister15 key );
			
			/******************************************
			* sizeimsiKeyMap
			* size of imsi_cb_id_map
			******************************************/		
			int sizeImsiKeyMap();
			
			/******************************************
			* findCBWithimsi
			* Find cb with given imsi from imsi_cb_id_map
			******************************************/	
			int findCBWithimsi( DigitRegister15 key );
			/******************************************
			* addmTmsikey
			* Add a mTmsi as key and cb index as value to mTmsi_cb_id_map
			******************************************/
			int addmTmsikey( uint32_t key, int cb_index );
			
			/******************************************
			* deletemTmsikey
			* delete a mTmsi key from mTmsi_cb_id_map
			******************************************/		
			int deletemTmsikey( uint32_t key );
			
			/******************************************
			* sizemTmsiKeyMap
			* size of mTmsi_cb_id_map
			******************************************/		
			int sizeMTmsiKeyMap();
			
			/******************************************
			* findCBWithmTmsi
			* Find cb with given mTmsi from mTmsi_cb_id_map
			******************************************/	
			int findCBWithmTmsi( uint32_t key );
			
			
		private:
			
			/****************************************
			* SubsDataGroupManager
			*    Private constructor
			****************************************/
			SubsDataGroupManager();
			
			/****************************************
			* UEContext Pool Manager
			****************************************/
			UEContextManager* UEContextManagerm_p;
			
			/****************************************
			* MmContext Pool Manager
			****************************************/
			MmContextManager* MmContextManagerm_p;
			
			/****************************************
			* SessionContext Pool Manager
			****************************************/
			SessionContextManager* SessionContextManagerm_p;
			
			/****************************************
			* BearerContext Pool Manager
			****************************************/
			BearerContextManager* BearerContextManagerm_p;
			
			/****************************************
			* MmeProcedureCtxt Pool Manager
			****************************************/
			MmeProcedureCtxtManager* MmeProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeAttachProcedureCtxt Pool Manager
			****************************************/
			MmeAttachProcedureCtxtManager* MmeAttachProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeDetachProcedureCtxt Pool Manager
			****************************************/
			MmeDetachProcedureCtxtManager* MmeDetachProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeS1RelProcedureCtxt Pool Manager
			****************************************/
			MmeS1RelProcedureCtxtManager* MmeS1RelProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeSvcReqProcedureCtxt Pool Manager
			****************************************/
			MmeSvcReqProcedureCtxtManager* MmeSvcReqProcedureCtxtManagerm_p;
			
			/****************************************
			* MmeTauProcedureCtxt Pool Manager
			****************************************/
			MmeTauProcedureCtxtManager* MmeTauProcedureCtxtManagerm_p;
			
			/****************************************
			* S1HandoverProcedureContext Pool Manager
			****************************************/
			S1HandoverProcedureContextManager* S1HandoverProcedureContextManagerm_p;
			
			/****************************************
			* MmeErabModIndProcedureCtxt Pool Manager
			****************************************/
			MmeErabModIndProcedureCtxtManager* MmeErabModIndProcedureCtxtManagerm_p;
			
			
			/****************************************
			* imsi Key Map
			****************************************/
			std::unordered_map<DigitRegister15, int , DigitRegister15Hash> imsi_cb_id_map;
			
			/****************************************
			* imsi Key Map
			****************************************/
			std::mutex imsi_cb_id_map_mutex;
			/****************************************
			* mTmsi Key Map
			****************************************/
			std::unordered_map<uint32_t,int> mTmsi_cb_id_map;
			
			/****************************************
			* mTmsi Key Map
			****************************************/
			std::mutex mTmsi_cb_id_map_mutex;
	};
};

#endif
