/* Module: vidcap30.exe
   Function: FUN_004083a0
   Address: 004083a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004083a0(undefined4 param_1)

{
  if (((byte)DAT_005ba4b4 & 0x10) == 0) {
    _SfSetMetricBinary_16(DAT_005ba29c,0x65,&DAT_005bbb30,0x1c0);
    FUN_00417ff0(&DAT_005bb848);
  }
  FUN_00414850(&DAT_005bb858);
  FUN_00414d20();
  if (DAT_005bba24 != (int *)0x0) {
    (**(code **)(*DAT_005bba24 + 8))(DAT_005bba24);
    DAT_005bba24 = (int *)0x0;
  }
  if (DAT_005bba28 != 0) {
    _SfList_Destroy_4(DAT_005bba28);
    DAT_005bba28 = 0;
  }
  FUN_00408000(DAT_005ba4c0);
  DAT_005ba4c0 = 0;
  _SfUnregisterClass_8("VIDCAP.3.0.Class.Frame",param_1);
  return 1;
}


