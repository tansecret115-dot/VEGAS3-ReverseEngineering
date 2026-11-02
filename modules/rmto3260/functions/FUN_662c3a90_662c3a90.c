/* Module: rmto3260.dll
   Function: FUN_662c3a90
   Address: 662c3a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c3a90(int param_1,undefined2 *param_2)

{
  if (*(int *)(param_1 + 8) == 0) {
    *param_2 = 0;
    return 0x80040007;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *param_2 = (short)*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    return 0;
  }
  *param_2 = 0;
  return 0;
}


