/* Module: stl2plg.dll
   Function: FUN_004010b0
   Address: 004010b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004010b0(int param_1,LPWSTR param_2,int param_3,LPWSTR param_4,int param_5,wchar_t *param_6,
            int param_7)

{
  LPSTR pCVar1;
  size_t sVar2;
  
  if (param_2 != (LPWSTR)0x0) {
    pCVar1 = FUN_0040d990(DAT_0047353c,*(uint *)(param_1 + 0x10));
    MultiByteToWideChar(0,1,pCVar1,-1,param_2,param_3);
    param_2[param_3 + -1] = L'\0';
  }
  if (param_4 != (LPWSTR)0x0) {
    pCVar1 = FUN_0040d990(DAT_0047353c,*(uint *)(param_1 + 0x14));
    MultiByteToWideChar(0,1,pCVar1,-1,param_4,param_5);
    param_4[param_5 + -1] = L'\0';
  }
  if (param_6 != (wchar_t *)0x0) {
    pCVar1 = FUN_0040d990(DAT_0047353c,*(uint *)(param_1 + 0x18));
    MultiByteToWideChar(0,1,pCVar1,-1,param_6,param_7);
    param_6[param_7 + -1] = L'\0';
    sVar2 = wcslen(param_6);
    wcsncat(param_6,L"",(param_7 - sVar2) - 1);
  }
  return 0;
}


