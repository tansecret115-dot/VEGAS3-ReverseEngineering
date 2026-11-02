/* Module: sfcdi.dll
   Function: FUN_5bf1a120
   Address: 5bf1a120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1a120(int *param_1,uchar *param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  uchar *_Dest;
  LPVOID pvVar3;
  SIZE_T dwBytes;
  UINT uFlags;
  
  iVar1 = lstrlenA((LPCSTR)param_2);
  pvVar2 = GlobalAlloc(0x42,iVar1 + 1);
  _Dest = GlobalLock(pvVar2);
  if (_Dest == (uchar *)0x0) {
    return 0xffffffff;
  }
  _mbscpy(_Dest,param_2);
  iVar1 = *param_1 + 1;
  if ((LPCVOID)param_1[1] == (LPCVOID)0x0) {
    pvVar2 = GlobalAlloc(0x42,iVar1 * 4);
  }
  else {
    pvVar2 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalUnlock(pvVar2);
    dwBytes = iVar1 * 4;
    uFlags = 0x42;
    pvVar2 = GlobalHandle((LPCVOID)param_1[1]);
    pvVar2 = GlobalReAlloc(pvVar2,dwBytes,uFlags);
  }
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar2 = GlobalHandle(_Dest);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(_Dest);
    GlobalFree(pvVar2);
    return 0xffffffff;
  }
  *param_1 = iVar1;
  param_1[1] = (int)pvVar3;
  *(uchar **)(iVar1 * 4 + -4 + (int)pvVar3) = _Dest;
  return 0;
}


