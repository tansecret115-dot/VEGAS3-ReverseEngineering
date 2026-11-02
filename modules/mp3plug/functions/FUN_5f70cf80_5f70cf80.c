/* Module: mp3plug.dll
   Function: FUN_5f70cf80
   Address: 5f70cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f70cf80(float *param_1)

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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar7 = _DAT_5f760b10;
  fVar9 = param_1[10] + param_1[8];
  fVar23 = param_1[0xe] + param_1[4];
  fVar19 = param_1[0x10] + param_1[2];
  fVar21 = *param_1 + param_1[0xc] + param_1[6];
  fVar1 = fVar9 + fVar23 + fVar19;
  fVar22 = (param_1[0xc] + param_1[6]) * _DAT_5f760b08 + *param_1;
  *param_1 = fVar21 + fVar1;
  fVar2 = _DAT_5f760b10;
  fVar6 = _DAT_5f760b04;
  fVar20 = _DAT_5f760b00;
  fVar18 = _DAT_5f760afc;
  fVar5 = _DAT_5f760af8;
  fVar8 = _DAT_5f760af4;
  fVar3 = _DAT_5f760af0;
  fVar21 = fVar1 * _DAT_5f760b08 + fVar21;
  fVar1 = param_1[0xb] + param_1[9];
  fVar12 = param_1[0xf] + param_1[5];
  fVar11 = param_1[0x11] + param_1[3];
  fVar4 = fVar1 + fVar12 + fVar11;
  fVar13 = param_1[1] + param_1[0xd] + param_1[7];
  fVar14 = (param_1[0xd] + param_1[7]) * _DAT_5f760b08 + param_1[1];
  param_1[1] = fVar13 + fVar4;
  fVar16 = _DAT_5f760b10;
  fVar17 = _DAT_5f760af4;
  fVar13 = fVar4 * _DAT_5f760b08 + fVar13;
  fVar15 = (fVar12 - fVar1) * _DAT_5f760b04;
  fVar10 = (fVar11 - fVar1) * _DAT_5f760b00;
  fVar20 = (fVar19 - fVar9) * fVar20;
  fVar18 = (fVar19 - fVar23) * fVar18;
  fVar19 = (fVar22 + fVar20) - fVar18;
  fVar6 = (fVar23 - fVar9) * fVar6;
  fVar1 = param_1[8] - param_1[10];
  fVar18 = fVar6 + fVar22 + fVar18;
  fVar20 = (fVar22 - fVar6) - fVar20;
  fVar6 = param_1[4] - param_1[0xe];
  fVar7 = (param_1[6] - param_1[0xc]) * fVar7;
  fVar9 = param_1[2] - param_1[0x10];
  fVar5 = (fVar1 + fVar6) * fVar5;
  fVar3 = (fVar6 + fVar9) * fVar3;
  fVar8 = (fVar9 - fVar1) * fVar8;
  fVar4 = fVar5 + fVar7 + fVar3;
  fVar5 = (fVar7 - fVar5) - fVar8;
  fVar3 = (fVar8 + fVar7) - fVar3;
  fVar23 = (param_1[7] - param_1[0xd]) * fVar2;
  fVar7 = param_1[5] - param_1[0xf];
  fVar8 = param_1[9] - param_1[0xb];
  fVar2 = ((fVar9 - fVar6) + fVar1) * fVar2;
  fVar1 = param_1[3] - param_1[0x11];
  fVar22 = (fVar7 + fVar1) * _DAT_5f760af0;
  fVar6 = (fVar7 + fVar8) * _DAT_5f760af8;
  fVar11 = _DAT_5f760afc * (fVar11 - fVar12);
  fVar9 = fVar23 + fVar22 + fVar6;
  param_1[2] = fVar18 - fVar9;
  fVar17 = (fVar1 - fVar8) * fVar17;
  param_1[0x10] = fVar9 + fVar18;
  fVar6 = (fVar23 - fVar17) - fVar6;
  param_1[4] = fVar20 + fVar6;
  fVar22 = (fVar17 + fVar23) - fVar22;
  fVar16 = ((fVar1 - fVar7) + fVar8) * fVar16;
  param_1[0xe] = fVar20 - fVar6;
  param_1[10] = fVar22 + fVar19;
  param_1[8] = fVar19 - fVar22;
  param_1[0xc] = fVar16 + fVar21;
  param_1[6] = fVar21 - fVar16;
  fVar1 = fVar15 + fVar14 + fVar11;
  fVar6 = (fVar14 - fVar15) - fVar10;
  param_1[3] = fVar4 + fVar1;
  param_1[0x11] = fVar1 - fVar4;
  fVar11 = (fVar14 + fVar10) - fVar11;
  param_1[5] = fVar6 - fVar5;
  param_1[0xf] = fVar6 + fVar5;
  param_1[9] = fVar3 + fVar11;
  param_1[0xb] = fVar11 - fVar3;
  param_1[7] = fVar2 + fVar13;
  param_1[0xd] = fVar13 - fVar2;
  return;
}


