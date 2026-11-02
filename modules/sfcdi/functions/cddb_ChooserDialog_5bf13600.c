/* Module: sfcdi.dll
   Function: cddb_ChooserDialog
   Address: 5bf13600
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cddb_ChooserDialog(struct HWND__ *,struct chooserparams *) */

int cddb_ChooserDialog(HWND__ *param_1,chooserparams *param_2)

{
  int iVar1;
  
                    /* 0x13600  145  ?cddb_ChooserDialog@@YGHPAUHWND__@@PAUchooserparams@@@Z */
  iVar1 = FUN_5bf27640(DAT_5bf65fc4,(LPCSTR)0x146,param_1,FUN_5bf13520,(LPARAM)param_2);
  return iVar1;
}


