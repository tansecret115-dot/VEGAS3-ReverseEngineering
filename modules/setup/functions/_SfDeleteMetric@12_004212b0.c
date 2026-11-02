/* Module: Setup.exe
   Function: _SfDeleteMetric@12
   Address: 004212b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfDeleteMetric_12(int param_1,uint param_2,int param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  CHAR local_20 [32];
  
                    /* 0x212b0  99  _SfDeleteMetric@12 */
  hKey = (HKEY)FUN_004209e0(param_1,param_2,param_3,local_20);
  if (hKey == (HKEY)0x0) {
    return 1;
  }
  LVar1 = RegDeleteValueA(hKey,local_20);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


