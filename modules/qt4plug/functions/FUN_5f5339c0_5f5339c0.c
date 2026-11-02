/* Module: qt4plug.dll
   Function: FUN_5f5339c0
   Address: 5f5339c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f5339c0(int param_1)

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


