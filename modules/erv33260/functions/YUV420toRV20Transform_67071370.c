/* Module: erv33260.dll
   Function: YUV420toRV20Transform
   Address: 67071370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20Transform(uint param_1,uint param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_94 [12];
  undefined4 local_64;
  uint local_54 [11];
  int local_28;
  int local_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
                    /* 0x1370  17  YUV420toRV20Transform */
  FUN_67072290(local_94);
  FUN_67072290(local_54);
  if ((((param_5 == 0) || (*(int *)(param_5 + 0x20) != -0x51403f2f)) || (param_3 == 0)) ||
     (((param_4 == (int *)0x0 || (param_1 == 0)) || (param_2 == 0)))) {
    return 0x80004003;
  }
  iVar1 = *(int *)(param_5 + 0x40);
  puVar8 = (uint *)(iVar1 + 0xc);
  puVar9 = local_94;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_94[1] = *(undefined4 *)(param_3 + 8);
  puVar8 = (uint *)(iVar1 + 0x38);
  puVar9 = local_54;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_94[2] = *(undefined4 *)(param_3 + 0xc);
  local_8 = 0;
  FUN_670722b0(local_94,param_1);
  FUN_670722b0(local_54,param_2);
  uVar4 = *(uint *)(param_5 + 0x4c);
  uVar2 = *(uint *)(param_3 + 4);
  *(uint *)(param_5 + 0x4c) = uVar2;
  if (uVar2 <= uVar4) {
    *(uint *)(param_5 + 0x4c) = uVar4 + 1;
  }
  local_64 = *(undefined4 *)(param_5 + 0x4c);
  if (*(int *)(param_3 + 0x10) != 0) {
    (**(code **)(**(int **)(param_5 + 0x40) + 0x30))();
  }
  param_1 = (**(code **)(**(int **)(param_5 + 0x40) + 0x20))(local_94,local_54,0,&local_8);
  if (param_1 != 0) goto LAB_67071552;
  param_4[0x103] = local_24;
  if ((local_8 & 1) == 0) {
    if ((local_8 & 2) == 0) {
      param_4[0x102] = 0;
    }
    else {
      param_4[0x102] = 2;
    }
  }
  else {
    param_4[0x102] = 1;
  }
  if ((local_8 & 8) == 0) {
    if (local_28 == 8) {
      piVar3 = (int *)FUN_67072360(local_54);
      if (*piVar3 == 0) {
        uVar4 = FUN_67072360(local_54);
        if (*(int *)(uVar4 + 4) == 0) goto LAB_67071547;
      }
    }
    local_14 = 0x1b;
    param_1 = (**(code **)(**(int **)(param_5 + 0x40) + 0x40))(&local_14);
    if (param_1 == 0) {
      uVar4 = local_10 + 1;
      if (0xff < uVar4) {
        uVar5 = FUN_67071000(1);
        return uVar5;
      }
      param_4[0x101] = local_10;
      piVar7 = (int *)(local_c + 4);
      piVar3 = param_4;
      do {
        piVar3 = piVar3 + 1;
        iVar1 = *piVar7;
        piVar7 = piVar7 + 2;
        *piVar3 = iVar1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      *param_4 = local_28;
      uVar5 = FUN_67071000(0);
      return uVar5;
    }
  }
  else {
LAB_67071547:
    param_4[0x101] = 0;
    param_4[1] = 0;
    *param_4 = 0;
  }
LAB_67071552:
  uVar5 = FUN_67071000(param_1);
  return uVar5;
}


