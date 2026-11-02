/* Module: cook3260.dll
   Function: FUN_633a53d0
   Address: 633a53d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a53d0(void *this,float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar1 = *(float *)(&DAT_633a99d4 + param_2 * 4);
  if (param_2 == param_3) {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0x47c0)) {
      do {
        iVar4 = iVar4 + 1;
        *param_1 = fVar1 * *param_1;
        param_1 = param_1 + 1;
      } while (iVar4 < *(int *)((int)this + 0x47c0));
      return;
    }
  }
  else {
    iVar4 = 0;
    fVar2 = *(float *)((int)this + (param_3 - param_2) * 4 + 0x47f0);
    if (0 < *(int *)((int)this + 0x47c0)) {
      do {
        fVar3 = fVar1 * *param_1;
        fVar1 = fVar2 * fVar1;
        iVar4 = iVar4 + 1;
        *param_1 = fVar3;
        param_1 = param_1 + 1;
      } while (iVar4 < *(int *)((int)this + 0x47c0));
    }
  }
  return;
}


