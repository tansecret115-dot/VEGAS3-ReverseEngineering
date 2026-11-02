/* Module: mp3plug.dll
   Function: FUN_5f6d4c60
   Address: 5f6d4c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d4c60(float *param_1,float *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  
  if ((DAT_5f7529a4 == 0) || ((((uint)param_2 | (uint)param_3 | (uint)param_1) & 0xf) != 0)) {
    bVar20 = (param_4 & 1) != 0;
    if (bVar20) {
      *param_3 = *param_2 * *param_1;
    }
    uVar19 = (uint)bVar20;
    if ((int)uVar19 < (int)param_4) {
      while( true ) {
        fVar4 = param_1[uVar19 + 1];
        fVar5 = param_2[uVar19 + 1];
        if ((int)param_4 <= (int)(uVar19 + 2)) break;
        param_3[uVar19] = param_1[uVar19] * param_2[uVar19];
        param_3[uVar19 + 1] = fVar4 * fVar5;
        uVar19 = uVar19 + 2;
      }
      param_3[uVar19] = param_1[uVar19] * param_2[uVar19];
      param_3[uVar19 + 1] = fVar4 * fVar5;
    }
  }
  else {
    iVar18 = 0;
    if (0 < (int)(param_4 & 0xfffffff8)) {
      do {
        pfVar1 = param_2 + iVar18;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar2 = param_2 + iVar18 + 4;
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar2 = param_1 + iVar18;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        pfVar3 = param_1 + iVar18 + 4;
        fVar14 = *pfVar3;
        fVar15 = pfVar3[1];
        fVar16 = pfVar3[2];
        fVar17 = pfVar3[3];
        pfVar3 = param_3 + iVar18;
        *pfVar3 = *pfVar1 * *pfVar2;
        pfVar3[1] = fVar4 * fVar11;
        pfVar3[2] = fVar5 * fVar12;
        pfVar3[3] = fVar6 * fVar13;
        pfVar1 = param_3 + iVar18 + 4;
        *pfVar1 = fVar7 * fVar14;
        pfVar1[1] = fVar8 * fVar15;
        pfVar1[2] = fVar9 * fVar16;
        pfVar1[3] = fVar10 * fVar17;
        iVar18 = iVar18 + 8;
      } while (iVar18 < (int)(param_4 & 0xfffffff8));
    }
    if (iVar18 + 4 <= (int)param_4) {
      pfVar1 = param_2 + iVar18;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = param_1 + iVar18;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = param_3 + iVar18;
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar4 * fVar7;
      pfVar3[2] = fVar5 * fVar8;
      pfVar3[3] = fVar6 * fVar9;
      iVar18 = iVar18 + 4;
    }
    for (; iVar18 < (int)param_4; iVar18 = iVar18 + 1) {
      param_3[iVar18] = param_1[iVar18] * param_2[iVar18];
    }
  }
  return;
}


