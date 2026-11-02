/* Module: wmfplug2.dll
   Function: FUN_004746e0
   Address: 004746e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004746e0(int param_1,uint param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
  hKey = (HKEY)FUN_00474460(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,4,&stack0x0000000c,4);
  FUN_00474500();
  return -(uint)(LVar1 != 0) & 0x80004005;
}


