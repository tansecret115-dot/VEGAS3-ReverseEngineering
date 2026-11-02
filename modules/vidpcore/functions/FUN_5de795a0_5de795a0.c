/* Module: vidpcore.dll
   Function: FUN_5de795a0
   Address: 5de795a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de795a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    *param_1 = param_1[1];
    param_1[1] = uVar1;
    uVar1 = param_1[2];
    param_1[2] = param_1[3];
    param_1[3] = uVar1;
  }
  return;
}


