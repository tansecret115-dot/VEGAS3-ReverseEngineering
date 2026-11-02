/* Module: tokr3260.dll
   Function: FUN_68051a20
   Address: 68051a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68051a20(int param_1)

{
  void *pvVar1;
  float *pfVar2;
  
  pvVar1 = calloc(0x21,4);
  *(void **)(param_1 + 0x38) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pvVar1 = calloc(0x20,4);
  *(void **)(param_1 + 0x30) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pvVar1 = calloc(8,4);
  *(void **)(param_1 + 0x2c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pvVar1 = calloc(8,4);
  *(void **)(param_1 + 0x3c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pfVar2 = calloc(0x40,4);
  *(float **)(param_1 + 0x34) = pfVar2;
  if (pfVar2 == (float *)0x0) {
    return 0xfff0bdc1;
  }
  FUN_68053790(*(int *)(param_1 + 0x38),*(int **)(param_1 + 0x30),*(undefined4 **)(param_1 + 0x2c),
               *(undefined4 **)(param_1 + 0x3c),pfVar2);
  FUN_6805a000();
  return 0;
}


