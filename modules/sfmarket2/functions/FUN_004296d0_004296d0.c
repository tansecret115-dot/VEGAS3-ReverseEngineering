/* Module: sfmarket2.dll
   Function: FUN_004296d0
   Address: 004296d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004296d0(int param_1,uint param_2,int param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_00428e00(param_1,param_2,param_3,local_20);
  if (hKey == (HKEY)0x0) {
    return 1;
  }
  LVar1 = RegDeleteValueA(hKey,local_20);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


