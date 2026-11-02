/* Module: vegas30.exe
   Function: FUN_00524280
   Address: 00524280
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00524280(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00524200(param_1);
  if (-1 < iVar1) {
    iVar1 = _SfGetMetricBinary_16(DAT_0064b520,iVar1 + 1,param_2,0x414);
    return -(uint)(iVar1 != 0x414) & 0x80004005;
  }
  return 0x80070057;
}


