/* Module: vegas30k.dll
   Function: _SfAudio_GetFindPeaksFunction@4
   Address: 0102d9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


code * _SfAudio_GetFindPeaksFunction_4(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0x2d9a0  746  _SfAudio_GetFindPeaksFunction@4 */
  uVar1 = _SfAudio_GetSampleType_4(param_1);
  switch(uVar1) {
  case 0x10:
    return (code *)&LAB_0102d2d0;
  case 0x11:
    return FUN_0102d470;
  case 0x12:
    return (code *)&LAB_0102d540;
  case 0x13:
    return FUN_0102d720;
  default:
    return (code *)0x0;
  case 0x20:
    return (code *)&LAB_0102d7f0;
  case 0x21:
    return (code *)&LAB_0102d8a0;
  case 0x30:
    return FUN_0102d640;
  case 0x31:
    return (code *)&LAB_0102d3a0;
  }
}


