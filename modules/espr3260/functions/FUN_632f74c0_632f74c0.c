/* Module: espr3260.dll
   Function: FUN_632f74c0
   Address: 632f74c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_632f74c0(void *this,float param_1,float *param_2,float *param_3,int param_4,int param_5,
            int *param_6,int param_7,float param_8)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  
  iVar1 = param_5 + 4;
  pfVar2 = (float *)(param_4 + -4);
  iVar5 = *(int *)this + ((int)pfVar2 - iVar1) * 4 + -4;
  *(int *)this = iVar5;
  fVar3 = (float)(iVar5 + (int)pfVar2 * -4);
  FUN_632f7620(this,param_1,param_2,param_3,pfVar2,iVar1,fVar3,(int)param_8);
  iVar5 = param_4 + 1;
  fVar4 = *(float *)((int)fVar3 + param_4 * 4);
  if (iVar5 <= param_5) {
    pfVar6 = (float *)((int)fVar3 + iVar5 * 4);
    do {
      if (fVar4 < *pfVar6) {
        fVar4 = *pfVar6;
        param_4 = iVar5;
      }
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar5 <= param_5);
  }
  if ((param_7 == 0) && (0x9e < param_4)) {
    *param_6 = 0;
    *(int *)this = *(int *)this + (iVar1 - (int)pfVar2) * 4 + 4;
    return param_4;
  }
  pfVar6 = (float *)((int)fVar3 + param_4 * 4);
  fVar8 = FUN_632f7860(pfVar6,-2);
  param_8 = (float)fVar8;
  iVar5 = -2;
  iVar7 = -1;
  do {
    fVar8 = FUN_632f7860(pfVar6,iVar7);
    if ((float10)param_8 < fVar8) {
      param_8 = (float)fVar8;
      iVar5 = iVar7;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  if (iVar5 == -2) {
    iVar5 = 1;
    param_4 = param_4 + -1;
  }
  else if (iVar5 == 2) {
    iVar5 = -1;
    param_4 = param_4 + 1;
  }
  *param_6 = iVar5;
  *(int *)this = *(int *)this + (iVar1 - (int)pfVar2) * 4 + 4;
  return param_4;
}


