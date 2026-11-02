/* Module: mp3plug.dll
   Function: FUN_5f6e7710
   Address: 5f6e7710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_5f6e7710(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  double local_4c;
  double local_34;
  double local_1c;
  
  if (param_3 == 0) {
    return (float10)_DAT_5f75d70c;
  }
  if ((((param_7 == 0) || (param_7 == 1)) || (param_7 == 3)) || ((param_7 == 4 || (param_7 == 6))))
  {
    iVar1 = *(int *)(param_5 + 4);
    if (iVar1 < param_4) {
      iVar1 = param_4;
    }
    local_34 = (double)*(int *)(param_5 + 8);
    if ((double)iVar1 < local_34) {
      local_34 = (double)iVar1;
    }
    fVar2 = FUN_5f6e7670(param_1,param_3);
    fVar3 = FUN_5f6e76c0(extraout_ECX_00,param_3);
    local_1c = (double)(-(float10)(double)fVar2 +
                       (((float10)local_34 - (float10)*(int *)(param_5 + 4)) *
                       (fVar3 + (float10)(double)fVar2)) /
                       (float10)(*(int *)(param_5 + 8) - *(int *)(param_5 + 4)));
    FUN_5f6e7430(param_3,(uint *)(param_5 + 8));
    FUN_5f6e7430(param_3,(uint *)(param_6 + 8));
  }
  else if ((param_7 == 2) || (local_1c = 0.0, param_7 == 5)) {
    iVar1 = *(int *)(param_5 + 4);
    if (iVar1 < param_4) {
      iVar1 = param_4;
    }
    local_4c = (double)*(int *)(param_5 + 8);
    if ((double)iVar1 < local_4c) {
      local_4c = (double)iVar1;
    }
    fVar2 = FUN_5f6e7670(param_1,param_3);
    fVar3 = FUN_5f6e76c0(extraout_ECX,param_3);
    local_1c = (double)(-(float10)(double)fVar2 +
                       (((float10)local_4c - (float10)*(int *)(param_6 + 4)) *
                       (fVar3 + (float10)(double)fVar2)) /
                       (float10)(*(int *)(param_6 + 8) - *(int *)(param_6 + 4)));
    FUN_5f6e7430(param_3,(uint *)(param_6 + 8));
    FUN_5f6e7430(param_3,(uint *)(param_5 + 8));
  }
  return (float10)local_1c;
}


