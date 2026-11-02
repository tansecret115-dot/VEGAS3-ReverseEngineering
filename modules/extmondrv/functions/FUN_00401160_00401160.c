/* Module: extmondrv.dll
   Function: FUN_00401160
   Address: 00401160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401160(HINSTANCE param_1)

{
  FUN_00410010(param_1,"Extmon_Trackbar_Class");
  if (DAT_0045b008 != (void *)0x0) {
    FUN_00410ea0(DAT_0045b008);
  }
  if (DAT_0045b004 != (int *)0x0) {
    FUN_00412320(DAT_0045b004);
  }
  FUN_00413c00();
  _DAT_0045b000 = 0;
  return 1;
}


