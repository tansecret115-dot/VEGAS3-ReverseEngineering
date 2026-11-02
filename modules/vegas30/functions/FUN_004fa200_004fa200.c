/* Module: vegas30.exe
   Function: FUN_004fa200
   Address: 004fa200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fa200(void *param_1)

{
  if (param_1 != (void *)0x0) {
    _SfVideoFilterCache_UnInit_4(param_1);
    free(param_1);
  }
  return;
}


