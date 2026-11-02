/* Module: sfcdi.dll
   Function: FUN_5bf46370
   Address: 5bf46370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf46370(int *param_1,int *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (((param_1 != (int *)0xffffffff) && (param_1 != (int *)0x0)) && (*param_1 != -1)) {
    *param_2 = param_1[10];
    param_2[1] = param_1[0xb];
    return 0;
  }
  return 0x80070057;
}


