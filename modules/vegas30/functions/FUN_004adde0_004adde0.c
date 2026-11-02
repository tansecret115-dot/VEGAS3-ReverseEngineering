/* Module: vegas30.exe
   Function: FUN_004adde0
   Address: 004adde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_004adde0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,uint param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int unaff_EDI;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_c;
  int local_8;
  
  iVar8 = 1;
  if ((param_2 != 0) && (param_10 != 0)) {
    local_30 = FUN_004ab0a0(param_2,param_10,1);
    local_2c = (undefined4 *)&stack0xffffffbc;
    puVar9 = (undefined4 *)&stack0xffffffbc;
    puVar11 = (undefined4 *)&stack0xffffffbc;
    if (0 < local_30) {
      if (param_9 == -0x80000000) {
        iVar8 = FUN_004addc0();
        return iVar8;
      }
      local_20 = 0;
      FUN_0060ac30();
      iVar7 = local_30;
      if (0 < local_30) {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
      }
      local_24 = 0;
      iVar7 = *(int *)(param_1 + 0xbc8);
      if ((iVar7 == 0) || (iVar2 = FUN_005b87b0(iVar7), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = _DAT_00000000;
        if (*(int *)(param_1 + 0xbc8) != 0) {
          piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
          iVar2 = *piVar3;
        }
      }
      local_8 = param_9;
      if (*(int *)(param_1 + 0xbc8) == 0) {
        local_1c = 0;
      }
      else {
        local_1c = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar12 = 0;
      local_38 = param_7;
      local_34 = param_8;
      if (0 < local_30) {
        do {
          FUN_004a9cd0(iVar12);
          iVar5 = iVar12;
          do {
            iVar12 = iVar5 + 1;
            iVar4 = FUN_004a9cd0(iVar5);
            iVar5 = FUN_004a9cf0(param_10,iVar4);
            if ((iVar5 != 0) && (iVar5 = FUN_004ab060(param_2,iVar4), iVar5 != 0)) break;
            iVar5 = iVar12;
          } while (iVar12 < 6);
          iVar5 = FUN_004aafe0(param_2,iVar4,0);
          if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x8c) & 2) == 0)) {
            local_c = 0;
            iVar5 = local_8;
            if (iVar2 < 1) {
LAB_004adfda:
              local_8 = iVar5;
              iVar8 = FUN_004abe00(param_1,iVar7,iVar4,local_8,&local_c,&local_8);
              if (-1 < iVar8) {
                iVar2 = iVar2 + 1;
              }
              if (local_c == 0) goto LAB_004ae077;
            }
            else {
              if (param_9 < 0) {
                local_8 = 0;
              }
              else {
                local_8 = param_9;
                if (iVar2 < param_9) {
                  local_8 = iVar2;
                }
              }
              local_c = FUN_004aa940(local_1c,local_8);
              iVar13 = local_8;
              if ((local_c == 0) ||
                 ((iVar5 = local_c, iVar1 = local_8, *(int *)(local_c + 4) != iVar4 &&
                  (*(int *)(local_c + 4) != 0)))) {
                if (local_c != 0) {
                  iVar5 = FUN_004a9c80(iVar4,*(undefined4 *)(local_c + 4));
                  iVar13 = iVar13 + iVar5;
                }
                local_c = 0;
                iVar5 = 0;
                if ((iVar13 < 0) || (iVar5 = iVar2, iVar2 <= iVar13)) goto LAB_004adfda;
                iVar5 = FUN_004aa940(local_1c,iVar13);
                if (((iVar5 == 0) ||
                    ((iVar1 = iVar13, *(int *)(iVar5 + 4) != iVar4 && (*(int *)(iVar5 + 4) != 0))))
                   && (iVar5 = local_c, iVar1 = local_8, local_8 < iVar13)) {
                  iVar1 = local_8 + 1;
                }
              }
              local_8 = iVar1;
              local_c = iVar5;
              iVar5 = local_8;
              if (local_c == 0) goto LAB_004adfda;
            }
            if ((((*(int *)(local_c + 4) == iVar4) || (*(int *)(local_c + 4) == 0)) &&
                (iVar8 = FUN_004ad9f0(iVar7,local_c,param_7,param_8,iVar4,&local_20), -1 < iVar8))
               && (iVar8 = FUN_004ad710(param_2,0,param_3,param_4,param_5,param_6,local_20,1),
                  -1 < iVar8)) {
              FUN_004cb2d0(param_1,local_8,1);
              *local_2c = local_20;
              local_24 = local_24 + 1;
              local_2c = local_2c + 1;
            }
          }
LAB_004ae077:
          local_30 = local_30 + -1;
        } while (local_30 != 0);
        if (1 < local_24) {
          FUN_004e9f70(iVar7,0x28,"tvAddMedia");
          FUN_004ea880(iVar7);
          iVar8 = FUN_005d9840(iVar7,DAT_0064a580,&param_2,0);
          if (-1 < iVar8) {
            if (0 < local_24) {
              do {
                FUN_004ea750(iVar7,*puVar9,2,1);
                FUN_005d9da0(iVar7,param_2,*puVar9);
                puVar9 = puVar9 + 1;
                local_24 = local_24 + -1;
              } while (local_24 != 0);
            }
            FUN_004eb2b0(iVar7);
          }
          FUN_004ea040(iVar7,0);
        }
      }
      uVar6 = 0;
      iVar7 = 0;
      if (unaff_EDI != 0) {
        if (-1 < *(int *)(unaff_EDI + 0x24)) {
          uVar6 = *(uint *)(unaff_EDI + 0x20);
          iVar7 = *(int *)(unaff_EDI + 0x24);
        }
      }
      if ((-1 < iVar7) && ((0 < iVar7 || (uVar6 != 0)))) {
        iVar2 = 0;
        uVar10 = 0;
        if (DAT_0064a518 != 0) {
          iVar2 = DAT_0064998c;
          uVar10 = DAT_00649988;
        }
        local_38 = uVar6 + param_7;
        local_34 = iVar7 + param_8 + (uint)CARRY4(uVar6,param_7);
        if ((iVar2 <= local_34) && ((iVar2 < local_34 || (uVar10 < local_38)))) {
          bVar14 = local_38 < uVar10;
          local_38 = local_38 - uVar10;
          local_34 = (local_34 - iVar2) - (uint)bVar14;
        }
        if ((*(int *)(param_1 + 0xccc) <= local_34) &&
           ((*(int *)(param_1 + 0xccc) < local_34 || (*(uint *)(param_1 + 0xcc8) <= local_38)))) {
          *(uint *)(param_1 + 0xcc8) = local_38;
          *(int *)(param_1 + 0xccc) = local_34;
          FUN_004ca990(param_1);
        }
      }
      FUN_00458030(param_1,local_38,local_34,1);
      FUN_00455090(param_1,0xf);
      return iVar8;
    }
  }
  return 1;
}


