/* Module: vegas30k.dll
   Function: FUN_011a6c70
   Address: 011a6c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011a6c70(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_011a6e60();
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x54));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x54));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return 0;
}


