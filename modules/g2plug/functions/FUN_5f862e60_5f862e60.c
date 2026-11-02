/* Module: g2plug.dll
   Function: FUN_5f862e60
   Address: 5f862e60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f862e60(int param_1,uint param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_5f862be0(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,4,&stack0x0000000c,4);
  FUN_5f862c80();
  return -(uint)(LVar1 != 0) & 0x80004005;
}


