/* Module: vegas30.exe
   Function: FUN_0052afd0
   Address: 0052afd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0052afd0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x80070057;
  if (param_1 != 0) {
    iVar2 = _SfGetMetricBinary_16(DAT_0064b520,0,param_1,8);
    uVar1 = -(uint)(iVar2 != 8) & 0x80004005;
  }
  return uVar1;
}


