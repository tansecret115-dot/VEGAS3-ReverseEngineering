/* Module: sftrans1.dll
   Function: FUN_004aaef0
   Address: 004aaef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004aaef0(float *param_1,float *param_2,float *param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  
  fVar2 = (float)param_4;
  *param_1 = (*param_3 - *param_2) * fVar2 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * fVar2 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * fVar2 + param_2[2];
  param_1[0xe8] = (param_3[0xe8] - param_2[0xe8]) * fVar2 + param_2[0xe8];
  param_1[0xe5] = (param_3[0xe5] - param_2[0xe5]) * fVar2 + param_2[0xe5];
  param_1[0xe6] = (param_3[0xe6] - param_2[0xe6]) * fVar2 + param_2[0xe6];
  param_1[0xe7] = (param_3[0xe7] - param_2[0xe7]) * fVar2 + param_2[0xe7];
  param_1[0xe9] = (param_3[0xe9] - param_2[0xe9]) * fVar2 + param_2[0xe9];
  param_1[0xea] = (param_3[0xea] - param_2[0xea]) * fVar2 + param_2[0xea];
  param_1[0xeb] = (param_3[0xeb] - param_2[0xeb]) * fVar2 + param_2[0xeb];
  param_1[0xec] = (param_3[0xec] - param_2[0xec]) * fVar2 + param_2[0xec];
  fVar1 = param_2[0xe3];
  param_1[0xe3] = fVar1;
  param_1[0xe4] = param_2[0xe4];
  if (0 < (int)fVar1) {
    iVar5 = 0;
    pfVar3 = param_2 + 4;
    pfVar4 = param_1 + 3;
    pfVar6 = param_3 + 6;
    do {
      iVar5 = iVar5 + 1;
      *pfVar4 = *(float *)((int)pfVar4 + ((int)param_2 - (int)param_1));
      pfVar4[1] = (*(float *)(((int)param_3 - (int)param_2) + (int)pfVar3) - *pfVar3) * fVar2 +
                  *pfVar3;
      pfVar4[2] = (pfVar6[-1] - pfVar3[1]) * fVar2 + pfVar3[1];
      pfVar4[3] = (*pfVar6 - pfVar3[2]) * fVar2 + pfVar3[2];
      pfVar4[4] = (pfVar6[1] - pfVar3[3]) * fVar2 + pfVar3[3];
      pfVar4[5] = (pfVar6[2] - pfVar3[4]) * fVar2 + pfVar3[4];
      pfVar4[6] = (pfVar6[3] - pfVar3[5]) * fVar2 + pfVar3[5];
      pfVar3 = pfVar3 + 7;
      pfVar4 = pfVar4 + 7;
      pfVar6 = pfVar6 + 7;
    } while (iVar5 < (int)param_1[0xe3]);
    return 0;
  }
  return 0;
}


