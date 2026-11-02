/* Module: encn3260.dll
   Function: FUN_664b29a0
   Address: 664b29a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b29a0(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x42) == 0) {
    return 0x80004005;
  }
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x42) + 0x10);
  return 0;
}


