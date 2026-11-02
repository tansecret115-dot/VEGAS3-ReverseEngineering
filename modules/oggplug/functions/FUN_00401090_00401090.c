/* Module: oggplug.dll
   Function: FUN_00401090
   Address: 00401090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401090(void)

{
  if (DAT_00510c0c != (int *)0x0) {
    FUN_0040b120(DAT_00510c0c);
  }
  FUN_0040ca00();
  DAT_00510c00 = 0;
  return 1;
}


