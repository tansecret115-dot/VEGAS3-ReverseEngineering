/* Module: rmbe3260.dll
   Function: FUN_66020180
   Address: 66020180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66020180(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x17c) != 0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0x50);
    return 0;
  }
  *param_2 = 0;
  return 0x80000006;
}


