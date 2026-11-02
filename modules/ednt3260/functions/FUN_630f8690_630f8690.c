/* Module: ednt3260.dll
   Function: FUN_630f8690
   Address: 630f8690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_630f8690(void *this,short param_1)

{
  short *psVar1;
  ushort uVar2;
  double dVar3;
  double *pdVar4;
  short sVar5;
  bool bVar6;
  float10 fVar7;
  double local_14;
  double local_c;
  
  sVar5 = 0;
  local_c = 0.99999988;
  if (0 < *(short *)((int)this + 0x6344)) {
    do {
      dVar3 = *(double *)((int)this + ((int)sVar5 + param_1 * 6) * 8 + 0x18da) * _DAT_63102b10;
      fVar7 = FUN_630f96e0(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),0x30);
      if (fVar7 < (float10)local_c) {
        local_c = (double)fVar7;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < *(short *)((int)this + 0x6344));
  }
  *(undefined2 *)((int)this + param_1 * 2 + 0xed38) = 3;
  bVar6 = false;
  psVar1 = (short *)((int)this + param_1 * 2 + 0xed38);
  sVar5 = *(short *)((int)this + 0x1b8e6);
  while ((sVar5 < 6 && (!bVar6))) {
    bVar6 = (double)(&DAT_631018b8)[sVar5] < local_c;
    if (bVar6) {
      *psVar1 = sVar5 >> 1;
    }
    sVar5 = sVar5 + 2;
  }
  if (*psVar1 != *(short *)((int)this + 0x1b8e8)) {
    local_14 = 0.99999988;
    sVar5 = 0;
    pdVar4 = (double *)&DAT_631018b8;
    do {
      dVar3 = local_c - *pdVar4;
      if (dVar3 < _DAT_63102b18) {
        dVar3 = -dVar3;
      }
      if (dVar3 < local_14) {
        local_14 = dVar3;
        param_1 = sVar5;
      }
      sVar5 = sVar5 + 1;
      pdVar4 = pdVar4 + 1;
    } while (sVar5 < 6);
    uVar2 = (ushort)(param_1 + 1 >> 0x1f);
    *(ushort *)((int)this + 0x1b8e6) = (((ushort)(param_1 + 1) ^ uVar2) - uVar2 & 1 ^ uVar2) - uVar2
    ;
  }
  *(short *)((int)this + 0x1b8e8) = *psVar1;
  return;
}


