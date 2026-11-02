/* Module: sfcdi.dll
   Function: FUN_5bf0be00
   Address: 5bf0be00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0be00(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_5bf0bd60(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24),
                 *(LPCVOID *)(param_1 + 0x18));
  }
  return;
}


