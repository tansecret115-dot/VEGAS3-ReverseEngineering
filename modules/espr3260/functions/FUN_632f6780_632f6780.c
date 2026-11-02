/* Module: espr3260.dll
   Function: FUN_632f6780
   Address: 632f6780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f6780(void *this,int param_1,float *param_2,undefined4 *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  
  pfVar4 = (float *)(*(int *)this + param_4 * -4);
  *(float **)this = pfVar4;
  if (0 < param_4) {
    pfVar3 = param_2;
    iVar5 = param_4;
    do {
      pfVar1 = (float *)((param_1 - (int)param_2) + (int)pfVar3);
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + -1;
      *(float *)((int)pfVar4 + (-4 - (int)param_2) + (int)pfVar3) =
           (*pfVar1 + fVar2) * _DAT_632fa3c8;
    } while (iVar5 != 0);
  }
  FUN_632f6e40(this,pfVar4,param_3,param_4);
  FUN_632f6e40(this,param_2,param_3 + param_4 + 1,param_4);
  *(int *)this = *(int *)this + param_4 * 4;
  return;
}


