/* Module: stl2plg.dll
   Function: FUN_004205e0
   Address: 004205e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004205e0(HKEY param_1,LPCSTR param_2)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY local_114;
  DWORD local_110;
  _FILETIME local_10c;
  CHAR local_104 [260];
  
  iVar1 = lstrlenA(param_2);
  if (iVar1 != 0) {
    LVar2 = RegOpenKeyExA(param_1,param_2,0,0x2000000,&local_114);
    if (LVar2 == 0) {
      local_110 = 0x104;
      iVar1 = RegEnumKeyExA(local_114,0,local_104,&local_110,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            &local_10c);
      while (iVar1 == 0) {
        FUN_004205e0(local_114,local_104);
        local_110 = 0x104;
        iVar1 = RegEnumKeyExA(local_114,0,local_104,&local_110,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                              &local_10c);
      }
      RegCloseKey(local_114);
      RegDeleteKeyA(param_1,param_2);
    }
    return 0;
  }
  return 0x80004005;
}


