/* Module: wmfplug2.dll
   Function: FUN_00441d60
   Address: 00441d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00441d60(LPSTR param_1,uint param_2)

{
  LSTATUS LVar1;
  DWORD DVar2;
  undefined4 uVar3;
  HKEY local_80c;
  DWORD local_808 [2];
  CHAR local_800 [1024];
  BYTE local_400 [1024];
  
  uVar3 = 1;
  if (param_1 == (LPSTR)0x0) {
    return 0x80004003;
  }
  FUN_00441600(local_800,0x400);
  local_80c = (HKEY)0x0;
  LVar1 = RegCreateKeyA((HKEY)0x80000001,local_800,&local_80c);
  if (LVar1 != 0) {
    return 1;
  }
  local_808[1] = 0x400;
  LVar1 = RegQueryValueExA(local_80c,"DefLocation",(LPDWORD)0x0,local_808,local_400,local_808 + 1);
  if ((LVar1 == 0) && (local_808[0] == 2)) {
    DVar2 = ExpandEnvironmentStringsA((LPCSTR)local_400,param_1,param_2);
    if ((DVar2 == 0) || (param_2 < DVar2)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  RegCloseKey(local_80c);
  return uVar3;
}


