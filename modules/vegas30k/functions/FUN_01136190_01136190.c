/* Module: vegas30k.dll
   Function: FUN_01136190
   Address: 01136190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01136190(int param_1)

{
  void *_Memory;
  LPCVOID pMem;
  LPCVOID pMem_00;
  undefined4 *_Memory_00;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int local_14;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
    _SfQueueFlush_4(param_1 + 0x24);
    _Memory_00 = *(undefined4 **)(param_1 + 0xd4);
    while (_Memory_00 != (undefined4 *)0x0) {
      _Memory = (void *)_Memory_00[1];
      pMem = (LPCVOID)*_Memory_00;
      puVar2 = (undefined4 *)((int)_Memory + 8);
      local_14 = 2;
      do {
        pMem_00 = (LPCVOID)*puVar2;
        if (pMem_00 != (LPCVOID)0x0) {
          FUN_01163840();
          pvVar1 = GlobalHandle(pMem_00);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle(pMem_00);
          GlobalFree(pvVar1);
        }
        *puVar2 = 0;
        puVar2 = puVar2 + 3;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      free(_Memory);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      puVar2 = (undefined4 *)_Memory_00[2];
      free(_Memory_00);
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
      _Memory_00 = puVar2;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
    return 0;
  }
  return 0;
}


