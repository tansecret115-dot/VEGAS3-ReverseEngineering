/* Module: wmfdist2.exe
   Function: FUN_010078d8
   Address: 010078d8
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010078d8(int param_1,byte param_2)

{
  char cVar1;
  ushort *puVar2;
  ushort uVar3;
  char cVar4;
  ushort *puVar5;
  
  *(char *)(param_1 + 0x2eb4) = *(char *)(param_1 + 0x2eb4) - param_2;
  cVar1 = *(char *)(param_1 + 0x2eb4);
  *(int *)(param_1 + 0x2eb0) = *(int *)(param_1 + 0x2eb0) << (param_2 & 0x1f);
  if ('\0' < cVar1) {
    return;
  }
  puVar2 = *(ushort **)(param_1 + 0x2b04);
  if (puVar2 < *(ushort **)(param_1 + 0x2b08)) {
    cVar4 = cVar1 + '\x10';
    uVar3 = *puVar2;
    puVar5 = puVar2 + 1;
    *(ushort **)(param_1 + 0x2b04) = puVar5;
    *(char *)(param_1 + 0x2eb4) = cVar4;
    *(uint *)(param_1 + 0x2eb0) = (uint)uVar3 << (-cVar1 & 0x1fU) | *(uint *)(param_1 + 0x2eb0);
    if ('\0' < cVar4) {
      return;
    }
    if (puVar5 < *(ushort **)(param_1 + 0x2b08)) {
      uVar3 = *puVar5;
      *(ushort **)(param_1 + 0x2b04) = puVar2 + 2;
      *(uint *)(param_1 + 0x2eb0) = *(uint *)(param_1 + 0x2eb0) | (uint)uVar3 << (-cVar4 & 0x1fU);
      *(char *)(param_1 + 0x2eb4) = cVar1 + ' ';
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x2ebc) = 1;
  return;
}


