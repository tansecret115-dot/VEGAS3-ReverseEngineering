/* Module: rmme3260.dll
   Function: FUN_6625c0c0
   Address: 6625c0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625c0c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) < 0) {
    return 0x80040081;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = _close(*(int *)(param_1 + 8));
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0x80040081;
    return 0x80040081;
  }
  return 0;
}


