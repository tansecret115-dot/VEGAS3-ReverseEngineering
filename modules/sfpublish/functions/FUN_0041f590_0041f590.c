/* Module: sfpublish.dll
   Function: FUN_0041f590
   Address: 0041f590
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041f590(int param_1,uint param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_0041f310(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,4,&stack0x0000000c,4);
  FUN_0041f3b0();
  return -(uint)(LVar1 != 0) & 0x80004005;
}


