/* Module: Setup.exe
   Function: _SfSetMetric@12
   Address: 00420c60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfSetMetric_12(int param_1,uint param_2)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
                    /* 0x20c60  328  _SfSetMetric@12 */
  hKey = (HKEY)FUN_004209e0(param_1,param_2,4,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,4,&stack0x0000000c,4);
  FUN_00420a80();
  return -(uint)(LVar1 != 0) & 0x80004005;
}


