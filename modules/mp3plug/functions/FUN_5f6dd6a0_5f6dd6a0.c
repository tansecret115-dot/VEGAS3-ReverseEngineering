/* Module: mp3plug.dll
   Function: FUN_5f6dd6a0
   Address: 5f6dd6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_5f6dd6a0(undefined8 *param_1,double param_2,undefined8 param_3,int param_4,double param_5)

{
  bool bVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  double dVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_50;
  uint uStack_4c;
  double dStack_30;
  
  if (param_1 == (undefined8 *)0x0) {
    return 5;
  }
  puVar7 = param_1;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)puVar7 = 0;
    puVar7 = (undefined8 *)((int)puVar7 + 4);
  }
  bVar1 = _DAT_5f75cfa0 < param_2;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  if (bVar1) {
    return 3;
  }
  dVar2 = param_2 * _DAT_5f75cfa8;
  uStack_74 = (uint)((ulonglong)dVar2 >> 0x20);
  local_78 = SUB84(dVar2,0);
  uVar6 = uStack_74 >> 0x14 & 0x7ff;
  if (uVar6 < 0x3ff) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uStack_74 << 0xb | local_78 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f);
    if ((longlong)dVar2 < 0) {
      uVar6 = -uVar6;
    }
  }
  *(uint *)(param_1 + 2) = uVar6;
  if (uVar6 == 0) {
    return 2;
  }
  dVar2 = (double)uVar6 * _DAT_5f75cfb0;
  param_1[4] = (double)param_4 / dVar2;
  param_1[1] = dVar2;
  *(int *)(param_1 + 5) = param_4 << 9;
  iVar5 = FUN_5f6d9760(param_4 << 0xc);
  *(int *)((int)param_1 + 0x2c) = iVar5;
  if (iVar5 == 0) {
    FUN_5f6dd9e0((int)param_1);
    return 1;
  }
  pdVar3 = (double *)FUN_5f6d9760(param_4 << 0xc);
  if (pdVar3 == (double *)0x0) {
    FUN_5f6dd9e0((int)param_1);
    return 1;
  }
  FUN_5f6f4960(pdVar3,*(int *)(param_1 + 5),_DAT_5f75cfb8,param_5,0x200);
  dVar2 = (double)param_1[1] * _DAT_5f75cfc0;
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 5);
  if (0 < iVar5) {
    do {
      *(float *)(*(int *)((int)param_1 + 0x2c) + iVar4 * 8) =
           (float)((float10)pdVar3[iVar4] * (float10)dVar2);
      iVar5 = *(int *)(param_1 + 5);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  iVar4 = 0;
  if (iVar5 != 1 && -1 < iVar5 + -1) {
    do {
      dVar8 = ldexp(pdVar3[iVar4 + 1] - pdVar3[iVar4],9);
      *(float *)(*(int *)((int)param_1 + 0x2c) + 4 + iVar4 * 8) =
           (float)((float10)dVar8 * (float10)dVar2);
      dVar8 = ldexp((double)iVar4,-9);
      iVar5 = *(int *)((int)param_1 + 0x2c);
      *(float *)(iVar5 + iVar4 * 8) =
           *(float *)(iVar5 + iVar4 * 8) - (float)dVar8 * *(float *)(iVar5 + 4 + iVar4 * 8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 5) + -1);
  }
  dVar2 = _DAT_5f75cfd0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x2c) + 4 + iVar4 * 8) = 0;
  dVar2 = (double)param_1[4] - dVar2;
  uStack_5c = (uint)((ulonglong)dVar2 >> 0x20);
  uStack_60 = SUB84(dVar2,0);
  uVar6 = uStack_5c >> 0x14 & 0x7ff;
  if (uVar6 < 0x3ff) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uStack_5c << 0xb | uStack_60 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f);
    if ((longlong)dVar2 < 0) {
      uVar6 = -uVar6;
    }
  }
  *(uint *)(param_1 + 3) = uVar6;
  dVar2 = (dStack_30 + dStack_30) / (double)param_1[1];
  uStack_4c = (uint)((ulonglong)dVar2 >> 0x20);
  uStack_50 = SUB84(dVar2,0);
  uVar6 = uStack_4c >> 0x14 & 0x7ff;
  if (uVar6 < 0x3ff) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uStack_4c << 0xb | uStack_50 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f);
    if ((longlong)dVar2 < 0) {
      uVar6 = -uVar6;
    }
  }
  *(uint *)((int)param_1 + 0x14) = uVar6;
  FUN_5f6d97a0((int)pdVar3);
  return 0;
}


