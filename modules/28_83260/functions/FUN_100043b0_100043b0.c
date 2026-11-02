/* Module: 28_83260.dll
   Function: FUN_100043b0
   Address: 100043b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_100043b0(void *this,uint param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_18 [5];
  
  iVar2 = (*(int *)((int)this + 0x974) - (int)this) + -0x884 >> 2;
  *(int *)((int)this + 0x984) = iVar2;
  *(int *)((int)this + 0x978) = iVar2 + 5;
  if (0x3b < iVar2 + 5) {
    *(int *)((int)this + 0x978) = iVar2 + -0x37;
  }
  FUN_10004e20(this,(float *)((int)this + 0x988),*(undefined4 *)((int)this + 0x1a1c),
               *(int *)((int)this + 0x1c4c));
  *(undefined4 *)((int)this + 0x1a1c) = 0;
  fVar1 = *(float *)(&DAT_10008a88 + (param_1 & 7) * 4);
  iVar2 = 5;
  pfVar3 = local_18;
  do {
    iVar2 = iVar2 + -1;
    *pfVar3 = *(float *)((int)&DAT_10008088 +
                         (((int)(param_1 & 0xffff) >> 3) * 0x14 - (int)local_18) + (int)pfVar3) *
              fVar1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 != 0);
  fVar7 = FUN_10005860();
  iVar2 = 0;
  pfVar3 = local_18;
  do {
    fVar1 = *pfVar3;
    iVar4 = iVar2 + *(int *)((int)this + 0x978);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
    *(float *)((int)this + iVar4 * 4 + 0x1b24) = (float)(fVar7 * (float10)fVar1);
  } while (iVar2 < 5);
  iVar2 = *(int *)((int)this + 0x978);
  iVar4 = ftol();
  FUN_100058d0(this,(float *)((int)this + iVar2 * 4 + 0x1b24),
               (float *)((int)this + iVar4 * 4 + 0x1c14));
  FUN_10005740(this,(float *)((int)this + *(int *)((int)this + 0x978) * 4 + 0x1b24),
               (int)this + *(int *)((int)this + 0x978) * 4 + 0x1a34);
  iVar2 = *(int *)((int)this + 0x978);
  *(int *)((int)this + 0x97c) = iVar2 + 5;
  if (0x3b < iVar2 + 5) {
    *(int *)((int)this + 0x97c) = iVar2 + -0x37;
  }
  puVar5 = (undefined4 *)((int)this + iVar2 * 4 + 0x1a34);
  puVar6 = (undefined4 *)((int)this + iVar2 * 4 + 0x884);
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(int *)((int)this + 0x1c48) == 4) {
    *(undefined4 *)((int)this + 0x1c48) = 1;
    return;
  }
  *(int *)((int)this + 0x1c48) = *(int *)((int)this + 0x1c48) + 1;
  return;
}


