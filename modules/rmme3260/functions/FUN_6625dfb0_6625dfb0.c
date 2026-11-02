/* Module: rmme3260.dll
   Function: FUN_6625dfb0
   Address: 6625dfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6625dfb0(int param_1)

{
  if (param_1 < -0x7ffbffbb) {
    if (param_1 == -0x7ffbffbc) {
      return -0x7ffbffbc;
    }
    if (param_1 == -0x7ffbfff8) {
      return -0x7ffbfff8;
    }
    return -0x7fffbffb;
  }
  if (param_1 < -0x7ffbffb1) {
    if (param_1 != -0x7ffbffb2) {
      if (param_1 == -0x7ffbffb9) {
        return -0x7ffbffb9;
      }
      return -0x7fffbffb;
    }
  }
  else if (param_1 < -0x7ffbff7e) {
    if (param_1 == -0x7ffbff7f) {
      return -0x7ffbff7f;
    }
    if (param_1 != -0x7ffbffac) {
      return -0x7fffbffb;
    }
  }
  else {
    if (param_1 < -0x7ffbff37) {
      if (-0x7ffbff3d < param_1) {
        return param_1;
      }
      if (-0x7ffbff41 < param_1) {
        if (param_1 < -0x7ffbff3d) {
          return param_1;
        }
        return -0x7fffbffb;
      }
      return -0x7fffbffb;
    }
    if (param_1 < -0x7ffbf03b) {
      if (param_1 == -0x7ffbf03c) {
        return -0x7ffbf03c;
      }
      if (-0x7ffbfe3f < param_1) {
        if (param_1 < -0x7ffbfe3b) {
          return param_1;
        }
        return -0x7fffbffb;
      }
      return -0x7fffbffb;
    }
    if (param_1 < 1) {
      if (param_1 != 0) {
        if (param_1 == -0x7ff8fff2) {
          return -0x7ff8fff2;
        }
        return -0x7fffbffb;
      }
    }
    else if (param_1 != 0x40042) {
      if (param_1 == 0x400c3) {
        return 0x400c3;
      }
      return -0x7fffbffb;
    }
  }
  return 0;
}


