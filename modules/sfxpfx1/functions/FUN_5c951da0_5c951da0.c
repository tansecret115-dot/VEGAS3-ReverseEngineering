/* Module: sfxpfx1.dll
   Function: FUN_5c951da0
   Address: 5c951da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c951da0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0xb4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return 0;
  }
  return 0;
}


