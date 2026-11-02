/* Module: cook3260.dll
   Function: FUN_633a6620
   Address: 633a6620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_633a6620(void *this,int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  
  iVar1 = param_6;
  param_6 = 0x14;
  iVar2 = param_5 - (int)param_4;
  pfVar4 = (float *)(param_2 * 0x50 + iVar1);
  do {
    if (*param_4 == 0) {
      iVar1 = *(int *)this * 0x343fd + 0x269ec3;
      *(int *)this = iVar1;
      fVar3 = *(float *)(&DAT_633a95e0 + (iVar1 >> 0x18 & 1U) * 4) *
              *(float *)(&DAT_633a9818 + param_1 * 4);
    }
    else {
      fVar3 = (float)(*(uint *)(&DAT_633a9690 + (*param_4 + param_1 * 0xe) * 4) |
                     *(int *)(iVar2 + (int)param_4) << 0x1f);
    }
    param_4 = param_4 + 1;
    param_6 = param_6 + -1;
    *pfVar4 = fVar3 * *(float *)(param_3 + param_2 * 4);
    pfVar4 = pfVar4 + 1;
  } while (param_6 != 0);
  return;
}


