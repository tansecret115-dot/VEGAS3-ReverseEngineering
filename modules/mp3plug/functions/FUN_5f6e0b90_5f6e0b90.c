/* Module: mp3plug.dll
   Function: FUN_5f6e0b90
   Address: 5f6e0b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6e0b90(void)

{
  DAT_5f7529b0 = (undefined4 *)0x0;
  if (DAT_5f73fd60 == -1) {
    DAT_5f73fd60 = 0;
    DAT_5f7529b0 = FUN_5f6d9720(1000,0x18);
  }
  if (DAT_5f7529b0 != (undefined4 *)0x0) {
    DAT_5f7529b8 = 0;
    DAT_5f7529bc = 0;
    DAT_5f7529c8 = FUN_5f6d9760(0x50);
    if (DAT_5f7529c8 != 0) {
      return 0;
    }
    return 9;
  }
  DAT_5f73fd60 = 0xffffffff;
  return 9;
}


