/* Module: vidpcore.dll
   Function: FUN_5decef90
   Address: 5decef90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5decef90(int param_1)

{
  HGLOBAL pvVar1;
  
  if ((param_1 != 0) && (*(LPCVOID *)(param_1 + 0x74) != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x74));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x74));
    GlobalFree(pvVar1);
  }
  return;
}


