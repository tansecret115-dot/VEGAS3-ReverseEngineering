/* Module: oggplug.dll
   Function: FUN_00432650
   Address: 00432650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00432650(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = 0;
    if (0 < (int)param_1[3]) {
      do {
        free(*(void **)(param_1[1] + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[3]);
    }
    free((void *)param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  free(param_1);
  return;
}


