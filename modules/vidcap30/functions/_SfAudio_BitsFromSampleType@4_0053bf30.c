/* Module: vidcap30.exe
   Function: _SfAudio_BitsFromSampleType@4
   Address: 0053bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudio_BitsFromSampleType_4(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0x13bf30  220  _SfAudio_BitsFromSampleType@4 */
  uVar1 = 0;
  switch(param_1) {
  case 0x10:
  case 0x31:
    return 8;
  case 0x11:
  case 0x40:
    return 0x10;
  case 0x12:
  case 0x41:
    return 0x18;
  case 0x13:
  case 0x20:
  case 0x30:
  case 0x42:
    return 0x20;
  case 0x21:
    uVar1 = 0x40;
  }
  return uVar1;
}


