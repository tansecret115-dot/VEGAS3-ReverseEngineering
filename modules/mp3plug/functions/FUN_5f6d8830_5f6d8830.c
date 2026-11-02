/* Module: mp3plug.dll
   Function: FUN_5f6d8830
   Address: 5f6d8830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d8830(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  bVar9 = (param_3 & 1) != 0;
  if (bVar9) {
    *param_2 = param_1[1] * param_1[1] + *param_1 * *param_1;
  }
  uVar7 = (uint)bVar9;
  if ((param_3 & 2) != 0) {
    fVar1 = param_1[uVar7 * 2 + 2];
    fVar2 = param_1[uVar7 * 2 + 3];
    param_2[uVar7] =
         param_1[uVar7 * 2 + 1] * param_1[uVar7 * 2 + 1] + param_1[uVar7 * 2] * param_1[uVar7 * 2];
    param_2[uVar7 + 1] = fVar1 * fVar1 + fVar2 * fVar2;
    uVar7 = uVar7 + 2;
  }
  if ((int)uVar7 < (int)param_3) {
    iVar8 = (param_3 - uVar7 & 0xfffffff8) + uVar7;
    for (; (int)uVar7 < iVar8; uVar7 = uVar7 + 8) {
      fVar1 = param_1[uVar7 * 2];
      fVar2 = param_1[uVar7 * 2 + 1];
      fVar3 = param_1[uVar7 * 2 + 2];
      fVar4 = param_1[uVar7 * 2 + 3];
      fVar5 = param_1[uVar7 * 2 + 4];
      fVar6 = param_1[uVar7 * 2 + 5];
      param_2[uVar7 + 3] =
           param_1[uVar7 * 2 + 6] * param_1[uVar7 * 2 + 6] +
           param_1[uVar7 * 2 + 7] * param_1[uVar7 * 2 + 7];
      param_2[uVar7 + 2] = fVar6 * fVar6 + fVar5 * fVar5;
      param_2[uVar7 + 1] = fVar3 * fVar3 + fVar4 * fVar4;
      param_2[uVar7] = fVar2 * fVar2 + fVar1 * fVar1;
      fVar1 = param_1[uVar7 * 2 + 0xd];
      fVar2 = param_1[uVar7 * 2 + 0xc];
      fVar3 = param_1[uVar7 * 2 + 0xb];
      fVar4 = param_1[uVar7 * 2 + 10];
      fVar5 = param_1[uVar7 * 2 + 9];
      fVar6 = param_1[uVar7 * 2 + 8];
      param_2[uVar7 + 7] =
           param_1[uVar7 * 2 + 0xe] * param_1[uVar7 * 2 + 0xe] +
           param_1[uVar7 * 2 + 0xf] * param_1[uVar7 * 2 + 0xf];
      param_2[uVar7 + 6] = fVar2 * fVar2 + fVar1 * fVar1;
      param_2[uVar7 + 5] = fVar4 * fVar4 + fVar3 * fVar3;
      param_2[uVar7 + 4] = fVar6 * fVar6 + fVar5 * fVar5;
    }
    for (; (int)uVar7 < (int)param_3; uVar7 = uVar7 + 4) {
      fVar1 = param_1[uVar7 * 2 + 7];
      fVar2 = param_1[uVar7 * 2 + 6];
      fVar3 = param_1[uVar7 * 2 + 5];
      fVar4 = param_1[uVar7 * 2 + 4];
      fVar5 = param_1[uVar7 * 2 + 3];
      fVar6 = param_1[uVar7 * 2 + 2];
      param_2[uVar7] =
           param_1[uVar7 * 2 + 1] * param_1[uVar7 * 2 + 1] + param_1[uVar7 * 2] * param_1[uVar7 * 2]
      ;
      param_2[uVar7 + 1] = fVar6 * fVar6 + fVar5 * fVar5;
      param_2[uVar7 + 2] = fVar4 * fVar4 + fVar3 * fVar3;
      param_2[uVar7 + 3] = fVar2 * fVar2 + fVar1 * fVar1;
    }
  }
  return;
}


