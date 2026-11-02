/* Module: 14_43260.dll
   Function: FUN_100051b0
   Address: 100051b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_100051b0(void *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  *param_1 = 1.0;
  if (1 < *(int *)((int)this + 0x96a)) {
    do {
      param_1 = param_1 + 1;
      iVar4 = 1;
      *param_1 = 0.0;
      if (0 < iVar5) {
        iVar2 = 4;
        do {
          if (0x28 < iVar2) break;
          pfVar3 = (float *)((int)param_1 - iVar2);
          iVar4 = iVar4 + 1;
          pfVar1 = (float *)(*(int *)((int)this + 0x9ba) + -4 + iVar2);
          iVar2 = iVar2 + 4;
          *param_1 = *param_1 - *pfVar1 * *pfVar3;
        } while (iVar4 <= iVar5);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0x96a));
  }
  return;
}


