/* Module: oggplug.dll
   Function: FUN_00415cc0
   Address: 00415cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00415cc0(LPCSTR param_1)

{
  HANDLE hObject;
  int unaff_EDI;
  uint uVar1;
  
  uVar1 = 0;
  hObject = CreateFileA(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    uVar1 = FUN_00422e00((uint)hObject,0x20657563,(DWORD)&param_1,0,unaff_EDI);
    if ((-1 < (int)uVar1) || (uVar1 == 0x8004e00a)) {
      uVar1 = FUN_00422e00((uint)hObject,0x6c746461,(DWORD)&param_1,1,unaff_EDI);
    }
    CloseHandle(hObject);
  }
  return uVar1;
}


