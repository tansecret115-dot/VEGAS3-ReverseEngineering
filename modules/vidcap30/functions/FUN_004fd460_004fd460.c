/* Module: vidcap30.exe
   Function: FUN_004fd460
   Address: 004fd460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fd460(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [4];
  int local_10;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x488) == 2)) {
    if ((*(uint *)(param_1 + 0x4e0) & 0x400) != 0) {
      puVar3 = local_20;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_20[2] = *(undefined4 *)(param_1 + 0x494);
      local_20[1] = *(undefined4 *)(param_1 + 4);
      local_10 = param_1;
      local_20[0] = 0xf;
      local_20[3] = param_2;
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_20);
      return 1;
    }
    uVar1 = *(uint *)(param_1 + 0x4a4);
    if (((*(uint *)(param_1 + 0x4e0) & 0x200) == 0) && ((uVar1 & 0x80) != 0)) {
      uVar1 = uVar1 | 4;
    }
    else {
      uVar1 = uVar1 & 0xfffffffb;
    }
    *(uint *)(param_1 + 0x4a4) = uVar1;
    uVar1 = FUN_004fd530(param_1,param_2,*(undefined4 *)(param_1 + 0x494));
    *(uint *)(param_1 + 0x4a4) = (uVar1 & 1) << 8 | *(uint *)(param_1 + 0x4a4) & 0xfffffeff;
    return 1;
  }
  return 0;
}


