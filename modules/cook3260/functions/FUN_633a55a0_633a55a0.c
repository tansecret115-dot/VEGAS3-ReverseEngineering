/* Module: cook3260.dll
   Function: FUN_633a55a0
   Address: 633a55a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_633a55a0(void *this,float *param_1,int *param_2,int *param_3,int param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  if ((*param_2 != 0) || (*param_3 != 0)) {
    FUN_633a5450(this,param_1,param_2,param_3,param_4,1);
  }
  if (0 < param_4) {
    pfVar2 = param_1;
    iVar3 = param_4;
    do {
      iVar3 = iVar3 + -1;
      *pfVar2 = *(float *)(((int)param_5 - (int)param_1) + (int)pfVar2) + *pfVar2;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 != 0);
  }
  if (0 < param_4) {
    pfVar2 = param_1 + param_4;
    do {
      fVar1 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      *param_5 = fVar1;
      param_5 = param_5 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


