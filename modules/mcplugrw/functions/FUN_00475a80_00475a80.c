/* Module: mcplugrw.dll
   Function: FUN_00475a80
   Address: 00475a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_00475a80(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pvVar1 = malloc(param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_00475b50(param_1,"Out of Memory");
    }
    return pvVar1;
  }
  return (void *)0x0;
}


