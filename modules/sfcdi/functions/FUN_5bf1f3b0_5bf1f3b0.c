/* Module: sfcdi.dll
   Function: FUN_5bf1f3b0
   Address: 5bf1f3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5bf1f3b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5bf56470;
  if ((HSFBURN__ *)param_1[0xf46] != (HSFBURN__ *)0x0) {
    SfCDBurn_Destroy((HSFBURN__ *)param_1[0xf46]);
    param_1[0xf46] = 0;
  }
  if (param_1[0x796] == 0) {
    FUN_5bf20650((int)(param_1 + 0x799));
  }
  else if (param_1[0x796] == 1) {
    FUN_5bf1ff40((int)(param_1 + 0x799));
    return;
  }
  return;
}


