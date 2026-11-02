/* Module: erv23260.dll
   Function: FUN_6381e2d0
   Address: 6381e2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6381e2d0(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  byte *local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_20 = *(uint *)((int)param_1 + 0x37c);
  *(uint *)((int)param_1 + 0x3cc) = (uint)(*(int *)((int)param_1 + 0x310) == 0);
  *(undefined4 *)((int)param_1 + 0x434) = 0;
  puVar6 = (undefined4 *)((int)param_1 + 0x3d0);
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar7 = 0;
  local_24 = 1;
  local_18 = (byte *)0x0;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_c = local_20;
  local_8 = local_20;
  if (0 < *(int *)((int)param_1 + 0x3c0)) {
    do {
      iVar5 = local_24;
      local_1c = uVar7;
      iVar2 = FUN_637fccc0(*(void **)((int)param_1 + 0x2b4));
      if (iVar2 == 0) {
LAB_6381e631:
        iVar5 = FUN_637fcb10(*(void **)((int)param_1 + 0x2b4));
        if (iVar5 == 0) {
          return 1;
        }
        if (((local_20 < local_c) && (local_2c != 0)) &&
           (iVar2 = FUN_637fcc20(*(void **)((int)param_1 + 0x2b4),local_2c - 1), iVar2 == 0)) {
          local_8 = local_20;
          uVar7 = local_30;
        }
        else if (local_c < local_8) {
          uVar7 = local_1c;
          local_8 = local_c;
        }
        if (iVar5 == 2) break;
      }
      else {
        if (*(int *)((int)param_1 + 0x310) == 0) {
          iVar5 = uVar7 - ((int)uVar7 / *(int *)((int)param_1 + 0x3bc)) *
                          *(int *)((int)param_1 + 0x3bc);
          pbVar3 = (byte *)(*(int *)((int)param_1 + 0x39c) + uVar7);
          *pbVar3 = *pbVar3 & 0xdf;
          bVar1 = FUN_637fc9f0(*(void **)((int)param_1 + 0x2b4),iVar5);
          if (CONCAT31(extraout_var,bVar1) == 0) {
            if (uVar7 == 0) {
              local_44 = *(int *)((int)param_1 + 0x3b4);
              *(undefined4 *)((int)param_1 + 0x444) = *(undefined4 *)((int)param_1 + 0x440);
            }
          }
          else {
            iVar5 = FUN_637fc490(*(void **)((int)param_1 + 0x2b4),(int *)((int)param_1 + 0x434),
                                 (uint *)((int)param_1 + 0x438),(uint *)((int)param_1 + 0x43c),
                                 (uint *)((int)param_1 + 0x444),(uint *)((int)param_1 + 0x440));
            if (iVar5 == 0) goto LAB_6381e631;
            uVar7 = *(uint *)((int)param_1 + 0x438);
            *(undefined4 *)((int)param_1 + uVar7 * 4 + 0x3cc) = 1;
            local_44 = *(int *)((int)param_1 + 0x3b4);
            uVar7 = uVar7 * *(int *)((int)param_1 + 0x3bc);
            iVar5 = 0;
          }
        }
        else {
          iVar2 = FUN_637fc3e0(*(void **)((int)param_1 + 0x2b4));
          if ((iVar2 == 0) && (iVar5 == 0)) {
            pbVar3 = (byte *)(uVar7 + *(int *)((int)param_1 + 0x39c));
            bVar4 = *(byte *)(uVar7 + *(int *)((int)param_1 + 0x39c)) & 0xdf;
          }
          else {
            iVar2 = FUN_637fc660(*(void **)((int)param_1 + 0x2b4),iVar5,&local_34,&local_3c,
                                 &local_38,(int)param_1 + 0x1c8);
            if (iVar2 == 0) goto LAB_6381e631;
            if ((iVar5 == 0) || (local_34 != 0)) {
              *(uint *)((int)param_1 + 0x444) = local_38;
              *(uint *)((int)param_1 + 0x440) = local_38;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x444) = *(undefined4 *)((int)param_1 + 0x440);
            }
            local_44 = *(int *)((int)param_1 + 0x3b4);
            local_48 = 1;
            pbVar3 = (byte *)(local_34 + *(int *)((int)param_1 + 0x39c));
            local_24 = 0;
            bVar4 = *(byte *)(local_34 + *(int *)((int)param_1 + 0x39c)) | 0x20;
            uVar7 = local_34;
          }
          *pbVar3 = bVar4;
          iVar5 = uVar7 - ((int)uVar7 / *(int *)((int)param_1 + 0x3bc)) *
                          *(int *)((int)param_1 + 0x3bc);
        }
        if ((int)local_1c < (int)uVar7) {
          FUN_6381d730(param_1,local_1c,uVar7);
        }
        else {
          *(byte *)(uVar7 + *(int *)((int)param_1 + 0x39c)) =
               *(byte *)(uVar7 + *(int *)((int)param_1 + 0x39c)) & 0xbf;
        }
        iVar2 = *(int *)((int)param_1 + 0x3b4);
        if (iVar5 < iVar2) {
          if (iVar5 == 0) {
            local_48 = 1;
          }
          if ((iVar5 + 1 == iVar2) || (1 < local_44)) {
            local_40 = 1;
          }
          else {
            local_40 = 0;
          }
        }
        else {
          if (iVar5 % iVar2 == 0) {
            local_48 = 1;
          }
          if (((iVar5 + 1) % iVar2 == 0) || (local_40 = 0, 1 < local_44)) {
            local_40 = 1;
          }
        }
        local_28 = *(int *)((int)param_1 + 0x380) +
                   ((-(uint)(*(int *)((int)param_1 + 0x334) != 0) & 6) + 6) * uVar7 * 4;
        if ((*(int *)((int)param_1 + 0x338) != 0) || (*(int *)((int)param_1 + 0x334) != 0)) {
          local_18 = (byte *)(*(int *)((int)param_1 + 0x398) + uVar7);
          local_14 = (int *)(*(int *)((int)param_1 + 0x390) + uVar7 * 8);
          local_10 = (int *)(*(int *)((int)param_1 + 0x394) + uVar7 * 8);
        }
        iVar5 = FUN_6381d040(param_1,&local_28,(byte *)(uVar7 + *(int *)((int)param_1 + 0x38c)),
                             (undefined4 *)(uVar7 * 0x20 + *(int *)((int)param_1 + 0x388)),local_18,
                             local_14,local_10);
        if (iVar5 != 0) goto LAB_6381e631;
        pbVar3 = (byte *)(*(int *)((int)param_1 + 0x39c) + uVar7);
        *pbVar3 = *pbVar3 & 0xe0;
        if (*(int *)((int)param_1 + 0x44c) != 0) {
          *(byte *)(uVar7 + *(int *)((int)param_1 + 0x39c)) =
               *(byte *)(uVar7 + *(int *)((int)param_1 + 0x39c)) | *(byte *)((int)param_1 + 0x444);
          iVar5 = FUN_6381d860(param_1,&local_28,(int *)&local_8,
                               (byte *)(uVar7 + *(int *)((int)param_1 + 0x38c)),
                               (int *)(uVar7 * 0x20 + *(int *)((int)param_1 + 0x388)),local_18,
                               local_14,local_10,&local_48);
          if (iVar5 != 0) goto LAB_6381e631;
        }
        if (local_48 != 0) {
          local_48 = local_48 + -1;
        }
        if (local_44 != 0) {
          local_44 = local_44 + -1;
        }
        local_2c = FUN_637fd250(*(int *)((int)param_1 + 0x2b4));
        local_30 = local_1c;
        local_20 = local_c;
        local_c = local_8;
        uVar7 = uVar7 + 1;
      }
    } while ((int)uVar7 < *(int *)((int)param_1 + 0x3c0));
  }
  if ((int)uVar7 < *(int *)((int)param_1 + 0x3c0)) {
    FUN_6381d730(param_1,uVar7,*(int *)((int)param_1 + 0x3c0));
  }
  *(undefined1 *)(local_8 + 2) = 0;
  *(undefined1 *)(local_8 + 6) = 0;
  return 0;
}


