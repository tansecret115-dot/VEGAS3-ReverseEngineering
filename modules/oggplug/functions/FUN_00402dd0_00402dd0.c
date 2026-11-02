/* Module: oggplug.dll
   Function: FUN_00402dd0
   Address: 00402dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE FUN_00402dd0(LPCWSTR param_1)

{
  int iVar1;
  HANDLE pvVar2;
  uchar local_208 [259];
  undefined1 local_105;
  uchar local_104 [260];
  
  if ((param_1 == (LPCWSTR)0x0) || (*param_1 != L'\0')) {
    WideCharToMultiByte(0,0,param_1,-1,(LPSTR)local_208,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x208) {
    local_208[0] = '\0';
  }
  local_105 = 0;
  iVar1 = FUN_00415940(local_208,local_104,0x104,1);
  if (iVar1 < 0) {
    return (HANDLE)0xffffffff;
  }
  iVar1 = FUN_00415850((LPCSTR)local_208,(LPCSTR)local_104);
  if (iVar1 == 0) {
    FUN_00415940(local_208,local_104,0x104,0);
    iVar1 = FUN_00415850((LPCSTR)local_208,(LPCSTR)local_104);
    if (iVar1 == 0) {
      return (HANDLE)0xffffffff;
    }
  }
  pvVar2 = CreateFileA((LPCSTR)local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                       (HANDLE)0x0);
  return pvVar2;
}


