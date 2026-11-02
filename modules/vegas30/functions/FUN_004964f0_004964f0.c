/* Module: vegas30.exe
   Function: FUN_004964f0
   Address: 004964f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_004964f0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  
  if (DAT_006476b8 == 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_4,param_3);
    }
    if (param_4 < 0) {
      bVar15 = param_3 != 0;
      param_3 = -param_3;
      param_4 = -(param_4 + (uint)bVar15);
      _param_3 = ftol();
      uVar16 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar16 >> 0x20) + (uint)((int)uVar16 != 0)),-(int)uVar16);
    }
    _param_3 = ftol();
    uVar16 = ftol();
    return uVar16;
  }
  iVar12 = *(int *)(param_2 + 8);
  uVar1 = *(uint *)(param_1 + 400);
  uVar13 = param_3 - uVar1;
  iVar14 = (param_4 - *(int *)(param_1 + 0x194)) - (uint)(param_3 < uVar1);
  uVar5 = uVar1 + param_3;
  iVar8 = *(int *)(param_1 + 0x194) + param_4 + (uint)CARRY4(uVar1,param_3);
  iVar6 = FUN_004942c0(param_1,&param_3);
  if (iVar6 != 0) {
    if (DAT_006476c0 == 0) {
      return CONCAT44(param_4,param_3);
    }
    if (-1 < param_4) {
      _param_3 = ftol();
      uVar16 = ftol();
      return uVar16;
    }
    bVar15 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + (uint)bVar15);
    _param_3 = ftol();
    uVar16 = ftol();
    return CONCAT44(-((int)((ulonglong)uVar16 >> 0x20) + (uint)((int)uVar16 != 0)),-(int)uVar16);
  }
  iVar6 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),param_2);
  piVar2 = *(int **)(iVar12 + 0x24);
  if (piVar2 == (int *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *piVar2;
  }
  if ((iVar6 + -1 < 0) || (iVar12 + -1 < iVar6 + -1)) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(piVar2[2] + -4 + iVar6 * 4);
  }
  if ((iVar12 != 0) && (*(int *)(param_1 + 0xa4) != 0x1c)) {
    uVar1 = *(uint *)(iVar12 + 0x18);
    uVar7 = *(uint *)(iVar12 + 0x20);
    iVar3 = *(int *)(iVar12 + 0x24);
    iVar4 = *(int *)(iVar12 + 0x1c);
    uVar9 = uVar1 + uVar7;
    iVar11 = iVar4 + iVar3 + (uint)CARRY4(uVar1,uVar7);
    if ((iVar14 <= iVar11) &&
       ((((iVar14 < iVar11 || (uVar13 <= uVar9)) && (iVar11 <= iVar8)) &&
        ((iVar11 < iVar8 || (uVar9 <= uVar5)))))) {
      if (DAT_006476c0 == 0) {
        return CONCAT44(iVar11,uVar9);
      }
      if (iVar11 < 0) {
        param_3 = -uVar9;
        param_4 = -(iVar11 + (uint)(uVar9 != 0));
        _param_3 = ftol();
        uVar16 = ftol();
        return CONCAT44(-((int)((ulonglong)uVar16 >> 0x20) + (uint)((int)uVar16 != 0)),-(int)uVar16)
        ;
      }
      _param_3 = ftol();
      uVar16 = ftol();
      return uVar16;
    }
    uVar10 = uVar9 - DAT_00649988;
    iVar11 = (iVar11 - DAT_0064998c) - (uint)(uVar9 < DAT_00649988);
    if (((DAT_0064998c <= iVar3) && ((DAT_0064998c < iVar3 || (DAT_00649988 < uVar7)))) &&
       ((iVar14 <= iVar11 &&
        ((((iVar14 < iVar11 || (uVar13 <= uVar10)) && (iVar11 <= iVar8)) &&
         ((iVar11 < iVar8 || (uVar10 <= uVar5)))))))) {
      if (DAT_006476c0 == 0) {
        return CONCAT44(iVar11,uVar10);
      }
      if (iVar11 < 0) {
        param_3 = -uVar10;
        param_4 = -(iVar11 + (uint)(uVar10 != 0));
        _param_3 = ftol();
        uVar16 = ftol();
        return CONCAT44(-((int)((ulonglong)uVar16 >> 0x20) + (uint)((int)uVar16 != 0)),-(int)uVar16)
        ;
      }
      _param_3 = ftol();
      uVar16 = ftol();
      return uVar16;
    }
    if ((((iVar14 <= iVar4) && ((iVar14 < iVar4 || (uVar13 <= uVar1)))) && (iVar4 <= iVar8)) &&
       ((iVar4 < iVar8 || (uVar1 <= uVar5)))) {
      if (DAT_006476c0 == 0) {
        return *(undefined8 *)(iVar12 + 0x18);
      }
      if (iVar4 < 0) {
        param_3 = -uVar1;
        param_4 = -(iVar4 + (uint)(uVar1 != 0));
        _param_3 = ftol();
        uVar16 = ftol();
        return CONCAT44(-((int)((ulonglong)uVar16 >> 0x20) + (uint)((int)uVar16 != 0)),-(int)uVar16)
        ;
      }
      _param_3 = ftol();
      uVar16 = ftol();
      return uVar16;
    }
  }
  iVar6 = iVar6 + 1;
  if (piVar2 == (int *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *piVar2;
  }
  if ((iVar6 < 0) || (iVar12 + -1 < iVar6)) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(piVar2[2] + iVar6 * 4);
  }
  if (iVar12 != 0) {
    iVar6 = *(int *)(iVar12 + 0x1c);
    uVar1 = *(uint *)(iVar12 + 0x18);
    if (((iVar14 <= iVar6) && (((iVar14 < iVar6 || (uVar13 <= uVar1)) && (iVar6 <= iVar8)))) &&
       ((iVar6 < iVar8 || (uVar1 <= uVar5)))) {
      if (DAT_006476c0 == 0) {
        return *(undefined8 *)(iVar12 + 0x18);
      }
      if (-1 < iVar6) {
        _param_3 = ftol();
        uVar16 = ftol();
        return uVar16;
      }
      param_3 = -uVar1;
      param_4 = -(iVar6 + (uint)(uVar1 != 0));
      _param_3 = ftol();
      uVar16 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar16 >> 0x20) + (uint)((int)uVar16 != 0)),-(int)uVar16);
    }
    uVar7 = *(uint *)(iVar12 + 0x20) + uVar1;
    iVar12 = *(int *)(iVar12 + 0x24) + iVar6 + (uint)CARRY4(*(uint *)(iVar12 + 0x20),uVar1);
    if (((iVar14 <= iVar12) && ((iVar14 < iVar12 || (uVar13 <= uVar7)))) &&
       ((iVar12 <= iVar8 && ((iVar12 < iVar8 || (uVar7 <= uVar5)))))) {
      if (DAT_006476c0 == 0) {
        return CONCAT44(iVar12,uVar7);
      }
      if (-1 < iVar12) {
        _param_3 = ftol();
        uVar16 = ftol();
        return uVar16;
      }
      param_3 = -uVar7;
      param_4 = -(iVar12 + (uint)(uVar7 != 0));
      _param_3 = ftol();
      uVar16 = ftol();
      return CONCAT44(-((int)((ulonglong)uVar16 >> 0x20) + (uint)((int)uVar16 != 0)),-(int)uVar16);
    }
  }
  uVar16 = FUN_00494da0(param_1,param_3,param_4);
  return uVar16;
}


