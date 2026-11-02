/* Module: sftrans1.dll
   Function: FUN_004ddae0
   Address: 004ddae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_004ddae0(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x4ec);
  if (pvVar1 != (void *)0x0) {
    FUN_004dda00(pvVar1,param_1);
  }
  return pvVar1;
}


