/* Module: vegas30.exe
   Function: FUN_005aedd0
   Address: 005aedd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005aedd0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,int *param_8,int *param_9)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  if (param_1[0x26e] != 0) {
    param_9 = (int *)0x1;
  }
  uVar3 = FUN_005ac830();
  uVar3 = uVar3 | (uint)param_9;
  iVar8 = param_2 + 0x9c0;
  uVar11 = CONCAT44(param_8,param_7);
  uVar6 = param_6;
  uVar4 = FUN_005a5bd0(param_5,0,iVar8);
  piVar5 = (int *)FUN_005add10(param_2,param_3,param_1 + 2,*param_1,param_1[0x4dd],param_1[0x4de],
                               param_1[0x4df],param_4,uVar4,uVar6,uVar11,uVar3);
  if (param_1[0x26e] == 0) {
    return piVar5;
  }
  uVar3 = FUN_005ac830();
  uVar3 = uVar3 | (uint)param_9;
  uVar11 = CONCAT44(param_8,param_7);
  uVar6 = FUN_005a5bd0(param_5,0,iVar8);
  param_9 = (int *)FUN_005add10(param_2,param_3,param_1 + 0x270,param_1[0x26e],0,0,0,param_4,uVar6,
                                param_6,uVar11,uVar3);
  iVar7 = _SfGetPixelType_4(*piVar5);
  if ((iVar7 != *(int *)(param_2 + 0x30)) || ((*(byte *)(piVar5 + 0x10d) & 1) != 0)) {
    piVar5 = (int *)FUN_005a5de0(param_4,piVar5,0,iVar8);
  }
  iVar7 = _SfGetPixelType_4(*param_9);
  if (iVar7 != *(int *)(param_2 + 0x30)) {
    param_9 = (int *)FUN_005a5de0(param_4,param_9,0,iVar8);
  }
  iVar8 = _SfGetPixelType_4(*piVar5);
  piVar2 = (int *)*piVar5;
  local_4 = piVar2[2];
  local_8 = piVar2[1];
  local_10 = 0;
  local_c = 0;
  param_7 = param_9[0x10c];
  piVar9 = (int *)*param_9;
  if (param_7 == 0) {
    uVar3 = (uint)*(ushort *)((int)piVar9 + 0xe) * piVar9[1] + 0x1f;
    param_7 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  param_8 = (int *)param_9[0x10b];
  if (param_8 == (int *)0x0) {
    if (piVar9[4] == 0) {
      if (((piVar9[8] != 0) || (uVar1 = *(ushort *)((int)piVar9 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_005aefcc;
      param_8._0_1_ = (byte)uVar1;
      param_8 = (int *)(*(int *)*param_9 + (1 << ((byte)param_8 & 0x1f)) * 4 + *param_9);
    }
    else if (piVar9[4] == 3) {
      param_8 = piVar9 + 0xd;
    }
    else {
LAB_005aefcc:
      param_8 = (int *)(*piVar9 + piVar9[8] * 4 + (int)piVar9);
    }
  }
  iVar7 = piVar5[0x10c];
  if (iVar7 == 0) {
    uVar3 = (uint)*(ushort *)((int)piVar2 + 0xe) * piVar2[1] + 0x1f;
    iVar7 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  piVar9 = (int *)piVar5[0x10b];
  if (piVar9 != (int *)0x0) goto LAB_005af045;
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_005af03b;
    iVar10 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar2[4] == 3) {
      piVar9 = piVar2 + 0xd;
      goto LAB_005af045;
    }
LAB_005af03b:
    iVar10 = piVar2[8];
  }
  piVar9 = (int *)(*piVar2 + iVar10 * 4 + (int)piVar2);
LAB_005af045:
  _SfDibWeightedCrossFade_52
            (piVar9,&local_10,iVar7,0,(double)(_DAT_00619ab0 - (float)param_1[0x4dc]),param_8,
             &local_10,param_7,0,(double)(float)param_1[0x4dc],
             (-(uint)(iVar8 != 0x20) & 0xfffffff4) + 0x10);
  if (((piVar5[0x10d] & 2U) == 0) && ((*(byte *)(param_9 + 0x10d) & 2) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  piVar5[0x10d] = iVar8 << 1 | piVar5[0x10d] & 0xfffffffdU;
  (*(code *)param_9[0x114])(param_9,param_9[0x115],param_9[0x116]);
  return piVar5;
}


