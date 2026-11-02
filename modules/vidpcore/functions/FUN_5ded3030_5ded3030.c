/* Module: vidpcore.dll
   Function: FUN_5ded3030
   Address: 5ded3030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5ded3030(undefined4 param_1,double *param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float10 fVar15;
  double local_58;
  double local_50;
  uint uStack_44;
  double local_30;
  
  dVar2 = _DAT_5df18838;
  if ((DAT_5df3e438 == 0) || (bVar11 = true, param_3 < 0x20)) {
    bVar11 = false;
  }
  local_30 = (double)(ulonglong)(param_3 >> 1);
  local_58 = 1.0;
  local_30 = _DAT_5df34bd8 / (double)(longlong)local_30;
  local_50 = 0.0;
  if (param_4 == 0) {
    uStack_44 = 0x3fe00000;
    local_30 = -local_30;
    dVar1 = param_2[1];
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((int)param_2 + 0xc) = 0;
  }
  else {
    uStack_44 = 0xbfe00000;
    if (bVar11) {
      iVar12 = FUN_5ded3330(param_1,param_2,param_3,param_5,param_6);
      if (iVar12 == 0) {
        return 0;
      }
    }
    else {
      iVar12 = FUN_5ded2cb0(param_1,param_2,param_3,1,param_5,param_6);
      if (iVar12 == 0) {
        return 0;
      }
    }
    dVar1 = *param_2;
    dVar2 = param_2[1];
  }
  uVar14 = 0;
  fVar15 = (float10)fsin((float10)local_30 * (float10)_DAT_5df1eec0);
  dVar3 = (double)(fVar15 * fVar15 * (float10)_DAT_5df248a8);
  fVar15 = (float10)fsin((float10)local_30);
  dVar8 = dVar3 + _DAT_5df18830;
  do {
    iVar12 = uVar14 * 2 + 1;
    iVar13 = (param_3 + 1) - iVar12;
    if (uVar14 == 0) {
      dVar4 = (dVar1 + *param_2) * _DAT_5df1eec0;
      dVar7 = (param_2[1] - dVar2) * _DAT_5df1eec0;
      dVar6 = -((dVar2 + param_2[1]) * (double)((ulonglong)uStack_44 << 0x20));
      dVar2 = (*param_2 - dVar1) * (double)((ulonglong)uStack_44 << 0x20);
      dVar5 = dVar6 * local_58;
      dVar1 = dVar2 * local_50;
      *param_2 = (dVar5 + dVar4) - dVar1;
      dVar2 = dVar2 * local_58 + dVar6 * local_50;
      param_2[1] = dVar2 + dVar7;
      dVar1 = (dVar4 - dVar5) + dVar1;
      dVar2 = dVar2 - dVar7;
    }
    else {
      dVar9 = (param_2[iVar13] + param_2[uVar14 * 2]) * _DAT_5df1eec0;
      dVar10 = (param_2[iVar12] - param_2[iVar13 + 1]) * _DAT_5df1eec0;
      dVar4 = -((param_2[iVar13 + 1] + param_2[iVar12]) * (double)((ulonglong)uStack_44 << 0x20));
      dVar5 = (param_2[uVar14 * 2] - param_2[iVar13]) * (double)((ulonglong)uStack_44 << 0x20);
      dVar6 = dVar4 * local_58;
      dVar7 = dVar5 * local_50;
      param_2[uVar14 * 2] = (dVar6 + dVar9) - dVar7;
      dVar4 = dVar5 * local_58 + dVar4 * local_50;
      param_2[iVar12] = dVar4 + dVar10;
      param_2[iVar13] = (dVar9 - dVar6) + dVar7;
      param_2[iVar13 + 1] = dVar4 - dVar10;
    }
    dVar4 = (double)fVar15 * local_50;
    uVar14 = uVar14 + 1;
    local_50 = (double)fVar15 * local_58 + dVar8 * local_50;
    local_58 = (local_58 * dVar3 - dVar4) + local_58;
  } while (uVar14 <= param_3 >> 2);
  if (param_4 == 0) {
    if (bVar11) {
      iVar12 = FUN_5ded3c90(param_1,param_2,param_3,param_5,param_6);
      if (iVar12 == 0) {
        return 0;
      }
    }
    else {
      iVar12 = FUN_5ded2cb0(param_1,param_2,param_3,0,param_5,param_6);
      if (iVar12 == 0) {
        return 0;
      }
    }
  }
  else {
    param_2[1] = dVar1;
  }
  return 1;
}


