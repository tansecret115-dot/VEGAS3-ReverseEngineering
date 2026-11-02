/* Module: vegas30.exe
   Function: FUN_00536360
   Address: 00536360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00536360(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint local_30 [4];
  undefined8 local_20;
  int local_18;
  undefined4 local_14;
  int local_10 [3];
  
  iVar4 = DAT_0064b138;
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return -0x7ffb1ff4;
  }
  if (param_2 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x378) = DAT_0064b138;
  if (iVar4 == 0) {
    return -0x7fff0001;
  }
  puVar11 = local_30;
  for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_30[0] = 0x10;
  iVar4 = FUN_005c8c40(iVar4,param_1 + 0x30);
  if (iVar4 == 0) {
    SfErrorHandler_DetailsAddString(0x80070057,"Can\'t find event \'%s\'",param_1 + 0x30);
    return -0x7ff8ffa9;
  }
  iVar9 = FUN_005c9450(*(undefined4 *)(param_1 + 0x378),iVar4);
  if (*(int *)(param_1 + 0x33c) == 0) {
    iVar5 = FUN_00536800(param_1 + 0x134,&local_14,local_30 + 2,&local_20,param_1 + 0x350);
  }
  else {
    iVar5 = FUN_00536770(param_1 + 0x134,&local_14,local_10);
  }
  iVar10 = param_1 + 0x134;
  if (iVar5 < 0) {
    SfErrorHandler_DetailsAddString(iVar5,"Syntax error in take \'%s\'",iVar10);
    return iVar5;
  }
  FUN_005bad20(*(undefined4 *)(param_1 + 0x378));
  FUN_005b83b0(*(undefined4 *)(param_1 + 0x378),1);
  iVar5 = FUN_005ec8a0(iVar10,&local_18,0,0);
  FUN_005b84d0(*(undefined4 *)(param_1 + 0x378),1);
  if (iVar5 < 0) {
    SfErrorHandler_DetailsAddString(iVar5,"Add media failed on file \'%s\'",iVar10);
    return iVar5;
  }
  if ((*(int *)(param_1 + 0x33c) != 0) && (local_10[0] != 0)) {
    iVar5 = FUN_005f2600(local_10[0],local_30 + 2,&local_20);
    if (iVar5 == 1) {
      iVar5 = -0x7ff8ffa9;
LAB_00536528:
      SfErrorHandler_DetailsAddString
                (iVar5,"Can\'t find region \'%s\' in file \'%s\'",local_10[0],iVar10);
      return iVar5;
    }
    if (iVar5 < 0) goto LAB_00536528;
  }
  local_38._4_4_ = 0;
  lVar12 = 1;
  if (local_18 != 0) {
    iVar5 = FUN_005f13f0(*(undefined4 *)(iVar4 + 4));
    lVar12 = CONCAT44(local_38._4_4_,1);
    if (iVar5 != 0) {
      lVar12 = ftol();
    }
  }
  local_38._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_,(undefined4)local_20);
  if ((local_20._4_4_ < 1) &&
     (local_20 = CONCAT44(local_20._4_4_,(undefined4)local_20), local_20._4_4_ < 0)) {
    local_20 = lVar12 - CONCAT44(local_30[3],local_30[2]);
    if ((local_20 < 0x100000000) && (local_20 < 0)) {
      local_20 = 0;
    }
  }
  uVar1 = *(uint *)(iVar4 + 0x20);
  iVar5 = *(int *)(iVar4 + 0x24);
  uVar3 = *(undefined8 *)(iVar4 + 0x20);
  iVar6 = FUN_005c70c0(*(undefined4 *)(param_1 + 0x378),iVar4,local_18,local_30,local_14,1,1);
  if (iVar6 < 0) {
    return iVar6;
  }
  iVar2 = *(int *)(iVar4 + 0x50);
  if (iVar2 == 0) {
    return -0x7fff0001;
  }
  if (((*(uint *)(iVar4 + 0x10) & 0x200) == 0) || (*(int *)(iVar4 + 4) != 2)) goto LAB_005366d2;
  local_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = (double)*(float *)(iVar4 + 100);
  if (*(double *)(param_1 + 0x348) <= _DAT_00610fd8) {
    iVar7 = FUN_005f81e0(iVar2,*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c),&local_40
                        );
    if (iVar7 < 0) {
      uVar14 = *(undefined4 *)(iVar2 + 0x20);
      pcVar13 = "Can\'t ReNormalize region \'%s\' in file \'%s\': No stream";
    }
    else {
      if (_DAT_00610fd8 < (double)CONCAT44(uStack_3c,local_40)) {
        local_38 = (double)(_DAT_0064774c / (float)(double)CONCAT44(uStack_3c,local_40));
        goto LAB_005366c0;
      }
      uVar14 = *(undefined4 *)(iVar2 + 0x20);
      pcVar13 = "ReNormalize value is bogus for region \'%s\' in file \'%s\'";
    }
    SfErrorHandler_DetailsAddString(0x80004005,pcVar13,uVar14,iVar10);
  }
  else {
    local_38 = (double)(_DAT_0064774c / (float)*(double *)(param_1 + 0x348));
  }
LAB_005366c0:
  FUN_005c7f20(iVar4,1,(undefined4)local_38,local_38._4_4_);
LAB_005366d2:
  if (*(int *)(param_1 + 0x340) != 0) {
    uVar8 = *(uint *)(iVar2 + 0x10);
    iVar10 = *(int *)(iVar2 + 0x14);
    local_38 = *(double *)(iVar2 + 0x10);
    if ((((*(uint *)(iVar4 + 0x10) & 0x100) != 0) && (iVar10 <= iVar5)) &&
       ((iVar10 < iVar5 || (uVar8 < uVar1)))) {
      uVar8 = uVar1;
      iVar10 = iVar5;
      local_38 = (double)uVar3;
    }
    iVar5 = (iVar10 - iVar5) - (uint)(uVar8 < uVar1);
    if (uVar8 - uVar1 != 0 || iVar5 != 0) {
      FUN_005c9930(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(iVar4 + 8),iVar9 + 1,
                   uVar8 - uVar1,iVar5);
    }
    FUN_005c7760(iVar4,0,&local_38,0,0);
    FUN_005c6cd0(iVar4,3);
  }
  if ((*(int *)(iVar4 + 4) == 3) && (*(int *)(param_1 + 0x380) != 0)) {
    *(int *)(iVar4 + 0x208) = *(int *)(param_1 + 0x380);
  }
  return iVar6;
}


