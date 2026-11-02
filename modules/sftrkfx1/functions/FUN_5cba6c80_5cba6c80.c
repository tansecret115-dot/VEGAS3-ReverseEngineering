/* Module: sftrkfx1.dll
   Function: FUN_5cba6c80
   Address: 5cba6c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba6c80(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x264) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x264));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x264));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x264) = 0;
    return 0;
  }
  return 0;
}


