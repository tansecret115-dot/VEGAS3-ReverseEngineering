/* Module: stl2plg.dll
   Function: FUN_0044fc90
   Address: 0044fc90
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_0044fc90(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pvVar1 = malloc(param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_0044fa30(param_1,"Out of Memory");
    }
    return pvVar1;
  }
  return (void *)0x0;
}


