/* Module: vidcap30.exe
   Function: _SfVideo_GetFormatText@12
   Address: 00491970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfVideo_GetFormatText_12(uint param_1,LPSTR param_2,int param_3)

{
  char *lpString2;
  
                    /* 0x91970  660  _SfVideo_GetFormatText@12 */
  if (param_1 < 0x42444654) {
    if (((param_1 != 0x42444653) && (param_1 != 0)) && (param_1 != 3)) {
      _SfFourCCToString_8(param_1,param_2);
      return 0;
    }
  }
  else if (param_1 != 0x53474653) {
    _SfFourCCToString_8(param_1,param_2);
    return 0;
  }
  if (param_1 < 0x42444654) {
    if (param_1 == 0x42444653) {
      lpString2 = "RGBA";
      goto LAB_004919ea;
    }
    if (param_1 == 0) {
      lpString2 = "RGB";
      goto LAB_004919ea;
    }
    if (param_1 == 3) {
      lpString2 = "RGB (bitfields)";
      goto LAB_004919ea;
    }
  }
  else if (param_1 == 0x53474653) {
    lpString2 = "Grayscale";
    goto LAB_004919ea;
  }
  lpString2 = "RGB (unknown)";
LAB_004919ea:
  if (param_2 == (LPSTR)0x0) {
    return 0;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


