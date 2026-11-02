/* Module: espr3260.dll
   Function: FUN_632f3b80
   Address: 632f3b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_632f3b80(void *this,float param_1,int param_2,float *param_3,float *param_4,int *param_5,
            int *param_6,int param_7,float *param_8,float *param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float *local_8;
  
  pfVar8 = param_9;
  fVar7 = param_1;
  local_8 = param_8;
  pfVar9 = (float *)((int)param_1 * 0x400 + param_10);
  param_1 = -1.0;
  param_9 = (float *)0x3f800000;
  if ((int)fVar7 < 0x50) {
    param_8 = (float *)(param_7 + (int)fVar7 * 4);
    pfVar4 = (float *)((int)this + (int)fVar7 * 4 + 0x2188);
    do {
      fVar1 = *local_8;
      local_8 = local_8 + 1;
      if (_DAT_632fa31c <= *pfVar4) {
        pfVar9 = pfVar9 + 0x10;
      }
      else {
        iVar10 = -1;
        if (param_2 < 0x50) {
          pfVar6 = (float *)(param_7 + param_2 * 4);
          iVar5 = param_2;
          do {
            fVar2 = *param_3 + *param_8 + *pfVar6;
            pfVar3 = (float *)(*param_4 + fVar1 + *pfVar9 + *pfVar8);
            fVar2 = fVar2 * fVar2;
            pfVar9 = pfVar9 + 1;
            pfVar8 = pfVar8 + 1;
            if ((float)_DAT_632fa320 < (float)param_9 * fVar2 - (float)pfVar3 * param_1) {
              iVar10 = iVar5;
              param_1 = fVar2;
              param_9 = pfVar3;
            }
            iVar5 = iVar5 + 5;
            pfVar6 = pfVar6 + 5;
          } while (iVar5 < 0x50);
        }
        pfVar8 = pfVar8 + -0x10;
        if (-1 < iVar10) {
          *param_5 = (int)fVar7;
          *param_6 = iVar10;
        }
      }
      fVar7 = (float)((int)fVar7 + 5);
      param_8 = param_8 + 5;
      pfVar4 = pfVar4 + 5;
    } while ((int)fVar7 < 0x50);
  }
  *param_3 = *(float *)(param_7 + *param_5 * 4) + *(float *)(param_7 + *param_6 * 4) + *param_3;
  *param_4 = (float)param_9;
  return;
}


