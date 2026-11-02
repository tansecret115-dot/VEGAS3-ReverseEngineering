/* Module: mp3plug.dll
   Function: FUN_5f6e0c40
   Address: 5f6e0c40
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6e0c40(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = malloc(0x144);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = malloc(0x900);
    *(void **)((int)pvVar1 + 4) = pvVar2;
    pvVar2 = malloc(0x900);
    *(void **)((int)pvVar1 + 8) = pvVar2;
    pvVar2 = malloc(0x9c);
    *(void **)((int)pvVar1 + 0xc) = pvVar2;
    pvVar2 = malloc(0x9c);
    *(void **)((int)pvVar1 + 0x10) = pvVar2;
    pvVar2 = malloc(0x9c);
    *(void **)((int)pvVar1 + 0x14) = pvVar2;
    pvVar2 = malloc(0x9c);
    *(void **)((int)pvVar1 + 0x18) = pvVar2;
    if ((((*(int *)((int)pvVar1 + 4) == 0) || (*(int *)((int)pvVar1 + 8) == 0)) ||
        (*(int *)((int)pvVar1 + 0xc) == 0)) ||
       (((*(int *)((int)pvVar1 + 0x10) == 0 || (*(int *)((int)pvVar1 + 0x14) == 0)) ||
        (*(int *)((int)pvVar1 + 0x18) == 0)))) {
      FUN_5f6e0d04();
      pvVar1 = (void *)0x0;
    }
  }
  *param_1 = pvVar1;
  return pvVar1 == (void *)0x0;
}


