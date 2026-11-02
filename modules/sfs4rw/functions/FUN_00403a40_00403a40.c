/* Module: sfs4rw.dll
   Function: FUN_00403a40
   Address: 00403a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403a40(BYTE *param_1)

{
  int iVar1;
  LSTATUS LVar2;
  undefined4 uVar3;
  HKEY local_4;
  
  local_4 = (HKEY)0x0;
  iVar1 = lstrlenA((LPCSTR)param_1);
  uVar3 = 0x80004005;
  LVar2 = RegCreateKeyExA((HKEY)0x80000002,
                          "Software\\Sonic Foundry\\Shared Information\\User Information",0,
                          (LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_4,(LPDWORD)0x0);
  if (LVar2 == 0) {
    LVar2 = RegSetValueExA(local_4,"City",0,1,param_1,iVar1 + 1);
    if (LVar2 == 0) {
      uVar3 = 0;
    }
    RegCloseKey(local_4);
  }
  return uVar3;
}


