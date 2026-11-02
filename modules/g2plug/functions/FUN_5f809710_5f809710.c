/* Module: g2plug.dll
   Function: FUN_5f809710
   Address: 5f809710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f809710(int param_1)

{
  if (-0x7ffbfdbc < param_1) {
    switch(param_1) {
    case -0x7ffbfdb8:
    case -0x7ffbfda5:
      return -0x7ffb1ff7;
    default:
      return param_1;
    case -0x7ffbfdb3:
      return -0x7ffb1fe1;
    case -0x7ffbfdad:
    case -0x7ffbfd9f:
      goto switchD_5f80977a_caseD_80040253;
    case -0x7ffbfd98:
      return -0x7ffb1fc2;
    }
  }
  if (param_1 == -0x7ffbfdbc) {
    return -0x7ffb1fd8;
  }
  if (param_1 < -0x7ffbfefc) {
    if ((param_1 != -0x7ffbfefd) && (param_1 != -0x7ffbfffc)) {
      if (param_1 == -0x7ffbfff7) {
        return -0x7fff0001;
      }
      if (param_1 == -0x7ffbfff2) {
        return -0x7ffb1fe1;
      }
      return param_1;
    }
  }
  else {
    if (param_1 == -0x7ffbfdbe) {
      return -0x7ffb1fc3;
    }
    if (param_1 != -0x7ffbfdbd) {
      return param_1;
    }
  }
switchD_5f80977a_caseD_80040253:
  return -0x7ffb1fee;
}


