/* Module: vegas30.exe
   Function: FUN_0052b000
   Address: 0052b000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052b000(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_1 != 0) {
    uVar1 = _SfSetMetricBinary_16(DAT_0064b520,0,param_1,8);
  }
  return uVar1;
}


