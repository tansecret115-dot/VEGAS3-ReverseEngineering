/* Module: rmto3260.dll
   Function: FUN_662d5780
   Address: 662d5780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d5780(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    return 0;
  }
  *param_2 = 0;
  return 0;
}


