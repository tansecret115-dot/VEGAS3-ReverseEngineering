/* Module: mp3plug.dll
   Function: FUN_5f69a9d0
   Address: 5f69a9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f69a9d0(void *this,uchar *param_1)

{
  int iVar1;
  uchar *_Dest;
  
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
    free(*(void **)((int)this + 0x28));
  }
  iVar1 = lstrlenA((LPCSTR)param_1);
  *(int *)((int)this + 0x18) = iVar1 + 1;
  iVar1 = lstrlenA((LPCSTR)param_1);
  _Dest = calloc(1,iVar1 + 1);
  *(uchar **)((int)this + 0x28) = _Dest;
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,param_1);
  }
  return;
}


