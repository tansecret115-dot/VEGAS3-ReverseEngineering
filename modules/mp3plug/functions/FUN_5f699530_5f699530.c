/* Module: mp3plug.dll
   Function: FUN_5f699530
   Address: 5f699530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f699530(int param_1,wchar_t *param_2)

{
  HGLOBAL pvVar1;
  size_t sVar2;
  wchar_t *_Dest;
  
  if (*(LPCVOID *)(param_1 + 400) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 400));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 400));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 400) = 0;
  }
  sVar2 = wcslen(param_2);
  if ((int)sVar2 < 1) {
    return 0x80070057;
  }
  pvVar1 = GlobalAlloc(0x42,sVar2 * 2 + 2);
  _Dest = GlobalLock(pvVar1);
  *(wchar_t **)(param_1 + 400) = _Dest;
  if (_Dest == (wchar_t *)0x0) {
    return 0x8007000e;
  }
  wcscpy(_Dest,param_2);
  return 0;
}


