/* Module: sftrans1.dll
   Function: FUN_0048cb80
   Address: 0048cb80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0048cb80(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  if (*param_2 < *param_1) {
    return 1;
  }
  if (param_1[1] < param_2[1]) {
    return 0xffffffff;
  }
  return (uint)(param_2[1] < param_1[1]);
}


