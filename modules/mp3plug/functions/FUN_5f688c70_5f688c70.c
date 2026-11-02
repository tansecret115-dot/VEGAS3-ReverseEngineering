/* Module: mp3plug.dll
   Function: FUN_5f688c70
   Address: 5f688c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f688c70(ushort *param_1)

{
  if ((param_1[1] & 0x40) != 0) {
    return (-(uint)((*param_1 & 0x6000) != 0x6000) & 0xfffffffd) + 4;
  }
  return 0;
}


