/* Module: vegas30k.dll
   Function: FUN_0103fb40
   Address: 0103fb40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103fb40(int param_1)

{
  int *_Memory;
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  _Memory = *(int **)(param_1 + 0x39c);
  while (_Memory != (int *)0x0) {
    *(int *)(param_1 + 0x39c) = _Memory[0x89];
    if (*_Memory != 0) {
      FUN_01137930();
      pMem = (LPCVOID)*_Memory;
      if (pMem != (LPCVOID)0x0) {
        FUN_011363c0();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
      }
    }
    *(undefined4 *)(_Memory[0x86] + 0xc) = 0;
    (**(code **)(*(int *)_Memory[0x86] + 8))((int *)_Memory[0x86]);
    free(_Memory);
    _Memory = *(int **)(param_1 + 0x39c);
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + -1;
  }
  wcscpy((wchar_t *)(param_1 + 0x15c),L"Empty Graph");
  return 0;
}


