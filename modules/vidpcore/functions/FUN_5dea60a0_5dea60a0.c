/* Module: vidpcore.dll
   Function: FUN_5dea60a0
   Address: 5dea60a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dea60a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 0x40) != 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    iVar3 = FUN_5ded9f40(puVar1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 2;
    }
    iVar3 = FUN_5deda3a0(puVar1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 1;
    }
    if (*(uint *)(param_1 + 0x1f8) != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x1fc);
      *puVar2 = *puVar1;
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x164);
      if ((*(uint *)(param_1 + 0x1f8) | 1) != 0) {
        FUN_5deda4d0(puVar2);
      }
      if ((*(uint *)(param_1 + 0x1f8) | 2) != 0) {
        FUN_5deda070(puVar2);
      }
    }
    return 1;
  }
  return 0;
}


