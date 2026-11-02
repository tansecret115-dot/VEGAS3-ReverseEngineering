/* Module: sfppack3.dll
   Function: FUN_5cc45280
   Address: 5cc45280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc45280(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x3854) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3854));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3854));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x3854) = 0;
    return 0;
  }
  return 0;
}


