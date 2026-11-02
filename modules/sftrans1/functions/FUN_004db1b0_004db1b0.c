/* Module: sftrans1.dll
   Function: FUN_004db1b0
   Address: 004db1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004db1b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = param_2[1];
  fVar2 = param_1[1];
  fVar3 = param_2[3];
  fVar4 = param_2[2];
  fVar5 = param_1[2];
  fVar6 = *param_2;
  fVar7 = param_2[5];
  fVar8 = param_2[4];
  fVar9 = param_2[7];
  fVar10 = param_2[6];
  fVar11 = param_1[2];
  fVar12 = param_2[0xd];
  fVar13 = param_1[1];
  fVar14 = param_2[0xc];
  fVar15 = *param_1;
  fVar16 = param_2[0xf];
  fVar17 = param_2[0xe];
  fVar18 = param_1[2];
  param_1[2] = param_2[10] * param_1[2] +
               param_2[0xb] * param_1[3] + param_2[8] * *param_1 + param_2[9] * param_1[1];
  param_1[1] = fVar10 * fVar11 + fVar9 * param_1[3] + fVar8 * *param_1 + fVar7 * param_1[1];
  *param_1 = *param_1 * fVar6 + fVar4 * fVar5 + fVar3 * param_1[3] + fVar1 * fVar2;
  param_1[3] = fVar17 * fVar18 + fVar16 * param_1[3] + fVar14 * fVar15 + fVar12 * fVar13;
  return;
}


