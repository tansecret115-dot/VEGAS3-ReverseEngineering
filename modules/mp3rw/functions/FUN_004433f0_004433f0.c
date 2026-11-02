/* Module: mp3rw.dll
   Function: FUN_004433f0
   Address: 004433f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004433f0(int param_1)

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


