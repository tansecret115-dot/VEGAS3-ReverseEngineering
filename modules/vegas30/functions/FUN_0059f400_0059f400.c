/* Module: vegas30.exe
   Function: FUN_0059f400
   Address: 0059f400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0059f509) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059f400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 param_12,
                 uint param_13,int param_14,int param_15,undefined4 param_16)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *local_1bc [6];
  undefined4 local_1a4;
  int local_19c;
  int local_198;
  undefined4 local_194 [8];
  double local_174;
  uint local_104;
  int local_d8;
  double local_d4;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  uint local_b8;
  undefined4 local_b0;
  undefined1 local_ac [128];
  int local_2c;
  undefined8 local_28;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar1 = DAT_0064b138;
  local_8 = 0xffffffff;
  puStack_c = &DAT_00629ae8;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe20;
  local_b8 = 0;
  local_b0 = DAT_0064b138;
  local_c4 = 0;
  if (((param_13 & 2) == 0) || (param_15 != 0)) {
    local_19c = 0;
  }
  else {
    local_19c = param_14;
  }
  if (((param_13 & 2) == 0) || (param_15 == 0)) {
    local_198 = 0;
  }
  else {
    local_198 = param_14;
  }
  ExceptionList = &local_14;
  if (param_15 == 0) {
    ExceptionList = &local_14;
    *param_6 = 0;
    *param_8 = 0;
    *param_11 = 0;
    *param_10 = 0;
  }
  puVar2 = &stack0xfffffe20;
  local_28 = CONCAT44(local_28._4_4_,(undefined4)local_28);
  if (((DAT_0064b4f0 != 0) &&
      (puVar2 = &stack0xfffffe20, local_28 = CONCAT44(local_28._4_4_,(undefined4)local_28),
      0 < DAT_0064b158)) &&
     (puVar2 = &stack0xfffffe20, local_28 = CONCAT44(local_28._4_4_,(undefined4)local_28),
     param_15 == 0)) {
    iVar3 = FUN_005b9fc0(uVar1,param_5,0);
    iVar4 = ftol();
    lVar8 = __allrem(param_3,param_4,iVar4,iVar4 >> 0x1f);
    local_1a4 = (undefined4)lVar8;
    if (lVar8 < iVar4 / 0xf) {
      if ((local_19c == 0) && (local_198 == 0)) {
        if (*(int *)(iVar3 + 0xc4) == 0) {
          iVar4 = iVar3 + 0x108;
        }
        else {
          iVar4 = iVar3 + 0x390;
        }
        puVar5 = (undefined4 *)FUN_005a5bd0(iVar4,1,iVar3 + 0x9c0);
        FUN_0059f130(puVar5);
        *param_6 = *puVar5;
        *param_8 = puVar5[0x10b];
        *param_11 = puVar5;
        if (param_9 != (undefined4 *)0x0) {
          *param_9 = puVar5[0x10c];
          ExceptionList = local_14;
          return local_b8;
        }
      }
      else {
        FUN_005ba030(uVar1,iVar3,0,1);
        local_b8 = 1;
      }
      ExceptionList = local_14;
      return local_b8;
    }
    FUN_005ba030(uVar1,iVar3,0,1);
    puVar2 = local_1c;
  }
  do {
    while( true ) {
      while( true ) {
        local_1c = puVar2;
        local_2c = FUN_005b9fc0(uVar1,param_5,0);
        if (*(int *)(local_2c + 0x18) != 0) break;
        FUN_005ba030(uVar1,local_2c,0,1);
        Sleep(0);
        puVar2 = local_1c;
      }
      local_20 = *(int *)(local_2c + 0x20);
      puVar5 = (undefined4 *)(local_2c + 0x30);
      puVar7 = local_194;
      for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      local_c0[0] = 0;
      uVar9 = ftol();
      iVar3 = local_2c;
      local_28 = uVar9;
      if (((local_d8 != 0) && (_DAT_006106d0 / local_174 < local_d4)) && (2 < local_104)) {
        local_c4 = 1;
        FUN_005aa9e0(local_2c + 0x4c0,uVar9,local_ac,local_c0);
      }
      FUN_005ba030(uVar1,iVar3,0,1);
      FUN_005b83b0(uVar1,0);
      iVar3 = FUN_005b8900(uVar1,3);
      if (iVar3 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = FUN_0059e530(uVar1,local_194,param_1,param_2,*(undefined4 *)(DAT_0065ad10 + 8),
                             local_c0[0],local_ac,local_c4,param_16);
      }
      FUN_005b84d0(uVar1,0);
      if (uVar6 == 1) {
        ExceptionList = local_14;
        return 1;
      }
      iVar3 = FUN_005b9fc0(uVar1,param_5,0);
      local_2c = iVar3;
      if ((local_20 != *(int *)(iVar3 + 0x20)) || ((int)uVar6 < 0)) break;
      if (*(int *)(iVar3 + 0x18) != 0) {
        *(uint *)(iVar3 + 0xb0) = (DAT_0064aec8 & 1) << 5 | *(uint *)(iVar3 + 0xb0) & 0xffffffdf;
        if (param_15 == 0) {
          local_8 = 0;
          uVar6 = FUN_0059ea90(local_1bc,iVar3,*(undefined4 *)(DAT_0065ad10 + 8),local_28,local_c4,
                               local_19c);
          local_8 = 0xffffffff;
          local_b8 = uVar6;
          if (uVar6 == 0) {
            if ((*(byte *)(local_1bc[0] + 0x10d) & 4) == 0) {
              iVar4 = _SfGetPixelType_4(*local_1bc[0]);
              if ((*(int *)(iVar3 + 0xc4) == 0) || (iVar4 == *(int *)(iVar3 + 0xc4))) {
                if ((iVar4 < 0x17) || (0x1c < iVar4)) {
                  local_1bc[0] = (undefined4 *)
                                 FUN_005a5de0(iVar3 + 0x108,local_1bc[0],0,iVar3 + 0x9c0);
                }
              }
              else {
                local_1bc[0] = (undefined4 *)
                               FUN_005a5de0(iVar3 + 0x390,local_1bc[0],0,iVar3 + 0x9c0);
              }
            }
            *param_6 = *local_1bc[0];
            *param_8 = local_1bc[0][0x10b];
            *param_11 = local_1bc[0];
            if (param_9 != (undefined4 *)0x0) {
              *param_9 = local_1bc[0][0x10c];
              FUN_0059ea60(*(undefined4 *)(DAT_0065ad10 + 8));
              ExceptionList = local_14;
              return 0;
            }
            goto LAB_0059f7b4;
          }
        }
        else if ((**(int **)(DAT_0065ad10 + 8) < 2) && (local_198 != 0)) {
          iVar4 = (*(int **)(DAT_0065ad10 + 8))[2];
          iVar4 = FUN_005b0dd0(iVar4,iVar3,local_198,*(undefined4 *)(iVar3 + 0x4c),
                               *(undefined4 *)(iVar4 + 0x88));
          uVar6 = (uint)(iVar4 == 0);
        }
        else {
          uVar6 = 1;
        }
        FUN_005ba030(uVar1,iVar3,0,1);
LAB_0059f7b4:
        FUN_0059ea60(*(undefined4 *)(DAT_0065ad10 + 8));
        ExceptionList = local_14;
        return uVar6;
      }
LAB_0059f90c:
      FUN_005ba030(uVar1,iVar3,0,1);
      if (-1 < (int)uVar6) {
        FUN_0059ea60(*(undefined4 *)(DAT_0065ad10 + 8));
      }
      Sleep(0);
      puVar2 = local_1c;
    }
    if (*(int *)(iVar3 + 0x18) == 0) goto LAB_0059f90c;
    if ((int)uVar6 < 0) {
      FUN_005b8cc0(uVar1,*(undefined4 *)(iVar3 + 0x100),5,param_12);
      FUN_005ba030(uVar1,iVar3,0,1);
      ExceptionList = local_14;
      return uVar6;
    }
    FUN_005ba030(uVar1,iVar3,0,1);
    FUN_0059ea60(*(undefined4 *)(DAT_0065ad10 + 8));
    puVar2 = local_1c;
  } while( true );
}


