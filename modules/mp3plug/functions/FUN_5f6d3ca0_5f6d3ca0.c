/* Module: mp3plug.dll
   Function: FUN_5f6d3ca0
   Address: 5f6d3ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6d3ca0(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(8,1);
  *param_1 = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = calloc(4,param_2);
    *(void **)(*param_1 + 4) = pvVar1;
    *(size_t *)*param_1 = param_2;
    return 1;
  }
  return 0;
}


