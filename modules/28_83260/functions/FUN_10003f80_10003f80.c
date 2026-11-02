/* Module: 28_83260.dll
   Function: FUN_10003f80
   Address: 10003f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10003f80(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
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
  float *pfVar14;
  int iVar15;
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_1[4];
  pfVar14 = (float *)&DAT_10008090;
  iVar15 = 0x80;
  do {
    fVar3 = pfVar14[-1];
    fVar4 = *pfVar14;
    fVar10 = pfVar14[-2];
    pfVar1 = pfVar14 + 1;
    pfVar2 = pfVar14 + 2;
    pfVar14 = pfVar14 + 5;
    fVar11 = fVar3 * fVar5 + fVar10 * fVar6;
    fVar13 = fVar10 * fVar7 + fVar3 * fVar6 + fVar4 * fVar5;
    fVar12 = fVar10 * fVar8 + fVar3 * fVar7 + fVar4 * fVar6 + *pfVar1 * fVar5;
    fVar3 = fVar10 * fVar9 + fVar3 * fVar8 + fVar4 * fVar7 + *pfVar1 * fVar6 + *pfVar2 * fVar5;
    iVar15 = iVar15 + -1;
    *param_2 = fVar3 * fVar3 +
               fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar5 * fVar10 * fVar5
    ;
    param_2 = param_2 + 1;
  } while (iVar15 != 0);
  return;
}


