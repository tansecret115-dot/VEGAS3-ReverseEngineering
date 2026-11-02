/* Module: sftrkfx1.dll
   Function: FUN_5cba8f30
   Address: 5cba8f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8f30(int param_1)

{
  if (*(int *)(param_1 + 0x68) < 1) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    return 0;
  }
  if (3 < *(int *)(param_1 + 0x68)) {
    *(undefined4 *)(param_1 + 0x68) = 3;
    return 0;
  }
  return 1;
}


