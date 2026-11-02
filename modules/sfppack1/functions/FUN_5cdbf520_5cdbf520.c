/* Module: sfppack1.dll
   Function: FUN_5cdbf520
   Address: 5cdbf520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdbf520(void *this,int param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(*(int *)((int)this + 0x70) + 2);
  if (*(int *)((int)this + 0x84) != 0) {
    *(undefined4 *)((int)this + 0x84) = 0;
    iVar3 = *(int *)((int)this + 0xa4) + 1;
    *(int *)((int)this + 0xe8) = iVar3;
    *(int *)((int)this + 0xe4) = iVar3;
    *(double *)((int)this + 0xd8) = *(double *)((int)this + 0xd8) - (double)iVar3;
  }
  iVar3 = *(int *)((int)this + 0xe8);
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(param_1 + (uint)uVar1 * *(int *)((int)this + 0xec) * 8);
    do {
      if (*param_2 <= *(int *)((int)this + 0xec)) {
        return;
      }
      iVar6 = *(int *)((int)this + 0xe4) + -1;
      *(int *)((int)this + 0xe4) = iVar6;
      if (iVar6 < 0) {
        *(int *)((int)this + 0xe4) = *(int *)((int)this + 0xa0) + -1;
      }
      iVar6 = *(int *)((int)this + 0xb0);
      *(int *)((int)this + 0xe8) = iVar3 + -1;
      iVar3 = *(int *)((int)this + 0xe4);
      puVar5 = puVar4 + 2;
      *(undefined4 *)(iVar6 + iVar3 * 8) = *puVar4;
      *(undefined4 *)(iVar6 + 4 + iVar3 * 8) = puVar4[1];
      if (*(short *)(*(int *)((int)this + 0x70) + 2) == 2) {
        iVar3 = *(int *)((int)this + 0xe4);
        iVar6 = *(int *)((int)this + 0xb4);
        uVar2 = *puVar5;
        puVar5 = puVar4 + 4;
        *(undefined4 *)(iVar6 + iVar3 * 8) = uVar2;
        *(undefined4 *)(iVar6 + 4 + iVar3 * 8) = puVar4[3];
      }
      iVar3 = *(int *)((int)this + 0xe8);
      *(double *)((int)this + 0xd8) = *(double *)((int)this + 0xd8) + _DAT_5ce12e70;
      *(int *)((int)this + 0xec) = *(int *)((int)this + 0xec) + 1;
      puVar4 = puVar5;
    } while (0 < iVar3);
  }
  return;
}


