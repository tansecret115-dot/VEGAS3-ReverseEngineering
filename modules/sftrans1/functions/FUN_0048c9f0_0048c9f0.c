/* Module: sftrans1.dll
   Function: FUN_0048c9f0
   Address: 0048c9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048c9f0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar1 = FUN_0048c9a0(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = param_2[1];
  local_8 = *param_2;
  iVar2 = FUN_00486910(local_8);
  iVar1 = 1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  local_4 = (local_4 + 1) % iVar1;
  if (local_4 == 0) {
    local_8 = local_8 + 1;
  }
  iVar1 = FUN_0048c9a0(&local_8);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 != 0) && (**(int **)(param_1 + 0xa4) + -1 == local_8)) {
    FUN_0048c640(&local_8,0);
  }
  *param_2 = local_8;
  param_2[1] = local_4;
  return 1;
}


