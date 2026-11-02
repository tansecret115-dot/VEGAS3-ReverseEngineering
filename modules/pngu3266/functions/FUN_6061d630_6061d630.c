/* Module: pngu3266.dll
   Function: FUN_6061d630
   Address: 6061d630
   Source: Ghidra pseudocode (Stage 10 batch) */


long __fastcall FUN_6061d630(int param_1)

{
  long lVar1;
  
  lVar1 = -1;
  if (-1 < *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 4) = 0;
    lVar1 = _tell(*(int *)(param_1 + 8));
    if (lVar1 < 0) {
      *(undefined4 *)(param_1 + 4) = 0x80040081;
    }
  }
  return lVar1;
}


