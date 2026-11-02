/* Module: g2plug.dll
   Function: FUN_5f863210
   Address: 5f863210
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f863210(int param_1,uint param_2,BYTE *param_3)

{
  HKEY hKey;
  int iVar1;
  LSTATUS LVar2;
  CHAR local_20 [32];
  
  if (param_1 == -1) {
    return 0x80004005;
  }
  hKey = (HKEY)FUN_5f862be0(param_1,param_2,1,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  iVar1 = lstrlenA((LPCSTR)param_3);
  LVar2 = RegSetValueExA(hKey,local_20,0,1,param_3,iVar1 + 1);
  FUN_5f862c80();
  return -(uint)(LVar2 != 0) & 0x80004005;
}


