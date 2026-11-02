/* Module: rmbe3260.dll
   Function: FUN_66018d50
   Address: 66018d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66018d50(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  return 0;
}


