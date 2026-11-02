/* Module: vidcap30.exe
   Function: FUN_00507210
   Address: 00507210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00507210(int *param_1,int *param_2)

{
  if ((((*param_1 <= *param_2) && (*param_2 <= param_1[2])) && (param_1[1] <= param_2[1])) &&
     (param_2[1] <= param_1[3])) {
    return 1;
  }
  return 0;
}


