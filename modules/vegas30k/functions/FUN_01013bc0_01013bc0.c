/* Module: vegas30k.dll
   Function: FUN_01013bc0
   Address: 01013bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01013bc0(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined1 *)(param_2 + 0x15d) = 0;
  *(undefined1 *)(param_2 + 0x15c) = *(undefined1 *)(param_2 + 0x30);
  bVar1 = *(byte *)(param_2 + 0x30);
  puVar3 = (undefined4 *)(param_2 + 0x31);
  puVar4 = (undefined4 *)(param_2 + 0x164);
  for (uVar2 = (uint)(bVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = bVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  uVar2 = *(byte *)(param_2 + 0x30) + 8;
  *(uint *)(param_2 + 0x158) = uVar2;
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_2 + 0x158) = *(byte *)(param_2 + 0x30) + 9;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_2 + 0x158);
  return;
}


