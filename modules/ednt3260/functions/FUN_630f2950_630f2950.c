/* Module: ednt3260.dll
   Function: FUN_630f2950
   Address: 630f2950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f2950(void *this,short param_1,short param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  
  iVar3 = (int)param_1;
  if (param_2 < *(short *)((int)this + 0x6344)) {
    iVar6 = 0xfd;
    iVar3 = iVar3 * 5 + (int)param_2;
    pdVar4 = (double *)((int)this + iVar3 * 0x800 + 0x30992);
    iVar3 = (iVar3 * 0x800 + 0x1e8ba) - (int)pdVar4;
    pdVar5 = (double *)((int)this + 0x5af6);
    do {
      dVar1 = *pdVar4;
      dVar2 = *(double *)((int)this + iVar3 + (int)pdVar4);
      pdVar4 = pdVar4 + 1;
      iVar6 = iVar6 + -1;
      *pdVar5 = dVar1 * dVar1 + dVar2 * dVar2;
      pdVar5 = pdVar5 + 1;
    } while (iVar6 != 0);
    return;
  }
  iVar6 = 7;
  pdVar4 = (double *)((int)this + iVar3 * 0x38 + 0x3f992);
  iVar3 = (iVar3 * 0x38 + 0x2d8ba) - (int)pdVar4;
  pdVar5 = (double *)((int)this + 0x5af6);
  do {
    dVar1 = *pdVar4;
    dVar2 = *(double *)((int)pdVar4 + (int)this + iVar3);
    pdVar4 = pdVar4 + 1;
    iVar6 = iVar6 + -1;
    *pdVar5 = dVar1 * dVar1 + dVar2 * dVar2;
    pdVar5 = pdVar5 + 1;
  } while (iVar6 != 0);
  return;
}


