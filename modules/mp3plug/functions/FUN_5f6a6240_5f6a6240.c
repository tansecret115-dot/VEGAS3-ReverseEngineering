/* Module: mp3plug.dll
   Function: FUN_5f6a6240
   Address: 5f6a6240
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f6a6240(undefined2 *param_1,undefined2 *param_2)

{
  if (param_1[1] != param_2[1]) {
    return false;
  }
  if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
    return false;
  }
  return CONCAT22(param_1[7],*param_1) == CONCAT22(param_2[7],*param_2);
}


