/* Module: rmme3260.dll
   Function: FUN_6625c180
   Address: 6625c180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625c180(int param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) < 0) {
    return 0x80040081;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  lVar1 = _lseek(*(int *)(param_1 + 8),0,0);
  if (lVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0x80040081;
    return 0x80040081;
  }
  return 0;
}


