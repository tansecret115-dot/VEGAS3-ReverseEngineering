/* Module: erv23260.dll
   Function: FUN_637ffb90
   Address: 637ffb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637ffb90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  if (*(int *)(param_1 + 0x30) == 0x33363248) {
    iVar1 = *(int *)(param_1 + 0xc) + iVar1 * -0x10;
    *(int *)(param_1 + 0x18) = iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10) + iVar1 * -8;
  *(int *)(param_1 + 0x18) = iVar1;
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}


