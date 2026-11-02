/* Module: vidpcore.dll
   Function: FUN_5ded1800
   Address: 5ded1800
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_5ded1800(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x4ec);
  if (pvVar1 != (void *)0x0) {
    FUN_5ded1720(pvVar1,param_1);
  }
  return pvVar1;
}


