/* Module: vfplugs.dll
   Function: FUN_00403500
   Address: 00403500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403500(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 700) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 700));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 700));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
  }
  return;
}


