/* Module: sfcdi.dll
   Function: SfScsi_ExecWithErrHandler
   Address: 5bf0cac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfScsi_ExecWithErrHandler(struct HSFSCSIPORT__ *,struct _scsicommand *) */

long SfScsi_ExecWithErrHandler(HSFSCSIPORT__ *param_1,_scsicommand *param_2)

{
  int iVar1;
  
                    /* 0xcac0  101
                       ?SfScsi_ExecWithErrHandler@@YGJPAUHSFSCSIPORT__@@PAU_scsicommand@@@Z */
  iVar1 = SfScsi_Exec(param_1,param_2);
  return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
}


