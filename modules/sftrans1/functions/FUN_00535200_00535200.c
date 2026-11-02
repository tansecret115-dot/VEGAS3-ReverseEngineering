/* Module: sftrans1.dll
   Function: FUN_00535200
   Address: 00535200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00535200(int param_1,LPCSTR param_2,DWORD param_3,BYTE *param_4,DWORD param_5)

{
  LSTATUS LVar1;
  HKEY local_8;
  HKEY local_4;
  
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,(LPSTR)0x0,0,4,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_4,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_4,"License",0,(LPSTR)0x0,0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_8,(LPDWORD)0x0);
    if (LVar1 == 0) {
      LVar1 = RegSetValueExA(local_8,param_2,0,param_3,param_4,param_5);
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
    if (LVar1 == 0) {
      return 0;
    }
  }
  return 0x80004005;
}


