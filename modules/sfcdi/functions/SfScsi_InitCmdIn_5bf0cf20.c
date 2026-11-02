/* Module: sfcdi.dll
   Function: SfScsi_InitCmdIn
   Address: 5bf0cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfScsi_InitCmdIn(struct HSFSCSIPORT__ *,struct _scsicommand *,unsigned int) */

void SfScsi_InitCmdIn(HSFSCSIPORT__ *param_1,_scsicommand *param_2,uint param_3)

{
                    /* 0xcf20  114  ?SfScsi_InitCmdIn@@YGXPAUHSFSCSIPORT__@@PAU_scsicommand@@I@Z */
  FUN_5bf0ce90(param_1,(undefined4 *)param_2,param_3);
  *(undefined4 *)(param_2 + 0x50) = 1;
  return;
}


