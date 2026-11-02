/* Module: sfpagepeel.dll
   Function: FUN_0041bf20
   Address: 0041bf20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041bf20(int *param_1,int *param_2)

{
  if ((((*param_1 <= *param_2) && (*param_2 <= param_1[2])) && (param_1[1] <= param_2[1])) &&
     (param_2[1] <= param_1[3])) {
    return 1;
  }
  return 0;
}


