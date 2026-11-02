/* Module: tokr3260.dll
   Function: FUN_68059910
   Address: 68059910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68059910(int *param_1,int param_2)

{
  if ((void *)**(undefined4 **)(*param_1 + 4) != (void *)0x0) {
    free((void *)**(undefined4 **)(*param_1 + 4));
  }
  if (*(void **)(*param_1 + 4) != (void *)0x0) {
    free(*(void **)(*param_1 + 4));
  }
  if (0 < param_2) {
    do {
      if (*(void **)*param_1 != (void *)0x0) {
        free(*(void **)*param_1);
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


