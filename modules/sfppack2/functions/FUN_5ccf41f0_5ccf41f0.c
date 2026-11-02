/* Module: sfppack2.dll
   Function: FUN_5ccf41f0
   Address: 5ccf41f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccf41f0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x4bc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4bc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4bc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    return 0;
  }
  return 0;
}


