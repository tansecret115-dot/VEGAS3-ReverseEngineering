/* Module: sfpaplug.dll
   Function: FUN_00403650
   Address: 00403650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403650(int param_1)

{
  if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c)) {
    FUN_004035b0(param_1);
  }
  if (DAT_0045c058 == 0) {
    *(char *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c)) =
         *(char *)(param_1 + 0x54) << (8U - (char)*(undefined4 *)(param_1 + 0x50) & 0x1f);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x4c) * 8;
  }
  return;
}


