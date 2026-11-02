/* Module: sfpublish.dll
   Function: FUN_0040e2a0
   Address: 0040e2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040e2a0(void *this,uchar *param_1)

{
  size_t _Size;
  int iVar1;
  uchar *_Dest;
  
  if (*(void **)((int)this + 0x54) != (void *)0x0) {
    free(*(void **)((int)this + 0x54));
  }
  if (param_1 == (uchar *)0x0) {
    _Size = 0;
  }
  else {
    iVar1 = lstrlenA((LPCSTR)param_1);
    _Size = iVar1 + 1;
  }
  _Dest = calloc(1,_Size);
  *(uchar **)((int)this + 0x54) = _Dest;
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,param_1);
    return 0;
  }
  return 0x8007000e;
}


