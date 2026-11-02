/* Module: vegas30.exe
   Function: FUN_0046cb60
   Address: 0046cb60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046cb60(int param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6,
                int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_14 [8];
  int local_c;
  uint local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  piVar5 = (int *)FUN_005b87b0(uVar1);
  iVar2 = *piVar5;
  local_40 = 0;
  local_34 = 0;
  FUN_005b83b0(uVar1,1);
  if (param_7 == 0) {
    if ((param_5 != 0) || (param_6 != 0)) {
      local_30 = 0xffffffff;
      goto LAB_0046cbd9;
    }
LAB_0046cbc5:
    if (param_5 != 0) {
LAB_0046cbd1:
      local_30 = param_5;
      goto LAB_0046cbd9;
    }
  }
  else {
    if (0 < param_6) goto LAB_0046cbd1;
    if (-1 < param_6) goto LAB_0046cbc5;
  }
  local_30 = 1;
LAB_0046cbd9:
  local_20 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = *(int *)(piVar5[2] + local_20 * 4);
      if ((param_2 == 0) || ((*(uint *)(iVar3 + 0x10) & param_2) != 0)) {
        if (param_7 != 0) {
          if (((DAT_0064778c != 0) && (*(int **)(iVar3 + 0x650) != (int *)0x0)) &&
             (0 < **(int **)(iVar3 + 0x650))) {
            FUN_004ea250(uVar1,iVar3,0xf,0);
            FUN_0047e740(iVar3 + 0x638,param_3,param_4,param_5,param_6,0xffffffff);
          }
          if ((DAT_0064778c != 0) && (*(int *)(iVar3 + 4) == 3)) {
            FUN_004ea250(uVar1,iVar3,0x29,0);
            FUN_0044b150(*(undefined4 *)(iVar3 + 0x78),param_3,param_4,param_5,param_6,2);
            FUN_00523300(iVar3 + 0x80,param_3,param_4,param_5,param_6,2);
          }
        }
        iVar9 = 0;
        local_28 = -1;
        local_2c = -1;
        local_24 = -1;
        local_4 = (int)local_30 >> 0x1f;
        local_8 = local_30;
        local_38 = 0;
        local_3c = 0;
        iVar6 = FUN_005cade0(uVar1,iVar3,0,param_3,param_4,local_30,local_4,0);
        if (-1 < iVar6) {
          do {
            iVar8 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + iVar6 * 4);
            if (((*(uint *)(iVar8 + 0x10) & 8) == 0) && ((*(uint *)(iVar8 + 0x10) & 0x100000) == 0))
            {
              local_c = *(int *)(iVar8 + 0x1c);
              uVar4 = *(uint *)(iVar8 + 0x18);
              iVar9 = local_38;
              if ((uVar4 != param_3 + param_5) ||
                 (local_c != param_4 + param_6 + (uint)CARRY4(param_3,param_5))) {
                uVar10 = *(uint *)(iVar8 + 0x20) + uVar4;
                iVar8 = *(int *)(iVar8 + 0x24) + local_c +
                        (uint)CARRY4(*(uint *)(iVar8 + 0x20),uVar4);
                if ((uVar10 != param_3) || (iVar8 != param_4)) {
                  if (local_2c <= iVar6) {
                    local_2c = iVar6;
                  }
                  local_3c = local_3c + 1;
                  if (local_24 < 0) {
                    local_24 = iVar6;
                  }
                  if ((local_c <= param_4) &&
                     ((((local_c < param_4 || (uVar4 < param_3)) && (param_4 <= iVar8)) &&
                      ((param_4 < iVar8 || (param_3 < uVar10)))))) {
                    if (local_28 <= iVar6) {
                      local_28 = iVar6;
                    }
                    local_38 = local_38 + 1;
                    iVar9 = local_38;
                  }
                }
              }
            }
            iVar6 = FUN_005cade0(uVar1,iVar3,iVar6 + 1,param_3,param_4,local_8,local_4,0);
          } while (-1 < iVar6);
          if (local_3c != 0) {
            FUN_004ea250(uVar1,iVar3,1,0);
            if ((iVar9 < local_3c) && (param_7 == 0)) {
              local_2c = local_2c * 4;
              do {
                iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + local_2c);
                iVar8 = *(int *)(iVar6 + 0x1c);
                uVar4 = *(uint *)(iVar6 + 0x18);
                if ((param_4 <= iVar8) && ((param_4 < iVar8 || (param_3 <= uVar4)))) {
                  FUN_005c97b0(uVar1,iVar6,uVar4 + param_5,
                               iVar8 + param_6 + (uint)CARRY4(uVar4,param_5),local_14);
                  local_3c = local_3c + -1;
                  local_40 = local_40 + 1;
                }
                local_2c = local_2c + -4;
              } while (iVar9 < local_3c);
            }
            if (iVar9 < 1) {
              if ((param_7 != 0) && (param_5 != 0 || param_6 != 0)) {
                FUN_005c9930(uVar1,iVar3,local_24,param_5,param_6);
                local_40 = local_40 + 1;
              }
            }
            else {
              local_24 = param_7;
              local_28 = local_28 * 4;
              do {
                uVar7 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + local_28);
                FUN_004ea880(uVar1);
                local_34 = FUN_005ca440(uVar1,uVar7,param_3,param_4,param_5,param_6,local_24,0,
                                        param_9,param_10);
                if (local_34 < 0) goto LAB_0046cf7f;
                if (local_34 == 0) {
                  iVar9 = iVar9 + -1;
                  local_40 = local_40 + 1;
                  local_24 = 0;
                }
                local_28 = local_28 + -4;
              } while (0 < iVar9);
            }
            if (-1 < local_34) goto LAB_0046cf6a;
            break;
          }
        }
        if ((param_7 != 0) && (iVar9 = FUN_005c8bb0(iVar3,param_3,param_4), -1 < iVar9)) {
          FUN_004ea250(uVar1,iVar3,1,0);
          FUN_005c9930(uVar1,iVar3,iVar9,param_5,param_6);
          local_40 = local_40 + 1;
        }
      }
LAB_0046cf6a:
      local_20 = local_20 + 1;
    } while (local_20 < iVar2);
  }
LAB_0046cf7f:
  if (param_8 != 0) {
    FUN_004bbe90(param_1,param_3,param_4,param_5,param_6,1,1);
    local_40 = local_40 + 1;
  }
  if (DAT_0064778c != 0) {
    uVar7 = FUN_005ba4b0(uVar1,0);
    uVar7 = FUN_005ba950(uVar1,uVar7,0);
    FUN_004eaad0(uVar1,0,0x24,0);
    FUN_0044b150(uVar7,param_3,param_4,param_5,param_6,2);
  }
  FUN_005b84d0(uVar1,1);
  if (local_34 < 0) {
    _SfErrorHandler_MsgBox_24(0,0x30,8,local_34,0,0);
  }
  return local_40;
}


