/* Module: erv23260.dll
   Function: FUN_637ffb00
   Address: 637ffb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_637ffb00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  **(undefined4 **)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  if (*(int *)(param_1 + 8) == 0) {
    return 1;
  }
  do {
    iVar1 = FUN_637ffa50(param_1);
    if (*(uint *)(param_1 + 0x24) < iVar1 + 8U) {
      return 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) =
         *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 8);
    **(undefined4 **)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
    uVar2 = uVar2 + 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  } while (uVar2 < *(uint *)(param_1 + 8));
  return 1;
}


