/* Module: vegas30.exe
   Function: FUN_0052bc70
   Address: 0052bc70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0052bc70(int param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = 0;
  bVar2 = (byte)param_1;
  if ((-1 < param_1) && (param_1 < 0x1f)) {
    return 1 << (bVar2 & 0x1f) & DAT_00648690;
  }
  if ((0x3f < param_1) && (param_1 < 0x60)) {
    return 1 << (bVar2 - 0x40 & 0x1f) & DAT_00648698;
  }
  if ((0xc6 < param_1) && (param_1 < 0xcb)) {
    uVar1 = 1 << (bVar2 & 0x1f) & DAT_00648694;
  }
  return uVar1;
}


