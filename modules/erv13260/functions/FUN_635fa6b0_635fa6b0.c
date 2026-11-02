/* Module: erv13260.dll
   Function: FUN_635fa6b0
   Address: 635fa6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_635fa6b0(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int local_20;
  int local_14;
  uint local_c;
  int local_8;
  
  piVar2 = param_6;
  piVar1 = (int *)(param_2 + param_4 * param_3 * 4);
  uVar4 = 0;
  param_2 = 0;
  iVar6 = 0;
  local_8 = 0;
  local_14 = 0;
  local_c = 0;
  if ((param_1 == (uint *)0x3) || (param_1 == (uint *)0x4)) {
    iVar7 = *piVar1;
    if (*(char *)(param_5 + 8) == '\x01') {
      FUN_635f20b0(param_6,8,iVar7);
      local_8 = 8;
      uVar4 = 1;
    }
    else {
      uVar3 = (undefined1)iVar7;
      if ((int)param_3 < 4) {
        if (*(int *)(param_5 + 0x1c4d) == 0) {
          *(undefined1 *)(param_5 + 0x1c4a) = uVar3;
          *(int *)(param_5 + 0x1c3e) = iVar7;
          *(undefined4 *)(param_5 + 0x1c4d) = 1;
          uVar4 = 1;
        }
        else {
          local_8 = FUN_635fb830(*(int *)(param_5 + 0x1c3e) - iVar7,param_6);
          _DAT_63606d20 = local_8;
          *(int *)(param_5 + 0x1c3e) = iVar7;
          uVar4 = 1;
        }
      }
      else if (param_3 == 4) {
        if (*(int *)(param_5 + 0x1c51) == 0) {
          *(undefined1 *)(param_5 + 0x1c4b) = uVar3;
          *(int *)(param_5 + 0x1c42) = iVar7;
          *(undefined4 *)(param_5 + 0x1c51) = 1;
          uVar4 = 1;
        }
        else {
          local_8 = FUN_635fb860(*(int *)(param_5 + 0x1c42) - iVar7,param_6);
          _DAT_63606d20 = local_8;
          *(int *)(param_5 + 0x1c42) = iVar7;
          uVar4 = 1;
        }
      }
      else if (param_3 == 5) {
        if (*(int *)(param_5 + 0x1c55) == 0) {
          *(undefined1 *)(param_5 + 0x1c4c) = uVar3;
          *(int *)(param_5 + 0x1c46) = iVar7;
          *(undefined4 *)(param_5 + 0x1c55) = 1;
          uVar4 = 1;
        }
        else {
          local_8 = FUN_635fb860(*(int *)(param_5 + 0x1c46) - iVar7,param_6);
          _DAT_63606d20 = local_8;
          *(int *)(param_5 + 0x1c46) = iVar7;
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 1;
      }
    }
  }
  bVar9 = true;
  bVar8 = true;
  if (uVar4 < 0xf) {
    param_1 = (uint *)(piVar1 + uVar4);
    param_6 = (int *)(0xf - uVar4);
    iVar7 = iVar6;
    uVar4 = param_2;
    do {
      iVar6 = local_14;
      param_2 = *param_1;
      if (param_2 == 0) {
        local_14 = local_14 + 1;
        iVar6 = iVar7;
        param_2 = uVar4;
      }
      else {
        bVar8 = (int)param_2 < 0;
        if (bVar8) {
          param_2 = -param_2;
        }
        param_3 = (uint)bVar8;
        if (!bVar9) {
          if (((int)uVar4 < 0xd) && (iVar7 < 0x40)) {
            param_5 = FUN_635f23a0(iVar7,uVar4,0,piVar2);
          }
          else {
            param_5 = 0;
          }
          if (param_5 == 0) {
            FUN_635f20b0(piVar2,7,3);
            FUN_635f20b0(piVar2,1,0);
            FUN_635f20b0(piVar2,6,iVar7);
            if ((int)uVar4 < 0x80) {
              if (local_c == 1) {
                uVar4 = (uVar4 ^ 0xff) + 1;
              }
              FUN_635f20b0(piVar2,8,uVar4);
              local_8 = local_8 + 0x16;
            }
            else {
              if (local_c == 1) {
                uVar4 = (uVar4 ^ 0xfff) + 1;
              }
              FUN_635f20b0(piVar2,8,0x80);
              FUN_635f20b0(piVar2,0xc,uVar4);
              local_8 = local_8 + 0x22;
            }
          }
          else {
            FUN_635f20b0(piVar2,1,local_c);
            local_8 = local_8 + 1 + param_5;
          }
        }
        local_c = param_3;
        bVar9 = false;
        local_14 = 0;
      }
      param_1 = param_1 + 1;
      param_6 = (int *)((int)param_6 + -1);
      iVar7 = iVar6;
      uVar4 = param_2;
      bVar8 = bVar9;
    } while (param_6 != (int *)0x0);
  }
  puVar5 = (uint *)0xf;
  param_1 = (uint *)0xf;
  if (0xf < param_4 + -8) {
    param_6 = piVar1 + 0x13;
    do {
      puVar5 = (uint *)(param_6 + -4);
      if (((((((param_6[-3] == 0 && param_6[3] == 0) && param_6[-2] == 0) && param_6[2] == 0) &&
            param_6[-1] == 0) && param_6[1] == 0) && *puVar5 == 0) && *param_6 == 0) {
        local_14 = local_14 + 8;
      }
      else if ((int)param_1 < (int)(param_1 + 2)) {
        local_20 = (int)(param_1 + 2) - (int)param_1;
        iVar7 = iVar6;
        uVar4 = param_2;
        do {
          iVar6 = local_14;
          param_2 = *puVar5;
          if (param_2 == 0) {
            local_14 = local_14 + 1;
            iVar6 = iVar7;
            param_2 = uVar4;
          }
          else {
            bVar9 = (int)param_2 < 0;
            if (bVar9) {
              param_2 = -param_2;
            }
            param_3 = (uint)bVar9;
            if (!bVar8) {
              if (((int)uVar4 < 0xd) && (iVar7 < 0x40)) {
                param_5 = FUN_635f23a0(iVar7,uVar4,0,piVar2);
              }
              else {
                param_5 = 0;
              }
              if (param_5 == 0) {
                FUN_635f20b0(piVar2,7,3);
                FUN_635f20b0(piVar2,1,0);
                FUN_635f20b0(piVar2,6,iVar7);
                if ((int)uVar4 < 0x80) {
                  if (local_c == 1) {
                    uVar4 = (uVar4 ^ 0xff) + 1;
                  }
                  FUN_635f20b0(piVar2,8,uVar4);
                  local_8 = local_8 + 0x16;
                }
                else {
                  if (local_c == 1) {
                    uVar4 = (uVar4 ^ 0xfff) + 1;
                  }
                  FUN_635f20b0(piVar2,8,0x80);
                  FUN_635f20b0(piVar2,0xc,uVar4);
                  local_8 = local_8 + 0x22;
                }
              }
              else {
                FUN_635f20b0(piVar2,1,local_c);
                local_8 = local_8 + 1 + param_5;
              }
            }
            local_c = param_3;
            bVar8 = false;
            local_14 = 0;
          }
          puVar5 = puVar5 + 1;
          local_20 = local_20 + -1;
          iVar7 = iVar6;
          uVar4 = param_2;
        } while (local_20 != 0);
      }
      param_6 = param_6 + 8;
      puVar5 = param_1 + 2;
      param_1 = puVar5;
    } while ((int)puVar5 < param_4 + -8);
  }
  if ((int)puVar5 < param_4) {
    param_1 = (uint *)(piVar1 + (int)puVar5);
    param_4 = param_4 - (int)puVar5;
    iVar7 = iVar6;
    uVar4 = param_2;
    do {
      iVar6 = local_14;
      param_2 = *param_1;
      if (param_2 == 0) {
        local_14 = local_14 + 1;
        iVar6 = iVar7;
        param_2 = uVar4;
      }
      else {
        bVar9 = (int)param_2 < 0;
        if (bVar9) {
          param_2 = -param_2;
        }
        param_3 = (uint)bVar9;
        if (!bVar8) {
          if (((int)uVar4 < 0xd) && (iVar7 < 0x40)) {
            param_5 = FUN_635f23a0(iVar7,uVar4,0,piVar2);
          }
          else {
            param_5 = 0;
          }
          if (param_5 == 0) {
            FUN_635f20b0(piVar2,7,3);
            FUN_635f20b0(piVar2,1,0);
            FUN_635f20b0(piVar2,6,iVar7);
            if ((int)uVar4 < 0x80) {
              if (local_c == 1) {
                uVar4 = (uVar4 ^ 0xff) + 1;
              }
              FUN_635f20b0(piVar2,8,uVar4);
              local_8 = local_8 + 0x16;
            }
            else {
              if (local_c == 1) {
                uVar4 = (uVar4 ^ 0xfff) + 1;
              }
              FUN_635f20b0(piVar2,8,0x80);
              FUN_635f20b0(piVar2,0xc,uVar4);
              local_8 = local_8 + 0x22;
            }
          }
          else {
            FUN_635f20b0(piVar2,1,local_c);
            local_8 = local_8 + 1 + param_5;
          }
        }
        bVar8 = false;
        local_c = param_3;
        local_14 = 0;
      }
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      iVar7 = iVar6;
      uVar4 = param_2;
    } while (param_4 != 0);
  }
  if (!bVar8) {
    if (((int)param_2 < 0xd) && (iVar6 < 0x40)) {
      param_5 = FUN_635f23a0(iVar6,param_2,1,piVar2);
    }
    else {
      param_5 = 0;
    }
    if (param_5 == 0) {
      FUN_635f20b0(piVar2,7,3);
      FUN_635f20b0(piVar2,1,1);
      FUN_635f20b0(piVar2,6,iVar6);
      if ((int)param_2 < 0x80) {
        if (local_c == 1) {
          param_2 = (param_2 ^ 0xff) + 1;
        }
        FUN_635f20b0(piVar2,8,param_2);
        return local_8 + 0x16;
      }
      if (local_c == 1) {
        param_2 = (param_2 ^ 0xfff) + 1;
      }
      FUN_635f20b0(piVar2,8,0x80);
      FUN_635f20b0(piVar2,0xc,param_2);
      return local_8 + 0x22;
    }
    FUN_635f20b0(piVar2,1,local_c);
    local_8 = local_8 + 1 + param_5;
  }
  return local_8;
}


