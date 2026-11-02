/* Module: sfnetmedia.dll
   Function: FUN_0040ff10
   Address: 0040ff10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040ff10(void *this,uchar *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  uchar *_Dest;
  
  pMem = *(LPCVOID *)((int)this + 4);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = lstrlenA((LPCSTR)param_1);
  pvVar1 = GlobalAlloc(0x40,iVar2 + 1);
  _Dest = GlobalLock(pvVar1);
  *(uchar **)((int)this + 4) = _Dest;
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,param_1);
    return 0;
  }
  return 0x8007000e;
}


