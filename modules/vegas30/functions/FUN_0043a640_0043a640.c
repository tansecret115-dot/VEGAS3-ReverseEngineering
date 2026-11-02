/* Module: vegas30.exe
   Function: FUN_0043a640
   Address: 0043a640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a640(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_0043a360(param_1,param_2,param_3);
    if (iVar1 == 0) {
      _SfSetMetricBinary_16(DAT_00647200,param_1 + 199,param_2,param_3 * 8);
      return;
    }
  }
  _SfDeleteMetric_12(DAT_00647200,param_1 + 199,3);
  return;
}


