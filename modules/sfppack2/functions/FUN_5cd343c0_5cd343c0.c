/* Module: sfppack2.dll
   Function: FUN_5cd343c0
   Address: 5cd343c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd343c0(undefined4 *param_1,float *param_2,float param_3,int param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  float *pfVar17;
  float fVar18;
  bool bVar19;
  undefined3 extraout_var;
  float *pfVar20;
  int iVar21;
  uint uVar22;
  float10 fVar23;
  float local_20;
  
  fVar18 = param_3;
  pfVar17 = param_2;
  if ((DAT_5cd631d8 == 0) || (bVar16 = true, (uint)((int)param_3 * 2) < 0x20)) {
    bVar16 = false;
  }
  local_20 = _DAT_5cd59438 / (float)(uint)param_3;
  if (param_4 == 0) {
    param_3 = 0.5;
    local_20 = -local_20;
    fVar2 = param_2[1];
    param_2 = (float *)0x0;
    pfVar17[1] = 0.0;
  }
  else {
    param_3 = -0.5;
    if (bVar16) {
      bVar19 = FUN_5cd339e0(param_1,param_2,(uint)fVar18,param_5);
      if (CONCAT31(extraout_var,bVar19) == 0) {
        return 0;
      }
      fVar2 = *param_2;
      param_2 = (float *)param_2[1];
    }
    else {
      iVar21 = FUN_5cd34110(param_1,param_2,(uint)fVar18,1,param_5);
      if (iVar21 == 0) {
        return 0;
      }
      fVar2 = *param_2;
      param_2 = (float *)param_2[1];
    }
  }
  uVar22 = 1;
  fVar23 = (float10)fsin((float10)local_20 * (float10)_DAT_5cd514e8);
  fVar3 = (float)(fVar23 * fVar23 * (float10)_DAT_5cd59434);
  fVar23 = (float10)fsin((float10)local_20);
  fVar4 = (float)fVar23;
  fVar8 = (fVar2 + *pfVar17) * _DAT_5cd5172c;
  fVar6 = -(((float)param_2 + pfVar17[1]) * param_3);
  fVar5 = *pfVar17;
  *pfVar17 = fVar6 + fVar8;
  pfVar17[1] = (pfVar17[1] - (float)param_2) * _DAT_5cd5172c + (fVar5 - fVar2) * param_3;
  fVar2 = fVar3 + _DAT_5cd5344c;
  pfVar7 = pfVar17;
  fVar5 = fVar2;
  fVar11 = fVar4;
  if ((uint)fVar18 >> 1 != 0) {
    do {
      pfVar20 = pfVar7 + 2;
      iVar21 = (int)fVar18 - uVar22;
      uVar22 = uVar22 + 1;
      pfVar1 = pfVar17 + iVar21 * 2 + 1;
      fVar14 = (*pfVar20 + pfVar17[iVar21 * 2]) * _DAT_5cd5172c;
      fVar15 = (pfVar7[3] - *pfVar1) * _DAT_5cd5172c;
      fVar10 = -((pfVar7[3] + *pfVar1) * param_3);
      fVar13 = (*pfVar20 - pfVar17[iVar21 * 2]) * param_3;
      fVar9 = fVar10 * fVar5;
      fVar12 = fVar13 * fVar11;
      *pfVar20 = (fVar9 + fVar14) - fVar12;
      fVar10 = fVar13 * fVar5 + fVar10 * fVar11;
      pfVar7[3] = fVar10 + fVar15;
      pfVar17[iVar21 * 2] = (fVar14 - fVar9) + fVar12;
      *pfVar1 = fVar10 - fVar15;
      fVar9 = fVar5 * fVar4;
      pfVar7 = pfVar20;
      fVar5 = (fVar3 * fVar5 - fVar11 * fVar4) + fVar5;
      fVar11 = fVar9 + fVar2 * fVar11;
    } while (uVar22 <= (uint)fVar18 >> 1);
  }
  if (param_4 != 0) {
    pfVar17[1] = fVar8 - fVar6;
    return 1;
  }
  if (bVar16) {
    iVar21 = FUN_5cd33d70(param_1,pfVar17,(uint)fVar18,param_5);
    if (iVar21 != 0) {
      return 1;
    }
  }
  else {
    iVar21 = FUN_5cd34110(param_1,pfVar17,(uint)fVar18,0,param_5);
    if (iVar21 != 0) {
      return 1;
    }
  }
  return 0;
}


