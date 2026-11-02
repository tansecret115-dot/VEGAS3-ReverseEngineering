/* Module: erv23260.dll
   Function: YUV420toRV20Transform
   Address: 637f1370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20Transform(uint param_1,uint param_2,int param_3,int *param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_9c [12];
  undefined4 local_6c;
  uint local_5c [11];
  int local_30;
  int local_2c;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 uStack_c;
  uint local_8;
  
                    /* 0x1370  17  YUV420toRV20Transform */
  FUN_637f2160(local_9c);
  FUN_637f2160(local_5c);
  if (((((param_5 != 0) && (*(int *)(param_5 + 0x20) == -0x51403f2f)) && (param_3 != 0)) &&
      ((param_4 != (int *)0x0 && (param_1 != 0)))) && (param_2 != 0)) {
    iVar3 = *(int *)(param_5 + 0x40);
    puVar8 = (uint *)(iVar3 + 0xc);
    puVar9 = local_9c;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_9c[1] = *(undefined4 *)(param_3 + 8);
    puVar8 = (uint *)(iVar3 + 0x38);
    puVar9 = local_5c;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_9c[2] = *(undefined4 *)(param_3 + 0xc);
    local_8 = 0;
    FUN_637f2180(local_9c,param_1);
    FUN_637f2180(local_5c,param_2);
    if ((*(int *)(param_5 + 0x50) == 2) && (*(int *)(param_5 + 0x54) == 1)) {
      uStack_c = 0;
      local_10 = *(int *)(param_3 + 4);
      uVar2 = ftol();
      *(undefined4 *)(param_5 + 0x4c) = uVar2;
    }
    else {
      uVar7 = *(uint *)(param_5 + 0x4c);
      uVar1 = *(uint *)(param_3 + 4);
      *(uint *)(param_5 + 0x4c) = uVar1;
      if (uVar1 <= uVar7) {
        *(uint *)(param_5 + 0x4c) = uVar1 + 1;
      }
    }
    local_6c = *(undefined4 *)(param_5 + 0x4c);
    if (*(int *)(param_3 + 0x10) != 0) {
      (**(code **)(**(int **)(param_5 + 0x40) + 0x30))();
    }
    param_3 = (**(code **)(**(int **)(param_5 + 0x40) + 0x20))(local_9c,local_5c,0,&local_8);
    if (param_3 == 0) {
      if ((*(int *)(param_5 + 0x50) == 2) && (*(int *)(param_5 + 0x54) == 1)) {
        uStack_c = 0;
        local_10 = local_2c;
        iVar3 = ftol();
        param_4[0x83] = iVar3;
      }
      else {
        param_4[0x83] = local_2c;
      }
      if ((local_8 & 1) == 0) {
        if ((local_8 & 2) == 0) {
          param_4[0x82] = 0;
        }
        else {
          param_4[0x82] = 2;
        }
      }
      else {
        param_4[0x82] = 1;
      }
      if (((local_8 & 8) == 0) && (local_30 != 8)) {
        local_1c = 0x1b;
        param_3 = (**(code **)(**(int **)(param_5 + 0x40) + 0x40))(&local_1c);
        if (param_3 == 0) {
          uVar7 = local_18 + 1;
          if (uVar7 < 0x80) {
            param_4[0x81] = local_18;
            piVar6 = (int *)(local_14 + 4);
            piVar4 = param_4;
            do {
              piVar4 = piVar4 + 1;
              iVar3 = *piVar6;
              piVar6 = piVar6 + 2;
              *piVar4 = iVar3;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            *param_4 = local_30;
            uVar2 = FUN_637f1000(0);
            return uVar2;
          }
          uVar2 = FUN_637f1000(1);
          return uVar2;
        }
      }
      else {
        param_4[0x81] = 0;
        param_4[1] = 0;
        *param_4 = 0;
      }
    }
    uVar2 = FUN_637f1000(param_3);
    return uVar2;
  }
  return 0x80004003;
}


