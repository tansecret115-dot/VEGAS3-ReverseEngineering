/* Module: rmbe3260.dll
   Function: FUN_66059c60
   Address: 66059c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66059c60(void *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)param_1 + 0x1c);
    if ((puVar1 != (undefined4 *)0x0) && ((void *)*puVar1 != (void *)0x0)) {
      free((void *)*puVar1);
      *puVar1 = 0;
    }
    if ((*(int *)((int)param_1 + 4) == 2) && (*(void **)((int)param_1 + 0x20) != (void *)0x0)) {
      free(*(void **)((int)param_1 + 0x20));
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
    free(param_1);
  }
  return;
}


