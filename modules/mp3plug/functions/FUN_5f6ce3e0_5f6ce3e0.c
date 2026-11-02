/* Module: mp3plug.dll
   Function: FUN_5f6ce3e0
   Address: 5f6ce3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6ce3e0(int param_1,int param_2,uint param_3,int *param_4,int param_5,uint param_6,
                byte *param_7,int *param_8)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  byte *local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  
  if (param_1 == 0) {
    return -1;
  }
  local_1c = param_8;
  local_20 = param_7;
  local_24 = param_5;
  local_18 = param_3;
  local_30 = (int *)param_2;
  if (*(int *)(param_1 + 0x3c) != 0) {
    ppuVar2 = FUN_5f6d0b00();
    if (ppuVar2 == (undefined **)0x0) {
      return 0;
    }
    FUN_5f6d21b0((int *)ppuVar2);
    return -1;
  }
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      if (*(int *)(param_1 + 0x6c) == 0) {
        local_14 = param_6;
        iVar4 = FUN_5f6cd690(param_1,param_2,param_3,*(int *)(param_1 + 0x60),(int *)(param_1 + 100)
                             ,*(int *)(param_1 + 0x68));
        *param_4 = iVar4;
        param_6 = local_14;
      }
      local_38 = (uint)(local_18 == 0);
      local_2c = *(int *)(param_1 + 0x68);
      local_30 = *(int **)(param_1 + 100);
      *(uint *)(param_1 + 0x6c) = (uint)(local_18 == 0);
    }
    else {
      local_34 = *(uint *)(param_1 + 0x10c);
      if (local_34 != 0) {
        local_38 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
        local_28 = local_34;
        if (local_38 < local_34) {
          local_28 = local_38;
        }
        local_2c = 0;
        if (local_28 != 0) {
          local_10 = param_4;
          uVar6 = 0;
          local_c = local_28;
          do {
            iVar4 = *(int *)(param_1 + 0x10c);
            uVar6 = uVar6 + 1;
            *(int *)(param_1 + 0x10c) = iVar4 + -1;
            iVar3 = *(int *)(param_1 + 100) + 1;
            uVar1 = *(undefined4 *)
                     (*(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0x108) - iVar4) * 4);
            *(int *)(param_1 + 100) = iVar3;
            *(undefined4 *)(*(int *)(param_1 + 0x60) + -4 + iVar3 * 4) = uVar1;
          } while (uVar6 < local_28);
        }
      }
      if (*(int *)(param_1 + 0x6c) == 0) {
        if (*(int *)(param_1 + 0x10c) == 0) {
          local_14 = param_6;
          iVar4 = FUN_5f6cd9e0(param_1,param_2,param_3);
          param_6 = local_14;
        }
        else {
          iVar4 = 0;
        }
        *param_4 = iVar4;
      }
      local_38 = (uint)(local_18 == 0);
      *(uint *)(param_1 + 0x6c) = (uint)(local_18 == 0);
      uVar6 = *(uint *)(param_1 + 0x10c);
      if (uVar6 == 0) {
        local_2c = *(int *)(param_1 + 0x68);
        local_30 = *(int **)(param_1 + 100);
        local_34 = 0;
      }
      else {
        local_2c = *(int *)(param_1 + 0x68);
        local_30 = *(int **)(param_1 + 100);
        local_38 = local_2c - (int)local_30;
        local_28 = uVar6;
        if (local_38 < uVar6) {
          local_28 = local_38;
        }
        local_34 = 0;
        if (local_28 != 0) {
          uVar6 = 0;
          local_c = local_28;
          do {
            iVar4 = *(int *)(param_1 + 0x10c);
            uVar6 = uVar6 + 1;
            *(int *)(param_1 + 0x10c) = iVar4 + -1;
            iVar3 = *(int *)(param_1 + 100) + 1;
            uVar1 = *(undefined4 *)
                     (*(int *)(param_1 + 0x104) + (*(int *)(param_1 + 0x108) - iVar4) * 4);
            *(int *)(param_1 + 100) = iVar3;
            *(undefined4 *)(*(int *)(param_1 + 0x60) + -4 + iVar3 * 4) = uVar1;
          } while (uVar6 < local_28);
          local_2c = *(int *)(param_1 + 0x68);
          local_30 = *(int **)(param_1 + 100);
        }
      }
    }
    if ((local_30 == (int *)local_2c) || (*(int *)(param_1 + 0x6c) != 0)) {
      local_3c = 0;
      if (param_6 < *(uint *)(param_1 + 0x54)) {
        return -1;
      }
      local_14 = param_6;
      iVar4 = FUN_5f6d2cc0(*(int *)(param_1 + 0x48),*(undefined4 **)(param_1 + 0x60),
                           *(uint *)(param_1 + 100),local_24,param_6,&local_3c,local_20,local_1c);
      if (iVar4 == 0) {
        if ((((local_3c == 0) && (*(int *)(param_1 + 100) != 0)) && (*(int *)(param_1 + 0x6c) != 0))
           && (iVar4 = FUN_5f6d2cc0(*(int *)(param_1 + 0x48),*(undefined4 **)(param_1 + 0x60),0,
                                    local_24,local_14,&local_3c,local_20,local_1c), iVar4 != 0)) {
          return -1;
        }
        *(undefined4 *)(param_1 + 100) = 0;
        if (((*(int *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x70) != 0)) &&
           ((piVar5 = (int *)FUN_5f6d32b0(*(int *)(param_1 + 0x48)), piVar5 != (int *)0x0 &&
            (local_2c = 0, 0 < *piVar5)))) {
          iVar4 = 0;
          local_30 = piVar5;
          do {
            FUN_5f6d3a40(*(void **)(param_1 + 0x70),*(uint *)(param_1 + 0x74),piVar5[iVar4 + 1]);
            iVar3 = iVar4 + 1;
            iVar4 = iVar4 + 1;
            *(int *)(param_1 + 0x74) = piVar5[iVar3] + *(int *)(param_1 + 0x74);
          } while (iVar4 < *piVar5);
        }
        return local_3c;
      }
      return -1;
    }
  }
  return 0;
}


