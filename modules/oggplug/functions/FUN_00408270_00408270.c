/* Module: oggplug.dll
   Function: FUN_00408270
   Address: 00408270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408270(int param_1,wchar_t *param_2)

{
  HGLOBAL pvVar1;
  size_t sVar2;
  wchar_t *_Dest;
  
  if (*(LPCVOID *)(param_1 + 0x33c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x33c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x33c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x33c) = 0;
  }
  sVar2 = wcslen(param_2);
  if ((int)sVar2 < 1) {
    return 0x80070057;
  }
  pvVar1 = GlobalAlloc(0x42,sVar2 * 2 + 2);
  _Dest = GlobalLock(pvVar1);
  *(wchar_t **)(param_1 + 0x33c) = _Dest;
  if (_Dest == (wchar_t *)0x0) {
    return 0x8007000e;
  }
  wcscpy(_Dest,param_2);
  return 0;
}


