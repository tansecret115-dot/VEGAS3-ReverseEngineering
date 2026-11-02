/* Module: g2plug.dll
   Function: FUN_5f838910
   Address: 5f838910
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f838910(BYTE *param_1)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_404;
  CHAR local_400 [1024];
  
  if (param_1 == (BYTE *)0x0) {
    return 0x80004003;
  }
  FUN_5f838250(local_400,0x400);
  local_404 = (HKEY)0x0;
  LVar1 = RegCreateKeyA((HKEY)0x80000001,local_400,&local_404);
  if (LVar1 != 0) {
    return 1;
  }
  iVar2 = lstrlenA((LPCSTR)param_1);
  LVar1 = RegSetValueExA(local_404,"DefLocation",0,2,param_1,iVar2 + 1);
  RegCloseKey(local_404);
  return (uint)(LVar1 != 0);
}


