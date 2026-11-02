/* Module: sfppack1.dll
   Function: FUN_5ce08d00
   Address: 5ce08d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5ce08d00(void *this,LPCSTR param_1,DWORD param_2,BYTE *param_3,DWORD param_4)

{
  LSTATUS LVar1;
  HKEY local_8;
  HKEY local_4;
  
  LVar1 = RegCreateKeyExA((HKEY)&DAT_80000002,(LPCSTR)((int)this + 0x70),0,(LPSTR)0x0,0,4,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_4,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_4,"License",0,(LPSTR)0x0,0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_8,(LPDWORD)0x0);
    if (LVar1 == 0) {
      LVar1 = RegSetValueExA(local_8,param_1,0,param_2,param_3,param_4);
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
    if (LVar1 == 0) {
      return 0;
    }
  }
  return 0x80004005;
}


