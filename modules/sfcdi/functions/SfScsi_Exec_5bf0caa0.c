/* Module: sfcdi.dll
   Function: SfScsi_Exec
   Address: 5bf0caa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_Exec(struct HSFSCSIPORT__ *,struct _scsicommand *) */

int SfScsi_Exec(HSFSCSIPORT__ *param_1,_scsicommand *param_2)

{
  int iVar1;
  
                    /* 0xcaa0  99  ?SfScsi_Exec@@YGHPAUHSFSCSIPORT__@@PAU_scsicommand@@@Z */
  iVar1 = SfScsi_ExecEx(param_1,param_2,3);
  return iVar1;
}


