/* Module: sfs4rw.dll
   Function: FUN_00401120
   Address: 00401120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401120(void)

{
  if (DAT_004a811c != (int *)0x0) {
    FUN_0041f890((int)DAT_004a811c);
    FUN_0041eea0(DAT_004a811c);
  }
  FUN_00423590();
  DAT_004a8110 = 0;
  return 1;
}


