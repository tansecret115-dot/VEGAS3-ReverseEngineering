/* Module: vegas30.exe
   Function: FUN_005242d0
   Address: 005242d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005242d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00524200(param_1);
  if (-1 < iVar1) {
    uVar2 = _SfSetMetricBinary_16(DAT_0064b520,iVar1 + 1,param_2,0x414);
    return uVar2;
  }
  return 0x80070057;
}


