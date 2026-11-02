/* Module: erv23260.dll
   Function: YUV420toRV20HiveMessage
   Address: 637f18c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20HiveMessage(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar3 = param_2;
                    /* 0x18c0  9  YUV420toRV20HiveMessage */
  piVar1 = param_1;
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (*(int *)(param_2 + 0x20) != -0x51403f2f)) {
    return 0x80004003;
  }
  iVar5 = 3;
  switch(*param_1) {
  case 1000:
    param_1[1] = ((*(int *)(param_2 + 0x50) << 8 | *(uint *)(param_2 + 0x54)) << 8 |
                 *(uint *)(param_2 + 0x58)) << 0xc;
    uVar4 = FUN_637f1000(0);
    return uVar4;
  case 0x3e9:
    FUN_637f20a0(&local_30);
    FUN_637f20a0(&local_5c);
    local_28 = *(undefined4 *)(iVar3 + 0x48);
    local_2c = *(undefined4 *)(iVar3 + 0x44);
    local_30 = 0xb;
    FUN_637f20e0(&local_30);
    if (*(int *)(iVar3 + 0x54) == 1) {
      local_5c = 0x15;
    }
    else if (*(int *)(iVar3 + 0x54) == 2) {
      local_5c = 0x16;
    }
    local_58 = local_2c;
    local_54 = local_28;
    FUN_637f20e0(&local_5c);
    iVar3 = (**(code **)(**(int **)(iVar3 + 0x40) + 0x18))(&local_30,&local_5c);
    uVar4 = FUN_637f1000(iVar3);
    return uVar4;
  case 0x3ed:
    iVar5 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar5 == 0) {
      iVar3 = (**(code **)*param_1)(piVar1[1],piVar1[2]);
      uVar4 = FUN_637f1000(iVar3);
      return uVar4;
    }
    break;
  case 0x3ee:
    iVar5 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar5 == 0) {
      iVar3 = (**(code **)(*param_1 + 4))();
      piVar1[1] = iVar3;
      uVar4 = FUN_637f1000(0);
      return uVar4;
    }
    break;
  case 0x3ef:
    if (param_1[2] == 0) {
      uVar4 = FUN_637f1000(6);
      return uVar4;
    }
    iVar5 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar5 == 0) {
      iVar3 = (**(code **)(*param_1 + 8))(piVar1[1],piVar1[2]);
      uVar4 = FUN_637f1000(iVar3);
      return uVar4;
    }
    break;
  case 0x3f0:
    if (param_1[2] == 0) {
      uVar4 = FUN_637f1000(6);
      return uVar4;
    }
    iVar5 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar5 == 0) {
      iVar3 = (**(code **)(*param_1 + 0xc))(piVar1[1],piVar1[2]);
      uVar4 = FUN_637f1000(iVar3);
      return uVar4;
    }
    break;
  case 0x3f1:
    if (param_1[2] == 0) {
      uVar4 = FUN_637f1000(6);
      return uVar4;
    }
    iVar5 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar5 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x10))(piVar1[1],piVar1[2]);
      uVar4 = FUN_637f1000(iVar3);
      return uVar4;
    }
    break;
  case 0x3f2:
    iVar5 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar5 == 0) {
      iVar5 = (**(code **)(*param_1 + 0x14))(piVar1[1]);
    }
    break;
  case 0x3fc:
    param_1[1] = 0x10000000;
    uVar4 = FUN_637f1000(0);
    return uVar4;
  case 0x3fd:
    uVar2 = (uint)param_1[1] >> 0x1c;
    uVar6 = (uint)param_1[1] >> 0x14 & 0xff;
    if ((uVar2 == 2) && ((uVar6 == 2 || (uVar6 == 1)))) {
      iVar5 = 0;
    }
    if (iVar5 == 0) {
      *(uint *)(param_2 + 0x50) = uVar2;
      *(uint *)(param_2 + 0x54) = uVar6;
      uVar4 = FUN_637f1000(0);
      return uVar4;
    }
  }
  uVar4 = FUN_637f1000(iVar5);
  return uVar4;
}


