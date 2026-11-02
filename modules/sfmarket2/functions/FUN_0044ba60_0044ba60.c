/* Module: sfmarket2.dll
   Function: FUN_0044ba60
   Address: 0044ba60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ba60(int param_1)

{
  HGLOBAL pvVar1;
  
  if ((param_1 != 0) && (*(LPCVOID *)(param_1 + 0x70) != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x70));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x70));
    GlobalFree(pvVar1);
  }
  return;
}


