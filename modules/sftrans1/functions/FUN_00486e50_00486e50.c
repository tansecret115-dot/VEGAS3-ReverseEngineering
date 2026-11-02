/* Module: sftrans1.dll
   Function: FUN_00486e50
   Address: 00486e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00486e50(int *param_1,undefined4 *param_2,size_t param_3)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  wchar_t *_Dest;
  
  pMem = (LPCVOID)*param_1;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x40,param_3 * 2 + 2);
  _Dest = GlobalLock(pvVar1);
  *param_1 = (int)_Dest;
  wcsncpy(_Dest,(wchar_t *)*param_2,param_3);
  *(undefined2 *)(*param_1 + param_3 * 2) = 0;
  return;
}


