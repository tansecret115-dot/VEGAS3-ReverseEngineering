/* Module: qt4plug.dll
   Function: FUN_5f55b0b0
   Address: 5f55b0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f55b0b0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 7 - *(char *)(param_1 + 0x60);
  bVar1 = **(byte **)(param_1 + 0x5c);
  *(undefined2 *)(param_1 + 0x42) = 0xffff;
  iVar3 = (uint)*(ushort *)(&DAT_5f59cb78 + (bVar1 >> (bVar4 & 0x1f) & 1) * 2) *
          (0x4000 - *(int *)(param_1 + 0x7c)) +
          (uint)*(ushort *)
                 (&DAT_5f59cb78 +
                 ((*(byte **)(param_1 + 0x5c))[*(int *)(param_1 + 0x74)] >> (bVar4 & 0x1f) & 1) * 2)
          * *(int *)(param_1 + 0x7c);
  uVar2 = (undefined2)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
  *(undefined2 *)(param_1 + 0x3c) = uVar2;
  *(undefined2 *)(param_1 + 0x3e) = uVar2;
  *(undefined2 *)(param_1 + 0x40) = uVar2;
  return;
}


