/* Module: vegas30.exe
   Function: FUN_00563160
   Address: 00563160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00563160(int param_1,uchar *param_2)

{
  size_t _Size;
  int iVar1;
  uchar *_Dest;
  
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    free(*(void **)(param_1 + 0x24));
  }
  if (param_2 == (uchar *)0x0) {
    _Size = 0;
  }
  else {
    iVar1 = lstrlenA((LPCSTR)param_2);
    _Size = iVar1 + 1;
  }
  _Dest = calloc(1,_Size);
  *(uchar **)(param_1 + 0x24) = _Dest;
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,param_2);
    return 0;
  }
  return 0x8007000e;
}


