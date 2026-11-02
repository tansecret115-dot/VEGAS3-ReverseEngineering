/* Module: vegas30.exe
   Function: FUN_004929d0
   Address: 004929d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004929d0(void)

{
  if (DAT_0063e390 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0063e390);
  }
  DAT_0063e390 = (HGDIOBJ)0x0;
  if (DAT_0063e3b8 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0063e3b8);
  }
  DAT_0063e3b8 = (HGDIOBJ)0x0;
  FUN_00492940();
  return 1;
}


