/* Module: sfpublish.dll
   Function: FUN_004110e0
   Address: 004110e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004110e0(void *this,uchar *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  uchar *_Dest;
  
  pMem = *(LPCVOID *)this;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)this = 0;
  }
  iVar2 = lstrlenA((LPCSTR)param_1);
  pvVar1 = GlobalAlloc(0x40,iVar2 + 1);
  _Dest = GlobalLock(pvVar1);
  *(uchar **)this = _Dest;
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,param_1);
    return 0;
  }
  return 0x8007000e;
}


