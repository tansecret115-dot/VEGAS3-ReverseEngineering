/* Module: erv13260.dll
   Function: FUN_635fb660
   Address: 635fb660
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_635fb660(int *param_1,int *param_2)

{
  if (*param_2 != *param_1) {
    return false;
  }
  if (param_2[1] != param_1[1]) {
    return false;
  }
  if (param_2[2] != param_1[2]) {
    return false;
  }
  return param_2[3] == param_1[3];
}


