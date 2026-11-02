/* Module: vegas30k.dll
   Function: FUN_01155eb0
   Address: 01155eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_01155eb0(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pvVar1 = malloc(param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_01155f80(param_1,"Out of Memory");
    }
    return pvVar1;
  }
  return (void *)0x0;
}


