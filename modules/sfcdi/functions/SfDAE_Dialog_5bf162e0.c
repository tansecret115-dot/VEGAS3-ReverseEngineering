/* Module: sfcdi.dll
   Function: SfDAE_Dialog
   Address: 5bf162e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfDAE_Dialog(struct HWND__ *,struct SFDAEPARAMS *,unsigned long) */

int SfDAE_Dialog(HWND__ *param_1,SFDAEPARAMS *param_2,ulong param_3)

{
  int iVar1;
  
                    /* 0x162e0  78  ?SfDAE_Dialog@@YGHPAUHWND__@@PAUSFDAEPARAMS@@K@Z */
  iVar1 = FUN_5bf27640(DAT_5bf65fc4,(LPCSTR)0x1f7,param_1,FUN_5bf16080,(LPARAM)param_2);
  return iVar1;
}


