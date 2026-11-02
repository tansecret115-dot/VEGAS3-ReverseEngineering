/* Module: sfmarket2.dll
   Function: FUN_0047e270
   Address: 0047e270
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_0047e270(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pvVar1 = malloc(param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_0047e340(param_1,"Out of Memory");
    }
    return pvVar1;
  }
  return (void *)0x0;
}


