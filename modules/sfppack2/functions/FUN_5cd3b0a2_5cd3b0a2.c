/* Module: sfppack2.dll
   Function: FUN_5cd3b0a2
   Address: 5cd3b0a2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd3b0a2(HKEY param_1,LPCSTR param_2)

{
  int iVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  CHAR local_118 [260];
  _FILETIME local_14;
  DWORD local_c;
  HKEY local_8;
  
  iVar1 = lstrlenA(param_2);
  if (iVar1 == 0) {
    uVar2 = 0x80004005;
  }
  else {
    LVar3 = RegOpenKeyExA(param_1,param_2,0,0x2000000,&local_8);
    if (LVar3 == 0) {
      while( true ) {
        local_c = 0x104;
        LVar3 = RegEnumKeyExA(local_8,0,local_118,&local_c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                              &local_14);
        if (LVar3 != 0) break;
        FUN_5cd3b0a2(local_8,local_118);
      }
      RegCloseKey(local_8);
      RegDeleteKeyA(param_1,param_2);
    }
    uVar2 = 0;
  }
  return uVar2;
}


