/* Module: wmfplug2.dll
   Function: FUN_00474a90
   Address: 00474a90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00474a90(int param_1,uint param_2,BYTE *param_3)

{
  HKEY hKey;
  int iVar1;
  LSTATUS LVar2;
  CHAR local_20 [32];
  
  if (param_1 == -1) {
    return 0x80004005;
  }
  hKey = (HKEY)FUN_00474460(param_1,param_2,1,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  iVar1 = lstrlenA((LPCSTR)param_3);
  LVar2 = RegSetValueExA(hKey,local_20,0,1,param_3,iVar1 + 1);
  FUN_00474500();
  return -(uint)(LVar2 != 0) & 0x80004005;
}


