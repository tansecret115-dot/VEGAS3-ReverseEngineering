/* Module: stl2plg.dll
   Function: FUN_0043d280
   Address: 0043d280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d280(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x7c);
  iVar5 = 0x4000 - iVar4;
  uVar1 = ftol();
  uVar2 = ftol();
  iVar3 = (uVar2 & 0xffff) * iVar4 + (uint)uVar1 * iVar5;
  *(short *)(param_1 + 0x40) = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  uVar1 = ftol();
  uVar2 = ftol();
  iVar3 = (uVar2 & 0xffff) * iVar5 + (uint)uVar1 * iVar4;
  *(short *)(param_1 + 0x3e) = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  uVar1 = ftol();
  uVar2 = ftol();
  iVar3 = (uVar2 & 0xffff) * iVar5 + (uint)uVar1 * iVar4;
  *(short *)(param_1 + 0x3c) = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  uVar1 = ftol();
  uVar2 = ftol();
  iVar4 = (uVar2 & 0xffff) * iVar5 + (uint)uVar1 * iVar4;
  *(short *)(param_1 + 0x42) = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe);
  return;
}


