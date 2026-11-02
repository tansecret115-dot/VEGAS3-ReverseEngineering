/* Module: vegas30.exe
   Function: FUN_00509da0
   Address: 00509da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00509da0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1;
  if (param_1 == 0) {
    return -0x7fffbffd;
  }
  puVar3 = &param_1;
  param_1 = 0x3ea;
  uVar1 = FUN_00508c40(iVar2);
  iVar2 = FUN_005098a0(DAT_0064b520,uVar1,puVar3);
  if (-1 < iVar2) {
    _SfSetMetric_12(DAT_0064b520,1000,1);
    _SfSetMetric_12(DAT_0064b520,0x3e9,10);
  }
  return iVar2;
}


