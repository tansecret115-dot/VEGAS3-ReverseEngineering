/* Module: sfppack1.dll
   Function: FUN_5cdb80b0
   Address: 5cdb80b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdb80b0(void *this,int param_1,double *param_2,int param_3,int param_4)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  
  iVar1 = param_1 + param_4 * 8;
  if (*(int *)((int)this + 0xdc) == 0) {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0xb4)) {
      pdVar3 = param_2;
      do {
        pdVar2 = (double *)((param_3 - (int)param_2) + (int)pdVar3);
        iVar4 = iVar4 + 1;
        *pdVar3 = *(double *)((int)pdVar2 + (iVar1 - param_3)) * *pdVar2 + *pdVar3;
        pdVar3 = pdVar3 + 1;
      } while (iVar4 < *(int *)((int)this + 0xb4));
    }
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0xb4)) {
      pdVar3 = param_2;
      do {
        iVar4 = iVar4 + 1;
        *(undefined4 *)pdVar3 = *(undefined4 *)((iVar1 - (int)param_2) + (int)pdVar3);
        *(undefined4 *)((int)pdVar3 + 4) = *(undefined4 *)((iVar1 - (int)param_2) + 4 + (int)pdVar3)
        ;
        pdVar3 = pdVar3 + 1;
      } while (iVar4 < *(int *)((int)this + 0xb4));
    }
    *(undefined4 *)((int)this + 0xdc) = 0;
  }
  iVar4 = *(int *)((int)this + 0xb4);
  if (iVar4 < iVar4 + *(int *)((int)this + 0xac)) {
    pdVar3 = param_2 + iVar4;
    do {
      pdVar2 = (double *)((int)pdVar3 + (param_3 - (int)param_2));
      iVar4 = iVar4 + 1;
      *pdVar3 = *(double *)((int)pdVar2 + (iVar1 - param_3)) * *pdVar2 + *pdVar3;
      pdVar3 = pdVar3 + 1;
    } while (iVar4 < *(int *)((int)this + 0xb4) + *(int *)((int)this + 0xac));
  }
  return;
}


