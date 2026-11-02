/* Module: ednt3260.dll
   Function: FUN_630f2a10
   Address: 630f2a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f2a10(void *this,short param_1,short param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if (param_2 < *(short *)((int)this + 0x6344)) {
    iVar2 = (int)param_1;
    if (*(short *)((int)this + iVar2 * 2 + 0x63fc) == 0) {
      sVar4 = 0xfd;
    }
    else {
      sVar4 = *(short *)((int)this + (iVar2 * 5 + (int)param_2) * 2 + 0xb06c);
    }
    iVar2 = iVar2 * 5 + (int)param_2;
    FUN_630f8ab0((double *)((int)this + 0x5af6),*(short **)((int)this + iVar2 * 4 + 0x3fae2),sVar4,
                 0x30);
    iVar3 = 0;
    if (0 < sVar4) {
      do {
        psVar1 = (short *)(*(int *)((int)this + iVar2 * 4 + 0x3fae2) + iVar3 * 2);
        *psVar1 = *psVar1 >> 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < sVar4);
      return;
    }
  }
  else {
    iVar3 = (int)param_1;
    FUN_630f8ab0((double *)((int)this + 0x5af6),*(short **)((int)this + iVar3 * 4 + 0x3fb72),
                 *(short *)((int)this + iVar3 * 2 + 0xb0a8),0x30);
    iVar2 = 0;
    if (0 < *(short *)((int)this + iVar3 * 2 + 0xb0a8)) {
      do {
        psVar1 = (short *)(*(int *)((int)this + iVar3 * 4 + 0x3fb72) + iVar2 * 2);
        *psVar1 = *psVar1 >> 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)((int)this + iVar3 * 2 + 0xb0a8));
    }
  }
  return;
}


