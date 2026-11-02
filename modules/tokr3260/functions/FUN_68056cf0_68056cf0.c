/* Module: tokr3260.dll
   Function: FUN_68056cf0
   Address: 68056cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68056cf0(int *param_1,int param_2)

{
  void *_Memory;
  
  _Memory = *(void **)(*(int *)(*param_1 + 0xc) + 4);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  if (*(void **)(*param_1 + 0xc) != (void *)0x0) {
    free(*(void **)(*param_1 + 0xc));
  }
  if (0 < param_2) {
    do {
      if (*(void **)*param_1 != (void *)0x0) {
        free(*(void **)*param_1);
      }
      if (*(void **)(*param_1 + 4) != (void *)0x0) {
        free(*(void **)(*param_1 + 4));
      }
      if (*(void **)(*param_1 + 8) != (void *)0x0) {
        free(*(void **)(*param_1 + 8));
      }
      if ((void *)*param_1 != (void *)0x0) {
        free((void *)*param_1);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


