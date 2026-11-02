/* Module: mp3plug.dll
   Function: FUN_5f69b660
   Address: 5f69b660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69b660(void *this,uchar *param_1)

{
  int iVar1;
  size_t _Size;
  uchar *_Dest;
  
  if (param_1 != (uchar *)0x0) {
    if (*(void **)((int)this + 0x30) != (void *)0x0) {
      free(*(void **)((int)this + 0x30));
    }
    iVar1 = lstrlenA((LPCSTR)param_1);
    _Size = iVar1 + 1;
    *(size_t *)((int)this + 0x44) = _Size;
    *(size_t *)((int)this + 0x18) =
         *(int *)((int)this + 0x40) + *(int *)((int)this + 0x3c) + *(int *)((int)this + 0x38) + 1 +
         _Size;
    _Dest = calloc(1,_Size);
    *(uchar **)((int)this + 0x30) = _Dest;
    if (_Dest != (uchar *)0x0) {
      _mbscpy(_Dest,param_1);
    }
  }
  return;
}


