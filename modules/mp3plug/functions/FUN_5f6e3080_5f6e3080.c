/* Module: mp3plug.dll
   Function: FUN_5f6e3080
   Address: 5f6e3080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e3080(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    pvVar1 = param_1;
    do {
      FUN_5f6fb180(*(void **)((int)pvVar1 + 0x154c));
      FUN_5f6fb5d0(*(undefined4 **)((int)pvVar1 + 0x1554));
      pvVar1 = (void *)((int)pvVar1 + 0x2704);
    } while ((int)pvVar1 < (int)param_1 + 0x4e08);
    FUN_5f6fa6f0(*(void **)((int)param_1 + 0x244));
    free(param_1);
  }
  return;
}


