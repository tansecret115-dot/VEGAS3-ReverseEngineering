/* Module: oggplug.dll
   Function: FUN_004370e0
   Address: 004370e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004370e0(int *param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *param_1 << 2) {
    do {
      _Dst = *(void **)(param_1[5] + iVar1 * 4);
      memmove(_Dst,(void *)((int)_Dst + param_2 * 4),(param_1[7] + param_2 * 0x3fffffff) * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1 * 4);
  }
  param_1[7] = param_1[7] - param_2;
  param_1[8] = param_1[8] - param_2;
  return;
}


