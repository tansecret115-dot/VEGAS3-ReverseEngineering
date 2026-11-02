/* Module: vegas30.exe
   Function: FUN_00410a10
   Address: 00410a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410a10(undefined4 param_1)

{
  if (((byte)DAT_0064761c & 0x10) == 0) {
    _SfSetMetricBinary_16(DAT_00647200,0x65,&DAT_0064b5b0,0x300);
    FUN_004eceb0(&DAT_0064b178);
  }
  FUN_00439fe0(0,1,1);
  FUN_0043e000();
  FUN_00521ad0(param_1);
  FUN_0044e710(param_1);
  FUN_005020e0();
  FUN_00508880(param_1);
  FUN_004f9bb0();
  FUN_005494a0(param_1);
  FUN_00428530(param_1);
  FUN_004929d0(param_1);
  FUN_0045ac00(param_1);
  FUN_00451640(&DAT_0064b188);
  FUN_00452390();
  if (DAT_0064b474 != (int *)0x0) {
    (**(code **)(*DAT_0064b474 + 8))(DAT_0064b474);
    DAT_0064b474 = (int *)0x0;
  }
  if (DAT_0064b478 != 0) {
    _SfList_Destroy_4(DAT_0064b478);
    DAT_0064b478 = 0;
  }
  FUN_00410080(DAT_0064762c);
  DAT_0064762c = 0;
  _SfUnregisterClass_8("Vegas.Class.Frame",param_1);
  return 1;
}


