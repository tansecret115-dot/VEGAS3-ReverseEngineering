/* Module: Setup.exe
   Function: _SfSetMetricMultiString@16
   Address: 004211b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfSetMetricMultiString_16(int param_1,uint param_2,BYTE *param_3,DWORD param_4)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
                    /* 0x211b0  330  _SfSetMetricMultiString@16 */
  if (param_1 == -1) {
    return 0x80004005;
  }
  hKey = (HKEY)FUN_004209e0(param_1,param_2,7,local_20);
  if (hKey == (HKEY)0x0) {
    return 0x80004005;
  }
  LVar1 = RegSetValueExA(hKey,local_20,0,7,param_3,param_4);
  FUN_00420a80();
  return -(uint)(LVar1 != 0) & 0x80004005;
}


