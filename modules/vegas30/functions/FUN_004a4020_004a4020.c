/* Module: vegas30.exe
   Function: FUN_004a4020
   Address: 004a4020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a4020(int param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004554a0(param_1);
  *(double *)(param_1 + 0x1d0) = (double)fVar1;
  if ((DAT_006476b8 == 0) || (DAT_006476bc == 0)) {
    param_2 = 1;
    param_3 = 0;
  }
  fVar1 = (float10)FUN_00455690(param_1,param_2,param_3);
  *(double *)(param_1 + 0x1c0) = (double)fVar1;
  FUN_004530a0(param_1,0x7fff);
  return;
}


