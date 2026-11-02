/* Module: vegas30.exe
   Function: FUN_0052bcd0
   Address: 0052bcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052bcd0(int param_1)

{
  byte bVar1;
  
  bVar1 = (byte)param_1;
  if ((-1 < param_1) && (param_1 < 0x1f)) {
    DAT_00648690 = DAT_00648690 | 1 << (bVar1 & 0x1f);
    DAT_0064767c = DAT_0064767c | 4;
    return 0;
  }
  if ((0x3f < param_1) && (param_1 < 0x60)) {
    DAT_00648698 = DAT_00648698 | 1 << (bVar1 - 0x40 & 0x1f);
    DAT_0064767c = DAT_0064767c | 4;
    return 0;
  }
  if ((0xc6 < param_1) && (param_1 < 0xcb)) {
    DAT_00648694 = DAT_00648694 | 1 << (bVar1 & 0x1f);
  }
  DAT_0064767c = DAT_0064767c | 4;
  return 0;
}


