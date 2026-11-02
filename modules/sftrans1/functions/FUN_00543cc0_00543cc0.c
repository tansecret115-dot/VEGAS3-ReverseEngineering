/* Module: sftrans1.dll
   Function: FUN_00543cc0
   Address: 00543cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00543cc0(int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x14) != *(int *)(*(int *)(param_1 + 0x80) + 0x4c)) &&
     (iVar1 = FUN_00544560(*(int *)(param_1 + 0x14)), iVar1 != 0)) {
    return iVar1;
  }
  _Memory = *(undefined4 **)(param_1 + 0x80);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(_Memory + 1);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)((int)_Memory + 6);
  *(undefined4 *)(param_1 + 0x20) = _Memory[2];
  *(undefined4 *)(param_1 + 0x24) = _Memory[3];
  *(undefined4 *)(param_1 + 0x28) = _Memory[4];
  *(undefined4 *)(param_1 + 0x2c) = _Memory[5];
  puVar3 = _Memory + 6;
  puVar4 = (undefined4 *)(param_1 + 0x30);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = _Memory + 0xb;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x14) = _Memory[0x13];
  *(undefined4 *)(param_1 + 0x18) = _Memory[0x14];
  iVar1 = *(int *)(param_1 + 4);
  puVar3 = _Memory + 0x15;
  puVar4 = (undefined4 *)(param_1 + 100);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x80) = *_Memory;
  *(int *)(param_1 + 4) = iVar1 + -1;
  free(_Memory);
  return 0;
}


