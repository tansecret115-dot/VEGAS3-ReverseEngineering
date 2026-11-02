/* Module: espr3260.dll
   Function: FUN_632f2f50
   Address: 632f2f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f2f50(float param_1,int param_2,float *param_3,float *param_4,int *param_5,int *param_6,
                 int param_7,float *param_8,float *param_9,float param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  
  pfVar6 = param_8;
  fVar1 = param_1;
  param_8 = param_9;
  pfVar9 = (float *)((int)param_1 * 0x100 + (int)param_10);
  param_10 = -1.0;
  param_1 = 1.0;
  param_9 = (float *)fVar1;
  if ((int)fVar1 < 0x30) {
    pfVar4 = (float *)(param_7 + (int)fVar1 * 4);
    do {
      iVar8 = -1;
      fVar1 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      if (param_2 < 0x30) {
        pfVar7 = (float *)(param_7 + param_2 * 4);
        iVar5 = param_2;
        do {
          fVar2 = *param_3 + *pfVar4 + *pfVar7;
          fVar3 = *pfVar9 + *param_8 + fVar1 + *param_4;
          fVar2 = fVar2 * fVar2;
          param_8 = param_8 + 1;
          pfVar9 = pfVar9 + 1;
          if ((float)_DAT_632fa280 < param_1 * fVar2 - fVar3 * param_10) {
            iVar8 = iVar5;
            param_1 = fVar3;
            param_10 = fVar2;
          }
          iVar5 = iVar5 + 6;
          pfVar7 = pfVar7 + 6;
        } while (iVar5 < 0x30);
      }
      param_8 = param_8 + -8;
      if (-1 < iVar8) {
        *param_5 = (int)param_9;
        *param_6 = iVar8;
      }
      param_9 = (float *)((int)param_9 + 6);
      pfVar4 = pfVar4 + 6;
    } while ((int)param_9 < 0x30);
  }
  *param_3 = *(float *)(param_7 + *param_6 * 4) + *(float *)(param_7 + *param_5 * 4) + *param_3;
  *param_4 = param_1;
  return;
}


