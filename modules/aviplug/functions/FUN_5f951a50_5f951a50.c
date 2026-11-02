/* Module: aviplug.dll
   Function: FUN_5f951a50
   Address: 5f951a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f951a50(int param_1)

{
  if (-0x7ffbfdd6 < param_1) {
    if (param_1 < -0x7ff8ffa8) {
      if (param_1 == -0x7ff8ffa9) {
        return 0xfffffffa;
      }
      if (param_1 == -0x7ff8fff2) {
        return 0xfffffffd;
      }
    }
    else if ((-1 < param_1) && (param_1 < 2)) {
      return 0;
    }
    return 0xffffff9c;
  }
  if (param_1 != -0x7ffbfdd6) {
    if (param_1 == -0x7fffbfff) {
      return 0xffffffff;
    }
    if (param_1 == -0x7fffbffd) {
      return 0xfffffffa;
    }
    if (param_1 != -0x7ffbfdf9) {
      return 0xffffff9c;
    }
  }
  return 0xfffffffe;
}


