/* Module: espr3260.dll
   Function: FUN_632f1b10
   Address: 632f1b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f1b10(float param_1,int param_2,float *param_3,float *param_4,int *param_5,int *param_6,
                 int param_7,int param_8,float *param_9,float *param_10,int param_11)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  
  pfVar6 = param_10;
  pfVar8 = param_9;
  param_9 = (float *)param_1;
  pfVar7 = (float *)((int)param_1 * 0x400 + param_11);
  param_1 = -1.0;
  param_10 = (float *)0x3f800000;
  if ((int)param_9 < 0x30) {
    pfVar4 = (float *)(param_8 + (int)param_9 * 4);
    do {
      if ((float)_DAT_632fa230 <= *pfVar4) {
        pfVar7 = pfVar7 + 0x10;
      }
      else {
        iVar9 = -1;
        if (param_2 < 0x30) {
          pfVar5 = (float *)(param_7 + param_2 * 4);
          iVar3 = param_2;
          do {
            fVar1 = *(float *)((param_7 - param_8) + (int)pfVar4) + *param_3 + *pfVar5;
            pfVar2 = (float *)(*pfVar6 + *pfVar7 + *param_4 + *pfVar8);
            fVar1 = fVar1 * fVar1;
            pfVar7 = pfVar7 + 1;
            pfVar6 = pfVar6 + 1;
            if ((float)_DAT_632fa230 < (float)param_10 * fVar1 - (float)pfVar2 * param_1) {
              iVar9 = iVar3;
              param_1 = fVar1;
              param_10 = pfVar2;
            }
            iVar3 = iVar3 + 3;
            pfVar5 = pfVar5 + 3;
          } while (iVar3 < 0x30);
        }
        pfVar6 = pfVar6 + -0x10;
        if (-1 < iVar9) {
          *param_5 = (int)param_9;
          *param_6 = iVar9;
        }
      }
      pfVar4 = pfVar4 + 3;
      param_9 = (float *)((int)param_9 + 3);
      pfVar8 = pfVar8 + 1;
    } while ((int)param_9 < 0x30);
  }
  *param_3 = *(float *)(param_7 + *param_5 * 4) + *(float *)(param_7 + *param_6 * 4) + *param_3;
  *param_4 = (float)param_10;
  return;
}


