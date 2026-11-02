/* Module: vidcap30.exe
   Function: FUN_0055e900
   Address: 0055e900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055e900(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  puVar2 = (ushort *)(param_1 + 0x8a);
  iVar3 = 7;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar4 = uVar4 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (ushort *)(param_1 + 0xa6);
  iVar3 = 0x79;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar5 = uVar5 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (ushort *)(param_1 + 0x28a);
  iVar3 = 0x80;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar4 = uVar4 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(bool *)(param_1 + 0x1c) = uVar4 <= uVar5 >> 2;
  return;
}


