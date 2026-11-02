/* Module: pncrt.dll
   Function: __dllonexit
   Address: 78021e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl __dllonexit(undefined4 param_1,int *param_2,int *param_3)

{
  size_t sVar1;
  void *pvVar2;
  
                    /* 0x21e20  98  __dllonexit */
  FUN_78008cf0();
  sVar1 = _msize((void *)*param_2);
  if (sVar1 <= (uint)(*param_3 - *param_2)) {
    pvVar2 = realloc((void *)*param_2,sVar1 + 0x10);
    if (pvVar2 == (void *)0x0) {
      FUN_78008d00();
      return 0;
    }
    *param_3 = (int)((int)pvVar2 + (*param_3 - *param_2 >> 2) * 4);
    *param_2 = (int)pvVar2;
  }
  *(undefined4 *)*param_3 = param_1;
  *param_3 = *param_3 + 4;
  FUN_78008d00();
  return param_1;
}


