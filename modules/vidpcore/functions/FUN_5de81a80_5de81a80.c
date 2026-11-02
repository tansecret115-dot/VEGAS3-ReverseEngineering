/* Module: vidpcore.dll
   Function: FUN_5de81a80
   Address: 5de81a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de81a80(double *param_1,double *param_2)

{
  if ((((*param_1 <= *param_2) && (*param_2 <= param_1[2])) && (param_1[1] <= param_2[1])) &&
     (param_2[1] <= param_1[3])) {
    return 1;
  }
  return 0;
}


