/* Module: vegas30k.dll
   Function: _SfAudio_BytesFromSampleType@4
   Address: 010b7590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudio_BytesFromSampleType_4(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0xb7590  726  _SfAudio_BytesFromSampleType@4 */
  uVar1 = 0;
  switch(param_1) {
  case 0x10:
  case 0x31:
    return 1;
  case 0x11:
  case 0x40:
    return 2;
  case 0x12:
  case 0x41:
    return 3;
  case 0x13:
  case 0x20:
  case 0x30:
  case 0x42:
    return 4;
  case 0x21:
    uVar1 = 8;
  }
  return uVar1;
}


