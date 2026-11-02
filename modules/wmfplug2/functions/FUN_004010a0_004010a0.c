/* Module: wmfplug2.dll
   Function: FUN_004010a0
   Address: 004010a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004010a0(void)

{
  if (DAT_00489d58 != (int *)0x0) {
    FUN_00420230(DAT_00489d58);
  }
  FUN_00421b10();
  DAT_00489d50 = 0;
  return 1;
}


