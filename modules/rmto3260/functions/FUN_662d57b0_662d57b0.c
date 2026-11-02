/* Module: rmto3260.dll
   Function: FUN_662d57b0
   Address: 662d57b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d57b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    *param_2 = *(undefined4 *)(param_1 + 8);
    return 0;
  }
  *param_3 = 0;
  *param_2 = 0;
  return 0x40012;
}


