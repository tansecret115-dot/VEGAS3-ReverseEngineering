/* Module: vegas30.exe
   Function: FUN_00455690
   Address: 00455690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00455690(int param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  if ((0 < param_3) || ((-1 < param_3 && (param_2 != 0)))) {
    return (float10)CONCAT44(param_3,param_2);
  }
  if ((param_2 == -1) && (param_3 == -1)) {
    fVar1 = (float10)FUN_004554a0(param_1);
    return fVar1;
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    if (_DAT_006106d0 < *(double *)(param_1 + 0x1c8)) {
      return (float10)*(double *)(param_1 + 0x1c8);
    }
    return (float10)_DAT_006106d0;
  }
  fVar1 = (float10)FUN_00455520(param_1,param_2,param_3);
  return fVar1;
}


