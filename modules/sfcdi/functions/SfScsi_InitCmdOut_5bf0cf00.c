/* Module: sfcdi.dll
   Function: SfScsi_InitCmdOut
   Address: 5bf0cf00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfScsi_InitCmdOut(struct HSFSCSIPORT__ *,struct _scsicommand *,unsigned int) */

void SfScsi_InitCmdOut(HSFSCSIPORT__ *param_1,_scsicommand *param_2,uint param_3)

{
                    /* 0xcf00  115  ?SfScsi_InitCmdOut@@YGXPAUHSFSCSIPORT__@@PAU_scsicommand@@I@Z */
  FUN_5bf0ce90(param_1,(undefined4 *)param_2,param_3);
  *(undefined4 *)(param_2 + 0x50) = 0;
  return;
}


