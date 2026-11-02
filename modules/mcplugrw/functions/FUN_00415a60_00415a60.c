/* Module: mcplugrw.dll
   Function: FUN_00415a60
   Address: 00415a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00415a60(void *this,LPCSTR param_1,LPDWORD param_2,LPBYTE param_3,LPDWORD param_4)

{
  LSTATUS LVar1;
  HKEY local_8;
  HKEY local_4;
  
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,(LPSTR)0x0,0,0x20019,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_4,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_4,"License",0,(LPSTR)0x0,0,0x20019,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_8,(LPDWORD)0x0);
    if (LVar1 == 0) {
      LVar1 = RegQueryValueExA(local_8,param_1,(LPDWORD)0x0,param_2,param_3,param_4);
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
    if (LVar1 == 0) {
      return 0;
    }
  }
  return 0x80004005;
}


