/* Module: vidcap30.exe
   Function: FUN_00430b20
   Address: 00430b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430b20(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0xb4);
  for (iVar2 = (*(uint *)(param_1 + 0xb0) & 0x7ffffff) << 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  if (*(uint *)(param_1 + 0xb0) <= param_3) {
    param_3 = *(uint *)(param_1 + 0xb0);
  }
  *(uint *)(param_1 + 0xac) = param_3;
  if (param_3 != 0) {
    puVar3 = (undefined1 *)(param_2 + 8);
    puVar1 = (undefined4 *)(param_1 + 0xc4);
    do {
      *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar3 + -8);
      *puVar1 = *(undefined4 *)(puVar3 + -4);
      *(undefined1 *)((int)puVar1 + 6) = *puVar3;
      *(undefined1 *)((int)puVar1 + 7) = puVar3[1];
      puVar1[2] = *(undefined4 *)(puVar3 + 8);
      iVar2 = *(int *)(puVar3 + 4);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      puVar1[3] = iVar2;
      puVar3 = puVar3 + 0x14;
      puVar1 = puVar1 + 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
  return 1;
}


