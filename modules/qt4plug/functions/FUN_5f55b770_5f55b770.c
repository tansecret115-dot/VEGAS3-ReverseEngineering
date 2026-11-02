/* Module: qt4plug.dll
   Function: FUN_5f55b770
   Address: 5f55b770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f55b770(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x7c);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x74) + (int)*(ushort **)(param_1 + 0x5c));
  uVar2 = **(ushort **)(param_1 + 0x5c);
  *(undefined2 *)(param_1 + 0x42) = 0xffff;
  iVar5 = 0x4000 - iVar4;
  iVar3 = (uint)(uVar2 >> 0xb) * 0x800 * iVar5 + (uint)(uVar1 >> 0xb) * 0x800 * iVar4;
  *(short *)(param_1 + 0x40) = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  iVar3 = (uVar2 >> 5 & 0x3f) * 0x400 * iVar5 + (uVar1 >> 5 & 0x3f) * 0x400 * iVar4;
  *(short *)(param_1 + 0x3e) = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  iVar4 = (uVar2 & 0x1f) * 0x800 * iVar5 + (uVar1 & 0x1f) * 0x800 * iVar4;
  *(short *)(param_1 + 0x3c) = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe);
  return;
}


