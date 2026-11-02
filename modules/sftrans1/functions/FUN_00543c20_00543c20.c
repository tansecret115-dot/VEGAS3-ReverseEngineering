/* Module: sftrans1.dll
   Function: FUN_00543c20
   Address: 00543c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00543c20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = malloc(0x70);
  if (puVar1 == (undefined4 *)0x0) {
    return 2;
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x80);
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined1 *)((int)puVar1 + 6) = *(undefined1 *)(param_1 + 0x1e);
  puVar1[2] = *(undefined4 *)(param_1 + 0x20);
  puVar1[3] = *(undefined4 *)(param_1 + 0x24);
  puVar1[4] = *(undefined4 *)(param_1 + 0x28);
  puVar1[5] = *(undefined4 *)(param_1 + 0x2c);
  puVar3 = (undefined4 *)(param_1 + 0x30);
  puVar4 = puVar1 + 6;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x44);
  puVar4 = puVar1 + 0xb;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1[0x13] = *(undefined4 *)(param_1 + 0x14);
  puVar1[0x14] = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)(param_1 + 100);
  puVar4 = puVar1 + 0x15;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 **)(param_1 + 0x80) = puVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 0;
}


