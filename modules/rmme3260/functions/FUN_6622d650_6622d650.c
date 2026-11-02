/* Module: rmme3260.dll
   Function: FUN_6622d650
   Address: 6622d650
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6622d650(int param_1)

{
  if (param_1 < -0x7ffbffbc) {
    if ((param_1 != -0x7ffbffbd) && (param_1 != -0x7ffbfff8)) {
      return -0x7ffbffb3;
    }
  }
  else if (param_1 < -0x7ffbffb2) {
    if ((param_1 != -0x7ffbffb3) && (param_1 != -0x7ffbffb9)) {
      return -0x7ffbffb3;
    }
  }
  else {
    if (param_1 < -0x7ffbffab) {
      if ((param_1 != -0x7ffbffac) && (param_1 != -0x7ffbffb2)) {
        if (param_1 < -0x7ffbffb1) {
          return -0x7ffbffb3;
        }
        if (param_1 < -0x7ffbffaf) {
          return param_1;
        }
        return -0x7ffbffb3;
      }
    }
    else {
      if (param_1 < -0x7ffbff7e) {
        if (param_1 == -0x7ffbff7f) {
          return -0x7ffbff7f;
        }
        if (param_1 == -0x7ffbffab) {
          return -0x7ffbffab;
        }
        return -0x7ffbffb3;
      }
      if (param_1 < -0x7ffbff37) {
        if (-0x7ffbff3d < param_1) {
          return param_1;
        }
        if (-0x7ffbff41 < param_1) {
          if (param_1 < -0x7ffbff3d) {
            return param_1;
          }
          return -0x7ffbffb3;
        }
        return -0x7ffbffb3;
      }
      if (param_1 < -0x7ffbfe3b) {
        if (-0x7ffbfe3f < param_1) {
          return param_1;
        }
        if (param_1 == -0x7ffbff30) {
          return -0x7ffbff30;
        }
        return -0x7ffbffb3;
      }
      if (param_1 < -0x7ff8fff1) {
        if (param_1 == -0x7ff8fff2) {
          return -0x7ff8fff2;
        }
        if (param_1 == -0x7ffbf03c) {
          return -0x7ffbf03c;
        }
        return -0x7ffbffb3;
      }
      if ((param_1 != 0) && (param_1 != 0x40042)) {
        if (param_1 == 0x400c3) {
          return 0x400c3;
        }
        return -0x7ffbffb3;
      }
    }
    param_1 = 0;
  }
  return param_1;
}


