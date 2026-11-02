/* Module: mp3plug.dll
   Function: FUN_5f6e1cf0
   Address: 5f6e1cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6e1cf0(undefined4 *param_1)

{
  void *pvVar1;
  size_t *psVar2;
  
  pvVar1 = malloc(0x364);
  if (pvVar1 != (void *)0x0) {
    psVar2 = FUN_5f6f8980(0x4c00);
    *(size_t **)((int)pvVar1 + 0x44) = psVar2;
    psVar2 = FUN_5f6f8980(0x4000);
    *(size_t **)((int)pvVar1 + 0x48) = psVar2;
    if ((*(int *)((int)pvVar1 + 0x44) == 0) || (*(int *)((int)pvVar1 + 0x48) == 0)) {
      FUN_5f6e1d64();
      pvVar1 = (void *)0x0;
    }
  }
  *param_1 = pvVar1;
  return pvVar1 == (void *)0x0;
}


