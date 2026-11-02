/* Module: erv13260.dll
   Function: FUN_635f7e90
   Address: 635f7e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f7e90(undefined4 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  free((void *)param_1[2]);
  free(param_1);
  return;
}


