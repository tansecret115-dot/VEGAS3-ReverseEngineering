/* Module: sfcdi.dll
   Function: SfScsi_ExecEx
   Address: 5bf0ca80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_ExecEx(struct HSFSCSIPORT__ *,struct _scsicommand *,unsigned int) */

int SfScsi_ExecEx(HSFSCSIPORT__ *param_1,_scsicommand *param_2,uint param_3)

{
  int iVar1;
  
                    /* 0xca80  100  ?SfScsi_ExecEx@@YGHPAUHSFSCSIPORT__@@PAU_scsicommand@@I@Z */
  iVar1 = FUN_5bf0c9c0((byte *)param_1,(byte *)param_2,param_3);
  return (uint)(-1 < iVar1);
}


