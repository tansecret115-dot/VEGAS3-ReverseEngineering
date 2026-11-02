/* Module: vegas30k.dll
   Function: FUN_0100fc80
   Address: 0100fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0100fc80(int param_1,wchar_t *param_2)

{
  size_t sVar1;
  HGLOBAL hMem;
  wchar_t *_Dest;
  
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    hMem = GlobalAlloc(0x42,(sVar1 + 1) * 2);
    _Dest = GlobalLock(hMem);
    if (_Dest == (wchar_t *)0x0) {
      return 0x8007000e;
    }
    wcscpy(_Dest,param_2);
    *(wchar_t **)(param_1 + 0xc) = _Dest;
  }
  return 0;
}


