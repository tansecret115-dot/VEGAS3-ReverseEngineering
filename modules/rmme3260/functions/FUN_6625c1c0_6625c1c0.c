/* Module: rmme3260.dll
   Function: FUN_6625c1c0
   Address: 6625c1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __fastcall FUN_6625c1c0(int param_1)

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


