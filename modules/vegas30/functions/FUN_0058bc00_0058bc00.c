/* Module: vegas30.exe
   Function: FUN_0058bc00
   Address: 0058bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0058bc00(undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [4];
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c [2];
  int local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar2 = (int *)FUN_005b87b0(param_1);
  iVar7 = 0;
  local_5c = 0;
  iVar1 = *piVar2;
  if (0 < iVar1) {
    do {
      iVar4 = *(int *)(piVar2[2] + iVar7 * 4);
      if (((*(byte *)(iVar4 + 0x10) & 0x80) != 0) && (iVar3 = 0, 0 < **(int **)(iVar4 + 0x24))) {
        do {
          local_9c = *(int *)(*(int *)(*(int *)(iVar4 + 0x24) + 8) + iVar3 * 4);
          if ((*(byte *)(local_9c + 0x10) & 0x10) != 0) {
            local_5c = 1;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < **(int **)(iVar4 + 0x24));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  DAT_0064761c = DAT_0064761c | 0x800;
  local_64 = piVar2;
  local_50 = iVar1;
  iVar7 = FUN_004e9f70(param_1,0x10,0);
  if (-1 < iVar7) {
    FUN_004eb0f0(param_1,0x26,0);
  }
  local_68 = 0;
  if (0 < iVar1) {
    do {
      local_78 = 0;
      iVar1 = *(int *)(piVar2[2] + local_68 * 4);
      if ((((*(int *)(iVar1 + 4) == 2) && ((*(byte *)(iVar1 + 0x10) & 0x80) != 0)) &&
          (*(int *)(iVar1 + 0x354) != 0)) && (*(int *)(iVar1 + 0x36c) != 0)) {
        iVar7 = FUN_005ebfb0(*(int *)(iVar1 + 0x354));
        if (-1 < iVar7) {
          FUN_005ed3f0(*(undefined4 *)(iVar1 + 0x354));
          FUN_005ec620();
          FUN_005ed410(*(undefined4 *)(iVar1 + 0x354),1,0);
        }
        local_80 = param_4;
        *(undefined4 *)(iVar1 + 0x3c0) = 0;
        *(undefined4 *)(iVar1 + 0x3c8) = 0;
        local_88 = param_2;
        local_84 = param_3;
        local_7c = param_5;
        local_60 = 0;
        *(undefined4 *)(iVar1 + 0x24c) = 0;
        *(undefined4 *)(iVar1 + 0x3c4) = 0;
        *(undefined4 *)(iVar1 + 0x3cc) = 0;
        *(undefined4 *)(iVar1 + 0x3d0) = 0;
        *(int *)(iVar1 + 0x3d4) = param_6;
        if ((param_3 < 1) && (param_3 < 0)) {
          local_90 = 0;
          local_8c = 0;
        }
        else {
          local_90 = param_2;
          local_8c = param_3;
        }
        local_94 = param_3;
        if (*(int *)(DAT_0065a06c + 0xd4) == 0) {
LAB_0058bee9:
          local_98 = param_2;
          iVar4 = param_3;
          if ((param_5 < 1) && (param_5 < 0)) {
            local_6c = -1;
            local_70 = 0xffffffff;
            uVar5 = local_70;
            iVar7 = local_6c;
          }
          else {
            local_70 = param_4;
            uVar5 = param_4;
            iVar7 = param_5;
            local_6c = param_5;
          }
        }
        else {
          iVar7 = *(int *)(DAT_0065a06c + 0xc4);
          uVar6 = *(uint *)(DAT_0065a06c + 0xb0);
          uVar5 = *(uint *)(DAT_0065a06c + 0xc0);
          iVar4 = *(int *)(DAT_0065a06c + 0xb4);
          iVar3 = iVar4 + iVar7 + (uint)CARRY4(uVar6,uVar5);
          local_58 = uVar5;
          local_54 = iVar7;
          local_14 = iVar4;
          if ((iVar3 < param_3) || ((iVar3 <= param_3 && (uVar6 + uVar5 < param_2))))
          goto LAB_0058bee9;
          local_98 = param_2;
          if ((param_2 == uVar6 + uVar5) && (param_3 == iVar3)) {
            local_98 = uVar6;
            local_94 = iVar4;
          }
          if ((local_94 < 0) || ((local_94 < 1 && (local_98 == 0)))) {
            local_98 = 0;
            local_94 = 0;
          }
          local_90 = uVar6;
          local_8c = iVar4;
          local_88 = uVar6;
          local_84 = iVar4;
          local_80 = uVar5;
          local_7c = iVar7;
          local_70 = uVar5;
          local_6c = iVar7;
          if ((local_94 <= iVar4) && ((local_94 < iVar4 || (local_98 < uVar6)))) {
            *(uint *)(iVar1 + 0x3c0) = uVar6 - local_98;
            local_8 = *(undefined4 *)(iVar1 + 0x35c);
            *(uint *)(iVar1 + 0x3c4) = (iVar4 - local_94) - (uint)(uVar6 < local_98);
            uStack_4 = 0;
            uVar8 = ftol();
            *(undefined8 *)(iVar1 + 0x3c8) = uVar8;
          }
        }
        local_74 = FUN_005cade0(param_1,iVar1,0,local_90,local_8c,uVar5,iVar7,0);
        if (local_5c != 0) {
          for (; -1 < local_74;
              local_74 = FUN_005cade0(param_1,iVar1,local_74 + 1,local_90,local_8c,uVar5,iVar7,0)) {
            local_9c = *(int *)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + local_74 * 4);
            uVar6 = *(uint *)(local_9c + 0x10);
            if ((uVar6 & 0x100000) == 0) {
              if ((uVar6 & 8) == 0) {
                *(uint *)(local_9c + 0x10) = (uVar6 & 0x10) << 0x10 | uVar6 & 0xffefffff;
              }
              else {
                *(uint *)(local_9c + 0x10) = uVar6 & 0xffefffff;
              }
              if ((*(uint *)(local_9c + 0x10) & 0x100000) != 0) {
                FUN_004ea250(param_1,iVar1,1,0);
                FUN_004ea880(param_1);
                FUN_004eb2b0(param_1);
                *(undefined4 *)(local_9c + 0x28) = 0;
                *(undefined4 *)(local_9c + 0x2c) = 0x3ff00000;
                iVar7 = *(int *)(local_9c + 0x1c);
                uVar6 = *(uint *)(local_9c + 0x18);
                if ((iVar7 <= iVar4) && ((iVar7 < iVar4 || (uVar6 < local_88)))) {
                  iVar3 = *(uint *)(local_9c + 0x20) + uVar6;
                  iVar7 = (*(int *)(local_9c + 0x24) + iVar7 +
                          (uint)CARRY4(*(uint *)(local_9c + 0x20),uVar6)) - (uint)(iVar3 == 0);
                  if ((iVar4 <= iVar7) && ((iVar4 < iVar7 || (local_88 < iVar3 - 1U)))) {
                    FUN_005ca440(param_1,local_9c,local_88,iVar4,0,0,0,&local_48,0,0);
                    local_78 = 1;
                    *(uint *)(local_9c + 0x10) = *(uint *)(local_9c + 0x10) & 0xffefffff;
                    local_9c = local_48;
                  }
                }
                uVar6 = *(uint *)(local_9c + 0x18);
                uVar5 = local_80 + local_88;
                iVar7 = *(int *)(local_9c + 0x1c);
                iVar4 = local_7c + iVar4 + (uint)CARRY4(local_80,local_88);
                if ((iVar7 <= iVar4) && ((iVar7 < iVar4 || (uVar6 < uVar5)))) {
                  iVar3 = *(uint *)(local_9c + 0x20) + uVar6;
                  iVar7 = (*(int *)(local_9c + 0x24) + iVar7 +
                          (uint)CARRY4(*(uint *)(local_9c + 0x20),uVar6)) - (uint)(iVar3 == 0);
                  if ((iVar4 <= iVar7) && ((iVar4 < iVar7 || (uVar5 < iVar3 - 1U)))) {
                    FUN_005ca440(param_1,local_9c,uVar5,iVar4,0,0,0,local_1c,0,0);
                    local_78 = 1;
                    *(uint *)(local_1c[0] + 0x10) = *(uint *)(local_1c[0] + 0x10) & 0xffefffff;
                  }
                }
                iVar7 = local_94;
                if (param_6 == 0) {
LAB_0058c176:
                  if (local_78 != 0) goto LAB_0058c17e;
                }
                else {
                  uVar6 = *(uint *)(local_9c + 0x18);
                  iVar4 = *(int *)(local_9c + 0x1c) + (uint)(0xfffffffe < uVar6);
                  if ((local_94 < iVar4) || ((local_94 <= iVar4 && (local_98 < uVar6 + 1))))
                  goto LAB_0058c176;
                  iVar3 = *(uint *)(local_9c + 0x20) + uVar6;
                  iVar4 = (*(int *)(local_9c + 0x24) + *(int *)(local_9c + 0x1c) +
                          (uint)CARRY4(*(uint *)(local_9c + 0x20),uVar6)) - (uint)(iVar3 == 0);
                  if ((iVar4 < local_94) ||
                     (((iVar4 <= local_94 && (iVar3 - 1U <= local_98)) ||
                      (FUN_005ca440(param_1,local_9c,local_98,local_94,0,0,0,&local_4c,0,0),
                      local_4c == 0)))) goto LAB_0058c176;
                  *(uint *)(local_4c + 0x10) = *(uint *)(local_4c + 0x10) & 0xffefffff;
LAB_0058c17e:
                  FUN_00469280(DAT_00647630);
                }
                uVar6 = 0;
                iVar4 = 0;
                if (-1 < local_84) {
                  uVar5 = *(uint *)(local_9c + 0x18);
                  if (param_6 == 0) {
                    uVar6 = uVar5 - local_88;
                    iVar4 = (*(int *)(local_9c + 0x1c) - local_84) - (uint)(uVar5 < local_88);
                  }
                  else {
                    iVar4 = *(int *)(local_9c + 0x1c);
                    if ((iVar7 < iVar4) || ((iVar7 <= iVar4 && (local_98 <= uVar5)))) {
                      uVar6 = uVar5 - local_98;
                      iVar4 = (iVar4 - iVar7) - (uint)(uVar5 < local_98);
                    }
                    else {
                      uVar6 = (uVar5 - local_98) + local_80;
                      iVar4 = ((iVar4 - iVar7) - (uint)(uVar5 < local_98)) + local_7c +
                              (uint)CARRY4(uVar5 - local_98,local_80);
                    }
                  }
                }
                uVar5 = *(uint *)(iVar1 + 0x3c0);
                iVar7 = *(int *)(iVar1 + 0x3c4);
                piVar2 = local_44;
                for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar2 = 0;
                  piVar2 = piVar2 + 1;
                }
                local_44[0] = 0x10;
                local_34 = *(uint *)(local_9c + 0x20);
                local_30 = *(int *)(local_9c + 0x24);
                local_2c = 0;
                local_28 = 0xffffffff;
                local_44[2] = uVar6 + uVar5;
                local_44[3] = iVar4 + iVar7 + (uint)CARRY4(uVar6,uVar5);
                local_24 = _SfGetString_8(DAT_00647204,0x50ff);
                FUN_005c70c0(param_1,local_9c,*(undefined4 *)(iVar1 + 0x354),local_44,0,0,1);
                local_60 = 1;
                local_78 = 1;
                uVar5 = local_70;
                iVar4 = local_84;
                iVar7 = local_6c;
              }
            }
          }
        }
        uVar6 = local_80;
        iVar7 = local_7c;
        if (*(int *)(DAT_0065a06c + 0xd4) == 0) {
          if ((local_7c < 1) && (local_7c < 0)) {
            uVar6 = 0xffffffff;
            iVar7 = -1;
          }
        }
        else {
          uVar5 = *(uint *)(DAT_0065a06c + 0xb0);
          iVar4 = *(int *)(DAT_0065a06c + 0xb4);
          iVar3 = *(int *)(DAT_0065a06c + 0xc4) + iVar4 +
                  (uint)CARRY4(*(uint *)(DAT_0065a06c + 0xc0),uVar5);
          if ((local_94 < iVar3) ||
             ((local_94 <= iVar3 && (local_98 <= *(uint *)(DAT_0065a06c + 0xc0) + uVar5)))) {
            if ((uVar5 != local_98) || (iVar4 != local_94)) {
              if ((iVar4 < local_94) || ((iVar4 <= local_94 && (uVar5 <= local_98)))) {
                *(undefined4 *)(iVar1 + 0x3c0) = 0;
                *(undefined4 *)(iVar1 + 0x3c4) = 0;
              }
              else {
                *(undefined4 *)(iVar1 + 0x3d0) = 1;
                *(uint *)(iVar1 + 0x3c0) = uVar5 - local_98;
                *(uint *)(iVar1 + 0x3c4) = (iVar4 - local_94) - (uint)(uVar5 < local_98);
              }
              local_10 = *(undefined4 *)(iVar1 + 0x35c);
              uStack_c = 0;
              uVar8 = ftol();
              *(undefined8 *)(iVar1 + 0x3c8) = uVar8;
              if (param_6 == 0) {
                local_90 = *(uint *)(DAT_0065a06c + 0xb0);
                local_8c = *(int *)(DAT_0065a06c + 0xb4);
                uVar6 = *(uint *)(DAT_0065a06c + 0xc0);
                iVar7 = *(int *)(DAT_0065a06c + 0xc4);
              }
              else {
                local_90 = local_98;
                uVar5 = *(uint *)(DAT_0065a06c + 0xc0) + *(uint *)(DAT_0065a06c + 0xb0);
                local_8c = local_94;
                uVar6 = uVar5 - local_98;
                iVar7 = ((*(int *)(DAT_0065a06c + 0xc4) + *(int *)(DAT_0065a06c + 0xb4) +
                         (uint)CARRY4(*(uint *)(DAT_0065a06c + 0xc0),*(uint *)(DAT_0065a06c + 0xb0))
                         ) - local_94) - (uint)(uVar5 < local_98);
              }
            }
          }
          else {
            uVar6 = 0xffffffff;
            iVar7 = -1;
          }
        }
        if (local_60 == 0) {
          FUN_004ea250(param_1,iVar1,1,0);
          FUN_005c9cc0(&local_9c,param_1,iVar1,2,local_90,local_8c,iVar1 + 0x250,0,0);
          if (local_9c == 0) goto LAB_0058c58b;
          FUN_004eb2b0(param_1);
          *(uint *)(local_9c + 0x10) = *(uint *)(local_9c + 0x10) & 0xfffffeff;
          *(uint *)(local_9c + 0x10) = *(uint *)(local_9c + 0x10) | 0x40000000;
          if ((uVar6 == 0xffffffff) && (iVar7 == -1)) {
            *(uint *)(local_9c + 0x10) = *(uint *)(local_9c + 0x10) | 0x200000;
            *(int *)(iVar1 + 0x24c) = local_9c;
            if (DAT_0064b56c == 0) {
              uVar6 = 0xffffffff;
              iVar7 = 0x1fffffff;
            }
            else {
              uVar6 = 1000000;
              iVar7 = 0;
            }
          }
          else {
            *(uint *)(local_9c + 0x10) = *(uint *)(local_9c + 0x10) & 0xffdfffff;
          }
          piVar2 = local_44;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar2 = 0;
            piVar2 = piVar2 + 1;
          }
          local_44[0] = 0x10;
          local_44[2] = *(int *)(iVar1 + 0x3c0);
          local_44[3] = *(int *)(iVar1 + 0x3c4);
          local_2c = 0;
          local_28 = 0xffffffff;
          local_34 = uVar6;
          local_30 = iVar7;
          local_24 = _SfGetString_8(DAT_00647204,0x50ff);
          FUN_005c70c0(param_1,local_9c,*(undefined4 *)(iVar1 + 0x354),local_44,0,0,1);
          *(uint *)(local_9c + 0x10) = *(uint *)(local_9c + 0x10) | 0x100000;
          *(undefined4 *)(local_9c + 0x28) = 0;
          *(undefined4 *)(local_9c + 0x2c) = 0x3ff00000;
          *(uint *)(local_9c + 0x20) = uVar6;
          *(int *)(local_9c + 0x24) = iVar7;
        }
        else {
LAB_0058c58b:
          piVar2 = local_64;
          if (local_78 == 0) goto LAB_0058c5bb;
        }
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
        FUN_005b8da0(param_1,0,1);
        piVar2 = local_64;
      }
LAB_0058c5bb:
      local_68 = local_68 + 1;
    } while (local_68 < local_50);
  }
  FUN_004ea040(param_1,0);
  return 0;
}


