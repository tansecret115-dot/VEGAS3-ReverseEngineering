/* Module: erv33260.dll
   Function: YUV420toRV20HiveMessage
   Address: 670719c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20HiveMessage(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar3 = param_2;
                    /* 0x19c0  9  YUV420toRV20HiveMessage */
  piVar1 = param_1;
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (*(int *)(param_2 + 0x20) != -0x51403f2f)) {
    return 0x80004003;
  }
  iVar6 = 3;
  switch(*param_1) {
  case 1000:
    param_1[1] = ((*(uint *)(param_2 + 0x54) | *(int *)(param_2 + 0x50) << 8) << 8 |
                 *(uint *)(param_2 + 0x58)) << 0xc;
    uVar4 = FUN_67071000(0);
    return uVar4;
  case 0x3e9:
    FUN_670721d0(&local_30);
    FUN_670721d0(&local_5c);
    local_2c = *(undefined4 *)(iVar3 + 0x44);
    local_28 = *(undefined4 *)(iVar3 + 0x48);
    local_30 = 0xb;
    FUN_67072210(&local_30);
    local_54 = local_28;
    local_5c = 0x17;
    local_58 = local_2c;
    FUN_67072210(&local_5c);
    iVar3 = (**(code **)(**(int **)(iVar3 + 0x40) + 0x18))(&local_30,&local_5c);
    uVar4 = FUN_67071000(iVar3);
    return uVar4;
  case 0x3ed:
    iVar6 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar6 == 0) {
      iVar3 = (**(code **)*param_1)(piVar1[1],piVar1[2]);
      uVar4 = FUN_67071000(iVar3);
      return uVar4;
    }
    break;
  case 0x3ee:
    iVar6 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar6 == 0) {
      iVar3 = (**(code **)(*param_1 + 4))();
      piVar1[1] = iVar3;
      uVar4 = FUN_67071000(0);
      return uVar4;
    }
    break;
  case 0x3ef:
    if (param_1[2] == 0) {
      uVar4 = FUN_67071000(6);
      return uVar4;
    }
    iVar6 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar6 == 0) {
      iVar3 = (**(code **)(*param_1 + 8))(piVar1[1],piVar1[2]);
      uVar4 = FUN_67071000(iVar3);
      return uVar4;
    }
    break;
  case 0x3f0:
    if (param_1[2] == 0) {
      uVar4 = FUN_67071000(6);
      return uVar4;
    }
    iVar6 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar6 == 0) {
      iVar3 = (**(code **)(*param_1 + 0xc))(piVar1[1],piVar1[2]);
      uVar4 = FUN_67071000(iVar3);
      return uVar4;
    }
    break;
  case 0x3f1:
    if (param_1[2] == 0) {
      uVar4 = FUN_67071000(6);
      return uVar4;
    }
    iVar6 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar6 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x10))(piVar1[1],piVar1[2]);
      uVar4 = FUN_67071000(iVar3);
      return uVar4;
    }
    break;
  case 0x3f2:
    iVar6 = (**(code **)(**(int **)(param_2 + 0x40) + 0x4c))(&param_1);
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*param_1 + 0x14))(piVar1[1]);
    }
    break;
  case 0x3fc:
    param_1[1] = 0x20000000;
    uVar4 = FUN_67071000(0);
    return uVar4;
  case 0x3fd:
    uVar2 = (uint)param_1[1] >> 0x1c;
    uVar5 = (uint)param_1[1] >> 0x14 & 0xff;
    if ((uVar2 == 3) && (uVar5 == 2)) {
      iVar6 = 0;
    }
    if (iVar6 == 0) {
      *(uint *)(param_2 + 0x50) = uVar2;
      *(uint *)(param_2 + 0x54) = uVar5;
      uVar4 = FUN_67071000(0);
      return uVar4;
    }
  }
  uVar4 = FUN_67071000(iVar6);
  return uVar4;
}


