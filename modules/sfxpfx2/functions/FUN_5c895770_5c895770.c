/* Module: sfxpfx2.dll
   Function: FUN_5c895770
   Address: 5c895770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c895770(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x21fc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x21fc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x21fc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x21fc) = 0;
    return 0;
  }
  return 0;
}


