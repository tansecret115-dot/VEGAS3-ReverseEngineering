/* Module: ednt3260.dll
   Function: FUN_630fba10
   Address: 630fba10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630fba10(void *this,short *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  psVar3 = param_1;
  if (*(short *)((int)this + (int)param_1 * 2 + 0x63fc) != 0) {
    sVar1 = *(short *)((int)this + (int)param_1 * 2 + 0xafdc);
    if (sVar1 != 0) {
      sVar2 = *(short *)((int)this + (int)param_1 * 2 + 0x6468);
      FUN_630fbb90((short *)((int)this + (int)param_1 * 2 + 0xb0b4),
                   (short *)(*(int *)((int)this + (int)param_1 * 4 + 0xb0c0) + sVar2 * 2),
                   *(short *)(&DAT_63101af8 + sVar1 * 2),
                   *(short *)((int)this + (int)param_1 * 2 + 0x6474) - sVar2,
                   *(short *)((int)this + (int)param_1 * 2 + 0xec78) * 3);
    }
    psVar4 = (short *)((int)this + (int)param_1 * 2 + 0xb0b4);
    *psVar4 = *psVar4 >> 1;
  }
  iVar5 = 0;
  if (0 < *(short *)((int)this + 0x6344)) {
    psVar4 = (short *)((int)this + (int)param_1 * 0x9e2 + 0xb0d8);
    param_1 = (short *)((int)this + (int)param_1 * 10 + 0xafe8);
    do {
      if (*param_1 != 0) {
        FUN_630fbb90(psVar4,psVar4 + 1,*(short *)(&DAT_63101af8 + *param_1 * 2),
                     *(short *)((int)this + ((int)psVar3 * 5 + iVar5) * 2 + 0xb06c) + -1,
                     *(short *)((int)this + (iVar5 + (int)psVar3 * 5) * 2 + 0xec84) * 3);
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
      psVar4 = psVar4 + 0xfd;
    } while (iVar5 < *(short *)((int)this + 0x6344));
  }
  if ((*(short *)((int)this + 0x6312) != 0) &&
     (sVar1 = *(short *)((int)this + (int)psVar3 * 2 + 0xb024), sVar1 != 0)) {
    FUN_630fbb90((short *)((int)this + (int)(psVar3 + 0x86f) * 0xe),
                 (short *)((int)this + (int)psVar3 * 0xe + 0xec26),
                 *(short *)(&DAT_63101af8 + sVar1 * 2),
                 *(short *)((int)this + (int)psVar3 * 2 + 0xb0a8) + -1,
                 *(short *)((int)this + (int)psVar3 * 2 + 0xecc0) * 3);
  }
  return;
}


