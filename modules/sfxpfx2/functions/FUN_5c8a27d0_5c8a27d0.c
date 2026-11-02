/* Module: sfxpfx2.dll
   Function: FUN_5c8a27d0
   Address: 5c8a27d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8a27d0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x524) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x524));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x524));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x524) = 0;
    return 0;
  }
  return 0;
}


