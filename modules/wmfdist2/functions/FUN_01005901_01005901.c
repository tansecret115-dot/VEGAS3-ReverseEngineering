/* Module: wmfdist2.exe
   Function: FUN_01005901
   Address: 01005901
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01005901(undefined *param_1)

{
  LPCSTR lpString;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined4 *hResData_00;
  int iVar1;
  CHAR local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 1;
  local_8 = 0;
  wsprintfA(local_28,"UPDFILE%lu",0);
  hResInfo = FindResourceA((HMODULE)0x0,local_28,(LPCSTR)0xa);
  while( true ) {
    if (hResInfo == (HRSRC)0x0) {
      return local_c;
    }
    hResData = LoadResource((HMODULE)0x0,hResInfo);
    hResData_00 = LockResource(hResData);
    if (hResData_00 == (undefined4 *)0x0) break;
    local_14 = *hResData_00;
    lpString = (LPCSTR)(hResData_00 + 2);
    local_10 = hResData_00[1];
    iVar1 = lstrlenA(lpString);
    iVar1 = (*(code *)param_1)(local_14,local_10,lpString,lpString + iVar1 + 1);
    if (iVar1 == 0) {
      local_c = 0;
      FreeResource(hResData_00);
      return local_c;
    }
    FreeResource(hResData_00);
    local_8 = local_8 + 1;
    wsprintfA(local_28,"UPDFILE%lu",local_8);
    hResInfo = FindResourceA((HMODULE)0x0,local_28,(LPCSTR)0xa);
  }
  DAT_0100b704 = 0x80070714;
  return 0;
}


