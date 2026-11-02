/* Module: aviplug.dll
   Function: FUN_5f972250
   Address: 5f972250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f972250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int *param_7,int *param_8,uint *param_9)

{
  uint uVar1;
  int iVar2;
  int local_38 [14];
  
  local_38[8] = 100;
  local_38[9] = 100;
  local_38[10] = 100;
  local_38[0xb] = 100;
  local_38[0xc] = 0x44;
  local_38[0xd] = 0x44;
  local_38[6] = param_1;
  local_38[7] = param_3;
  local_38[4] = param_2;
  local_38[5] = param_4;
  iVar2 = 0;
  do {
    FUN_5f971fa0(*(uint **)((int)local_38 + iVar2 + 0x18),param_5,
                 *(int *)((int)local_38 + iVar2 + 0x10),(int *)((int)local_38 + iVar2),
                 (int *)((int)local_38 + iVar2 + 8));
    iVar2 = iVar2 + 4;
  } while (iVar2 < 8);
  if (local_38[0] < local_38[1]) {
    uVar1 = 0;
  }
  else if (local_38[0] == local_38[1]) {
    uVar1 = (uint)(local_38[3] < local_38[2]);
  }
  else {
    uVar1 = 1;
  }
  if (local_38[uVar1] != 0x7fffffff) {
    local_38[uVar1] = local_38[param_6 + 8] * local_38[uVar1];
  }
  *param_7 = local_38[uVar1];
  *param_8 = local_38[uVar1 + 2];
  *param_9 = uVar1;
  return;
}


