/* Module: espr3260.dll
   Function: FUN_632f5ed0
   Address: 632f5ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f5ed0(int param_1,int param_2,float *param_3,int param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  pfVar5 = param_3;
  iVar6 = param_5;
  fVar3 = _DAT_632fa388;
  if (0 < param_5) {
    do {
      iVar6 = iVar6 + -1;
      fVar3 = *pfVar5 * *pfVar5 + fVar3;
      pfVar5 = pfVar5 + 1;
    } while (iVar6 != 0);
  }
  *(float *)(param_4 + 8) = fVar3;
  fVar4 = _DAT_632fa388;
  fVar3 = _DAT_632fa388;
  if (0 < param_5) {
    pfVar5 = param_3;
    iVar6 = param_5;
    do {
      pfVar1 = (float *)((param_1 - (int)param_3) + (int)pfVar5);
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
      fVar3 = *pfVar1 * fVar2 + fVar3;
    } while (iVar6 != 0);
  }
  *(float *)(param_4 + 0xc) = fVar3 * _DAT_632fa38c;
  if (0 < param_5) {
    iVar6 = param_2 - (int)param_3;
    do {
      pfVar5 = (float *)(iVar6 + (int)param_3);
      fVar3 = *param_3;
      param_3 = param_3 + 1;
      param_5 = param_5 + -1;
      fVar4 = *pfVar5 * fVar3 + fVar4;
    } while (param_5 != 0);
  }
  *(float *)(param_4 + 0x10) = fVar4 + fVar4;
  return;
}


