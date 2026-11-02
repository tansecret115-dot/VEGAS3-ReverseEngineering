/* Module: vegas30.exe
   Function: FUN_004cee20
   Address: 004cee20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004cee20(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x140);
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (500 < param_2) {
    param_2 = 500;
  }
  fVar2 = (float)param_2 * _DAT_00613a30;
  *(float *)(param_1 + 0x140) = fVar2;
  if (fVar2 != fVar1) {
    return 1;
  }
  return 0;
}


