/* Module: vegas30k.dll
   Function: FUN_01001a50
   Address: 01001a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01001a50(undefined4 param_1)

{
  if (DAT_0120e5a4 == 0) {
    FUN_0117fd10(param_1,0);
    FUN_01054930(param_1,"SfKrn_ExplorerEx_Class");
    SfControls_Terminate(param_1);
  }
  _SfMetric_Close_4(DAT_0120e5c4);
  FUN_010563e0(param_1);
  DAT_0120e5c0 = 0;
  return 1;
}


