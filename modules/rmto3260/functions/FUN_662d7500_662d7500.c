/* Module: rmto3260.dll
   Function: FUN_662d7500
   Address: 662d7500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d7500(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x14);
    return 0;
  }
  *param_2 = 0;
  return 0;
}


