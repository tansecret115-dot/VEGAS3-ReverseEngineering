/* Module: vegas30k.dll
   Function: Sf3DTransformInPlace
   Address: 0107cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall Sf3DTransformInPlace(float * const,struct tSFMATRIX3D *) */

void Sf3DTransformInPlace(float *param_1,tSFMATRIX3D *param_2)

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
  
                    /* 0x7cda0  273  ?Sf3DTransformInPlace@@YGXQAMPAUtSFMATRIX3D@@@Z */
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = param_1[1];
  fVar3 = *(float *)(param_2 + 0xc);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = param_1[2];
  fVar6 = *(float *)param_2;
  fVar7 = *(float *)(param_2 + 0x14);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar9 = *(float *)(param_2 + 0x1c);
  fVar10 = *(float *)(param_2 + 0x18);
  fVar11 = param_1[2];
  fVar12 = *(float *)(param_2 + 0x34);
  fVar13 = param_1[1];
  fVar14 = *(float *)(param_2 + 0x30);
  fVar15 = *param_1;
  fVar16 = *(float *)(param_2 + 0x3c);
  fVar17 = *(float *)(param_2 + 0x38);
  fVar18 = param_1[2];
  param_1[2] = *(float *)(param_2 + 0x28) * param_1[2] +
               *(float *)(param_2 + 0x2c) * param_1[3] +
               *(float *)(param_2 + 0x20) * *param_1 + *(float *)(param_2 + 0x24) * param_1[1];
  param_1[1] = fVar10 * fVar11 + fVar9 * param_1[3] + fVar8 * *param_1 + fVar7 * param_1[1];
  *param_1 = *param_1 * fVar6 + fVar4 * fVar5 + fVar3 * param_1[3] + fVar1 * fVar2;
  param_1[3] = fVar17 * fVar18 + fVar16 * param_1[3] + fVar14 * fVar15 + fVar12 * fVar13;
  return;
}


