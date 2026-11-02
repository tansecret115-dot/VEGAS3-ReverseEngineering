/* Module: sfmarket2.dll
   Function: FUN_004292a0
   Address: 004292a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004292a0(int param_1,uint param_2,BYTE *param_3,DWORD param_4)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
  if (param_1 == -1) {
    return 0x80004005;
  }
  hKey = (HKEY)FUN_00428e00(param_1,param_2,3,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,3,param_3,param_4);
  FUN_00428ea0();
  return -(uint)(LVar1 != 0) & 0x80004005;
}


