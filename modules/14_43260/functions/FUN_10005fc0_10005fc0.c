/* Module: 14_43260.dll
   Function: FUN_10005fc0
   Address: 10005fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10005fc0(void *this,float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  iVar2 = *(int *)((int)this + 0x996);
  for (pfVar3 = param_4; pfVar3 < param_4 + iVar2; pfVar3 = pfVar3 + 1) {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    *pfVar3 = *param_2 * fVar1;
  }
  pfVar3 = param_2 + param_3;
  while (param_2 = param_2 + 1, param_2 < pfVar3) {
    iVar2 = *(int *)((int)this + 0x996);
    for (pfVar4 = param_4; pfVar4 < param_4 + iVar2; pfVar4 = pfVar4 + 1) {
      fVar1 = *param_1;
      param_1 = param_1 + 1;
      *pfVar4 = *param_2 * fVar1 + *pfVar4;
    }
  }
  return;
}


