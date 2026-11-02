/* Module: sfpublish.dll
   Function: FUN_00411230
   Address: 00411230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411230(void *this,uchar *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  uchar *_Dest;
  
  pMem = *(LPCVOID *)((int)this + 0x14);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  iVar2 = lstrlenA((LPCSTR)param_1);
  pvVar1 = GlobalAlloc(0x40,iVar2 + 1);
  _Dest = GlobalLock(pvVar1);
  *(uchar **)((int)this + 0x14) = _Dest;
  if (*(int *)((int)this + 0x10) != 0) {
    _mbscpy(_Dest,param_1);
    return 0;
  }
  return 0x8007000e;
}


