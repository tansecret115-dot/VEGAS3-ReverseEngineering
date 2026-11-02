/* Module: 14_43260.dll
   Function: FUN_10003f80
   Address: 10003f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10003f80(void *this,float param_1,float param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_18;
  float local_10;
  float local_8;
  
  fVar8 = param_1;
  pfVar1 = (float *)((int)this + 0x12a6);
  if (param_1 != 0.0) {
    fVar10 = FUN_10004180((int)this,*(float **)((int)this + 0xa7e),*(float **)((int)this + 0xa82));
    local_18 = (float)fVar10;
  }
  fVar10 = FUN_10004180((int)this,*(float **)((int)this + 0xa7e),*(float **)((int)this + 0xa8a));
  fVar11 = FUN_10004180((int)this,*(float **)((int)this + 0xa7e),*(float **)((int)this + 0xa8e));
  if (param_1 != 0.0) {
    fVar12 = FUN_10004180((int)this,*(float **)((int)this + 0xa82),*(float **)((int)this + 0xa8a));
    param_1 = (float)fVar12;
    fVar12 = FUN_10004180((int)this,*(float **)((int)this + 0xa82),*(float **)((int)this + 0xa8e));
    local_8 = (float)fVar12;
  }
  fVar12 = FUN_10004180((int)this,*(float **)((int)this + 0xa8a),*(float **)((int)this + 0xa8e));
  if (fVar8 != 0.0) {
    fVar13 = FUN_10004180((int)this,*(float **)((int)this + 0xa82),*(float **)((int)this + 0xa82));
    local_10 = (float)fVar13;
  }
  fVar13 = FUN_10004180((int)this,*(float **)((int)this + 0xa8a),*(float **)((int)this + 0xa8a));
  fVar14 = FUN_10004180((int)this,*(float **)((int)this + 0xa8e),*(float **)((int)this + 0xa8e));
  *pfVar1 = local_18 * param_2;
  *(float *)((int)this + 0x12aa) = (float)fVar10 * (float)param_3;
  *(float *)((int)this + 0x12ae) = (float)fVar11 * param_4;
  *(float *)((int)this + 0x12b2) = param_1 * (float)param_3 * param_2;
  *(float *)((int)this + 0x12b6) = local_8 * param_4 * param_2;
  *(float *)((int)this + 0x12ba) = (float)fVar12 * param_4 * (float)param_3;
  *(float *)((int)this + 0x12be) = local_10 * param_2 * param_2;
  *(float *)((int)this + 0x12c2) = (float)fVar13 * (float)param_3 * (float)param_3;
  *(float *)((int)this + 0x12c6) = (float)(fVar14 * (float10)param_4 * (float10)param_4);
  if (fVar8 == 0.0) {
    *pfVar1 = 0.0;
    *(undefined4 *)((int)this + 0x12b2) = 0;
    *(undefined4 *)((int)this + 0x12b6) = 0;
    *(undefined4 *)((int)this + 0x12be) = 0;
  }
  iVar4 = *(int *)((int)this + 0x98a);
  pfVar5 = *(float **)((int)this + 0xa7a);
  param_2 = -50.0;
  if (pfVar5 < pfVar5 + *(int *)((int)this + 0x97e) * iVar4) {
    pfVar6 = pfVar1;
    pfVar7 = pfVar5;
    fVar8 = _DAT_10010c58;
    do {
      for (; pfVar6 < pfVar1 + iVar4; pfVar6 = pfVar6 + 1) {
        fVar2 = *pfVar6;
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        fVar8 = fVar2 * fVar3 + fVar8;
      }
      if (param_2 < fVar8) {
        param_2 = fVar8;
        param_3 = pfVar7;
      }
      pfVar6 = pfVar1;
      fVar8 = _DAT_10010c58;
    } while (pfVar7 < pfVar5 + *(int *)((int)this + 0x97e) * iVar4);
  }
  iVar9 = (int)param_3 + (iVar4 * -4 - (int)pfVar5);
  return (int)(CONCAT44(iVar9 >> 0x1f,iVar9 >> 2) / (longlong)iVar4);
}


