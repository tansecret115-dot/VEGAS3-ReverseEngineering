/* Module: vegas30.exe
   Function: FUN_00496c80
   Address: 00496c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00496c80(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  if (DAT_006476b8 == 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_4,param_3);
    }
    if (-1 < param_4) {
      _param_3 = ftol();
      uVar11 = ftol();
      return uVar11;
    }
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + (uint)bVar10);
    _param_3 = ftol();
    uVar11 = ftol();
    return CONCAT44(-((int)((ulonglong)uVar11 >> 0x20) + (uint)((int)uVar11 != 0)),-(int)uVar11);
  }
  uVar7 = *(uint *)(param_1 + 400);
  uVar8 = param_3 - uVar7;
  iVar9 = (param_4 - *(int *)(param_1 + 0x194)) - (uint)(param_3 < uVar7);
  uVar2 = uVar7 + param_3;
  iVar5 = *(int *)(param_1 + 0x194) + param_4 + (uint)CARRY4(uVar7,param_3);
  iVar3 = FUN_004942c0(param_1,&param_3);
  if (iVar3 != 0) {
    return CONCAT44(param_4,param_3);
  }
  iVar3 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),param_2);
  if ((0 < iVar3) &&
     (iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 8) + 0x24) + 8) + -4 + iVar3 * 4),
     param_2 != iVar6)) {
    uVar7 = *(uint *)(iVar6 + 0x20) + *(uint *)(iVar6 + 0x18);
    iVar6 = *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x1c) +
            (uint)CARRY4(*(uint *)(iVar6 + 0x20),*(uint *)(iVar6 + 0x18));
    if (((iVar9 <= iVar6) && (((iVar9 < iVar6 || (uVar8 <= uVar7)) && (iVar6 <= iVar5)))) &&
       ((iVar6 < iVar5 || (uVar7 <= uVar2)))) {
      if (DAT_006476c0 == 0) {
        return CONCAT44(iVar6,uVar7);
      }
      if (iVar6 < 0) {
        param_3 = -uVar7;
        param_4 = -(iVar6 + (uint)(uVar7 != 0));
        _param_3 = ftol();
        uVar11 = ftol();
        return CONCAT44(-((int)((ulonglong)uVar11 >> 0x20) + (uint)((int)uVar11 != 0)),-(int)uVar11)
        ;
      }
      _param_3 = ftol();
      uVar11 = ftol();
      return uVar11;
    }
  }
  piVar1 = *(int **)(*(int *)(param_2 + 8) + 0x24);
  if (iVar3 + 1 < *piVar1) {
    iVar3 = *(int *)(piVar1[2] + (iVar3 + 1) * 4);
    uVar7 = *(uint *)(iVar3 + 0x18);
    iVar6 = *(int *)(iVar3 + 0x1c);
    if (((iVar9 <= iVar6) && ((iVar9 < iVar6 || (uVar8 <= uVar7)))) &&
       ((iVar6 <= iVar5 && ((iVar6 < iVar5 || (uVar7 <= uVar2)))))) {
      if (DAT_006476c0 == 0) {
        return *(undefined8 *)(iVar3 + 0x18);
      }
      if (-1 < iVar6) {
        _param_3 = ftol();
        uVar11 = ftol();
        return uVar11;
      }
      param_3 = -uVar7;
      param_4 = -(iVar6 + (uint)(uVar7 != 0));
      _param_3 = ftol();
      uVar11 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar11 >> 0x20) + (uint)((int)uVar11 != 0)),-(int)uVar11);
    }
    uVar4 = *(uint *)(iVar3 + 0x20) + uVar7;
    iVar3 = *(int *)(iVar3 + 0x24) + iVar6 + (uint)CARRY4(*(uint *)(iVar3 + 0x20),uVar7);
    if ((iVar9 <= iVar3) &&
       ((((iVar9 < iVar3 || (uVar8 <= uVar4)) && (iVar3 <= iVar5)) &&
        ((iVar3 < iVar5 || (uVar4 <= uVar2)))))) {
      if (DAT_006476c0 == 0) {
        return CONCAT44(iVar3,uVar4);
      }
      if (-1 < iVar3) {
        _param_3 = ftol();
        uVar11 = ftol();
        return uVar11;
      }
      param_3 = -uVar4;
      param_4 = -(iVar3 + (uint)(uVar4 != 0));
      _param_3 = ftol();
      uVar11 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar11 >> 0x20) + (uint)((int)uVar11 != 0)),-(int)uVar11);
    }
  }
  uVar11 = FUN_00494da0(param_1,param_3,param_4);
  return uVar11;
}


