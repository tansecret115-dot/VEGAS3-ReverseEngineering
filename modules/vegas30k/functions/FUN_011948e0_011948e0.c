/* Module: vegas30k.dll
   Function: FUN_011948e0
   Address: 011948e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011948e0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x7a8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x7a8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x7a8));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  return 0;
}


