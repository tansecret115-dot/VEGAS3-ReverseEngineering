/* Module: mp3plug.dll
   Function: FUN_5f69b600
   Address: 5f69b600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69b600(void *this,uchar *param_1)

{
  int iVar1;
  size_t _Size;
  uchar *_Dest;
  
  if (param_1 != (uchar *)0x0) {
    if (*(void **)((int)this + 0x2c) != (void *)0x0) {
      free(*(void **)((int)this + 0x2c));
    }
    iVar1 = lstrlenA((LPCSTR)param_1);
    _Size = iVar1 + 1;
    *(size_t *)((int)this + 0x40) = _Size;
    *(size_t *)((int)this + 0x18) =
         *(int *)((int)this + 0x44) + *(int *)((int)this + 0x3c) + *(int *)((int)this + 0x38) + 1 +
         _Size;
    _Dest = calloc(1,_Size);
    *(uchar **)((int)this + 0x2c) = _Dest;
    if (_Dest != (uchar *)0x0) {
      _mbscpy(_Dest,param_1);
    }
  }
  return;
}


