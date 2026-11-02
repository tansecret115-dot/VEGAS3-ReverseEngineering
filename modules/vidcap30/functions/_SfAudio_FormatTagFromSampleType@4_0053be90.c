/* Module: vidcap30.exe
   Function: _SfAudio_FormatTagFromSampleType@4
   Address: 0053be90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAudio_FormatTagFromSampleType_4(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0x13be90  230  _SfAudio_FormatTagFromSampleType@4 */
  uVar1 = 0;
  switch(param_1) {
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    return 1;
  case 0x20:
  case 0x21:
    return 3;
  case 0x30:
    return 0xfe00;
  case 0x31:
    return 0xfe01;
  case 0x40:
  case 0x41:
  case 0x42:
    uVar1 = 0xfe02;
  }
  return uVar1;
}


