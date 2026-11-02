/* Module: mp3plug.dll
   Function: FUN_5f688910
   Address: 5f688910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f688910(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1 & 0x1800;
  if (uVar1 == 0x1800) {
    if (((byte)param_1[1] & 0x30) < 0x30) {
      return *(undefined4 *)(&DAT_5f73cc18 + ((param_1[1] & 0x30) >> 4) * 4);
    }
  }
  else if (uVar1 == 0x1000) {
    if (((byte)param_1[1] & 0x30) < 0x30) {
      return *(undefined4 *)(&DAT_5f73cc24 + ((param_1[1] & 0x30) >> 4) * 4);
    }
  }
  else if ((uVar1 == 0) && (((byte)param_1[1] & 0x30) < 0x30)) {
    return *(undefined4 *)(&DAT_5f73cc30 + ((param_1[1] & 0x30) >> 4) * 4);
  }
  return 0xffffffff;
}


