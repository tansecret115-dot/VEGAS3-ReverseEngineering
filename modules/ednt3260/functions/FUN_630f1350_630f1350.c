/* Module: ednt3260.dll
   Function: FUN_630f1350
   Address: 630f1350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f1350(void *this,short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = (int)param_1;
  if ((*(short *)((int)this + iVar1 * 2 + 0x63fc) != 0) &&
     (iVar2 = iVar1 * 5 + (int)param_2, *(short *)((int)this + iVar2 * 2 + 0x6408) != 0)) {
    iVar4 = (int)*(short *)((int)this + iVar1 * 2 + 0x6450);
    if (iVar4 < *(short *)((int)this + iVar1 * 2 + 0x645c)) {
      pdVar3 = (double *)((int)this + *(short *)((int)this + iVar1 * 2 + 0x6468) * 8 + 0x5af6);
      _param_2 = (double *)((int)this + (iVar4 + iVar2 * 0x12) * 8 + 0x6f24);
      do {
        fVar5 = FUN_630f2820(pdVar3,0xc,0.08333333333333333);
        pdVar3 = pdVar3 + 0xc;
        iVar4 = iVar4 + 1;
        *_param_2 = (double)fVar5;
        _param_2 = _param_2 + 1;
      } while (iVar4 < *(short *)((int)this + param_1 * 2 + 0x645c));
    }
  }
  return;
}


