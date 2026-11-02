/* Module: sfppack1.dll
   Function: FUN_5cdb8190
   Address: 5cdb8190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdb8190(void *this,int param_1,double *param_2,double *param_3,int param_4)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  
  pdVar5 = (double *)(param_1 + param_4 * 0x10);
  iVar3 = 0;
  if (*(int *)((int)this + 0xdc) == 0) {
    pdVar1 = param_3;
    pdVar4 = param_2;
    pdVar6 = pdVar5;
    if (0 < *(int *)((int)this + 0xb4)) {
      do {
        pdVar6 = pdVar5 + 2;
        pdVar4 = param_2 + 2;
        iVar3 = iVar3 + 1;
        *param_2 = *pdVar5 * *pdVar1 + *param_2;
        param_2[1] = pdVar5[1] * *pdVar1 + param_2[1];
        pdVar1 = pdVar1 + 1;
        param_2 = pdVar4;
        pdVar5 = pdVar6;
      } while (iVar3 < *(int *)((int)this + 0xb4));
    }
  }
  else {
    iVar3 = 0;
    pdVar1 = param_2;
    pdVar4 = pdVar5;
    if (0 < *(int *)((int)this + 0xb4)) {
      do {
        pdVar5 = pdVar4 + 2;
        param_2 = pdVar1 + 2;
        iVar3 = iVar3 + 1;
        *pdVar1 = *pdVar4 + *pdVar1;
        pdVar1[1] = pdVar4[1] + pdVar1[1];
        pdVar1 = param_2;
        pdVar4 = pdVar5;
      } while (iVar3 < *(int *)((int)this + 0xb4));
    }
    *(undefined4 *)((int)this + 0xdc) = 0;
    pdVar4 = param_2;
    pdVar6 = pdVar5;
  }
  uVar2 = *(int *)((int)this + 0xa8) / 2 - *(int *)((int)this + 0xb4);
  pdVar5 = pdVar6;
  pdVar1 = pdVar4;
  for (iVar3 = (uVar2 & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pdVar1 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pdVar1 = (double *)((int)pdVar1 + 4);
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)pdVar1 = *(undefined1 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 1);
    pdVar1 = (double *)((int)pdVar1 + 1);
  }
  iVar3 = 0;
  pdVar5 = param_3 + uVar2 + *(int *)((int)this + 0xb4);
  pdVar1 = pdVar4 + uVar2 * 2;
  pdVar4 = pdVar6 + uVar2 * 2;
  if (0 < *(int *)((int)this + 0xb4)) {
    do {
      iVar3 = iVar3 + 1;
      *pdVar1 = *pdVar5 * *pdVar4 + *pdVar1;
      pdVar1[1] = pdVar4[1] * *pdVar5 + pdVar1[1];
      pdVar5 = pdVar5 + 1;
      pdVar1 = pdVar1 + 2;
      pdVar4 = pdVar4 + 2;
    } while (iVar3 < *(int *)((int)this + 0xb4));
  }
  return;
}


