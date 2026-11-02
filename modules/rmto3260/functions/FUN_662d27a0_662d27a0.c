/* Module: rmto3260.dll
   Function: FUN_662d27a0
   Address: 662d27a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d27a0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_64;
  undefined2 local_5e;
  undefined2 local_5c;
  uint local_58;
  undefined2 local_52;
  undefined2 local_50;
  uint local_4c;
  short local_48;
  uint local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = param_1;
  FUN_662e2a70(&local_4c);
  FUN_662e2a70(&local_40);
  local_8 = 1;
  local_c = 1;
  local_10 = 1;
  local_14 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(0,local_34);
  if (-1 < iVar3) {
    if (*(int *)(param_1 + 0x34) != 0) {
      local_8 = 0;
      local_18 = 1;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      local_c = 0;
      local_1c = 1;
    }
    do {
      iVar6 = 0;
      if (iVar3 < 0) {
        return iVar3;
      }
      if ((local_14 == 0) && (local_10 != 0)) {
        local_28 = (**(code **)(**(int **)(uVar2 + 0x28) + 0x10))(&local_4c,&local_24);
        if (local_28 == 0) {
          local_14 = 1;
        }
        local_10 = 0;
        if (((((local_14 != 0) || (*(int *)(uVar2 + 0x34) == 0)) || (*(int *)(uVar2 + 0x66) == 0))
            || (local_48 != *(short *)(uVar2 + 0x38))) &&
           (((local_14 != 0 || (*(int *)(uVar2 + 0x30) == 0)) ||
            ((*(int *)(uVar2 + 0x6a) == 0 || (local_48 != *(short *)(uVar2 + 0x3a)))))))
        goto LAB_662d2884;
        (**(code **)(**(int **)(uVar2 + 0x28) + 0x14))(local_28);
        local_10 = 1;
      }
      else {
LAB_662d2884:
        uVar4 = *(uint *)(uVar2 + 0x8a);
        *(uint *)(uVar2 + 0x8a) = uVar4 + 1;
        if (200 < uVar4) {
          *(undefined4 *)(uVar2 + 0x8a) = 0;
          param_1 = 0;
          if (*(uint *)(uVar2 + 0x60) != 0) {
            param_1 = (local_4c * 100) / *(uint *)(uVar2 + 0x60);
          }
          if (100 < param_1) {
            param_1 = 100;
          }
          if (0 < *(int *)(uVar2 + 0x7e)) {
            do {
              if (iVar3 < 0) break;
              piVar1 = *(int **)(*(int *)(uVar2 + 0x7a) + iVar6 * 4);
              iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(uVar2 + 0x7e));
          }
        }
        if (((local_8 == 0) && (local_18 != 0)) && (-1 < iVar3)) {
          iVar3 = (**(code **)(**(int **)(uVar2 + 0x34) + 0x14))
                            (*(int **)(uVar2 + 0x34),&local_58,*(undefined4 *)(uVar2 + 0x50),
                             *(undefined4 *)(uVar2 + 0x58),&local_2c);
          if (iVar3 == -0x7ffbfc36) {
            local_8 = 1;
            iVar3 = 0;
          }
          local_18 = 0;
        }
        if (((local_c == 0) && (local_1c != 0)) && (-1 < iVar3)) {
          iVar3 = (**(code **)(**(int **)(uVar2 + 0x30) + 0x14))
                            (*(int **)(uVar2 + 0x30),&local_64,*(undefined4 *)(uVar2 + 0x54),
                             *(undefined4 *)(uVar2 + 0x5c),&local_30);
          if (iVar3 == -0x7ffbfc36) {
            local_c = 1;
            iVar3 = 0;
          }
          local_1c = 0;
        }
        iVar6 = local_28;
        if (((local_14 == 0) || (local_8 == 0)) || (local_c == 0)) {
          local_20 = 0;
          if (-1 < iVar3) {
            uVar4 = 0xffffffff;
            if (local_14 == 0) {
              uVar4 = local_4c;
            }
            uVar7 = 0xffffffff;
            if (local_8 == 0) {
              uVar7 = local_58;
            }
            uVar5 = 0xffffffff;
            if (local_c == 0) {
              uVar5 = local_64;
            }
            if ((uVar7 < uVar4) || (uVar5 < uVar4)) {
              if (uVar5 < uVar7) {
                local_3c = *(undefined2 *)(uVar2 + 0x3e);
                local_38 = local_5c;
                local_40 = local_64;
                local_3a = local_5e;
                iVar3 = (**(code **)(**(int **)(uVar2 + 0x2c) + 0x2c))
                                  (&local_40,*(undefined4 *)(uVar2 + 0x54),local_30);
                local_1c = 1;
              }
              else {
                local_3c = *(undefined2 *)(uVar2 + 0x3c);
                local_38 = local_50;
                local_40 = local_58;
                local_3a = local_52;
                iVar3 = (**(code **)(**(int **)(uVar2 + 0x2c) + 0x2c))
                                  (&local_40,*(undefined4 *)(uVar2 + 0x50),local_2c);
                local_18 = 1;
              }
            }
            else {
              iVar3 = (**(code **)(**(int **)(uVar2 + 0x2c) + 0x2c))(&local_4c,local_28,local_24);
              (**(code **)(**(int **)(uVar2 + 0x28) + 0x14))(iVar6);
              local_10 = 1;
            }
          }
        }
        else {
          local_20 = 1;
        }
      }
    } while (local_20 == 0);
  }
  return iVar3;
}


