/* Module: sfppack1.dll
   Function: FUN_5cdb7360
   Address: 5cdb7360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdb7360(void *this,int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  
  iVar1 = param_1 + param_4 * 4;
  if (*(int *)((int)this + 0xdc) == 0) {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0xb4)) {
      pfVar3 = param_2;
      do {
        pfVar2 = (float *)((param_3 - (int)param_2) + (int)pfVar3);
        iVar4 = iVar4 + 1;
        *pfVar3 = *(float *)((int)pfVar2 + (iVar1 - param_3)) * *pfVar2 + *pfVar3;
        pfVar3 = pfVar3 + 1;
      } while (iVar4 < *(int *)((int)this + 0xb4));
    }
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0xb4)) {
      pfVar3 = param_2;
      do {
        iVar4 = iVar4 + 1;
        *pfVar3 = *(float *)((iVar1 - (int)param_2) + (int)pfVar3);
        pfVar3 = pfVar3 + 1;
      } while (iVar4 < *(int *)((int)this + 0xb4));
    }
    *(undefined4 *)((int)this + 0xdc) = 0;
  }
  iVar4 = *(int *)((int)this + 0xb4);
  if (iVar4 < iVar4 + *(int *)((int)this + 0xac)) {
    pfVar3 = param_2 + iVar4;
    do {
      pfVar2 = (float *)((int)pfVar3 + (param_3 - (int)param_2));
      iVar4 = iVar4 + 1;
      *pfVar3 = *(float *)((int)pfVar2 + (iVar1 - param_3)) * *pfVar2 + *pfVar3;
      pfVar3 = pfVar3 + 1;
    } while (iVar4 < *(int *)((int)this + 0xb4) + *(int *)((int)this + 0xac));
  }
  return;
}


