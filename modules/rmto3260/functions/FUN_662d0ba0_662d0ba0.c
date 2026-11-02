/* Module: rmto3260.dll
   Function: FUN_662d0ba0
   Address: 662d0ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662d0ba0(int param_1)

{
  if (param_1 < -0x7ffbfffb) {
    if (param_1 == -0x7ffbfffc) {
      return 0x34;
    }
    if (param_1 == -0x7fffbffb) {
      return 0x30;
    }
  }
  else if (param_1 < -0x7ffbfff2) {
    if (param_1 == -0x7ffbfff3) {
      return 0xac;
    }
    if (param_1 == -0x7ffbfffb) {
      return 0x33;
    }
    if (param_1 == -0x7ffbfff9) {
      return 0x2f;
    }
    if (param_1 == -0x7ffbfff8) {
      return 0x49;
    }
  }
  else if (param_1 < -0x7ffbff76) {
    if (param_1 == -0x7ffbff77) {
      return 0x49;
    }
    if (param_1 == -0x7ffbff7f) {
      return 0x32;
    }
  }
  else if (param_1 < -0x7ffbfdad) {
    if (param_1 == -0x7ffbfdae) {
      return 0xaf;
    }
    if (param_1 == -0x7ffbfdf9) {
      return 0xab;
    }
  }
  else if (param_1 < -0x7ffbfc3e) {
    if (param_1 == -0x7ffbfc3f) {
      return 0x19;
    }
    if (param_1 == -0x7ffbfdad) {
      return 0xaf;
    }
  }
  else if (param_1 < -0x7ff8fff1) {
    if (param_1 == -0x7ff8fff2) {
      return 0x31;
    }
    switch(param_1) {
    case -0x7ffbfc3e:
      return 0x15;
    case -0x7ffbfc3d:
      return 0x16;
    case -0x7ffbfc3c:
      return 0x17;
    case -0x7ffbfc3b:
      return 0x18;
    case -0x7ffbfc3a:
      return 0x1a;
    case -0x7ffbfc39:
      return 0x1b;
    case -0x7ffbfc38:
      return 0x1c;
    case -0x7ffbfc37:
      return 0x1d;
    case -0x7ffbfc36:
      return 0x1e;
    case -0x7ffbfc35:
      return 0x1f;
    case -0x7ffbfc34:
      return 0x20;
    case -0x7ffbfc33:
      return 0x21;
    case -0x7ffbfc32:
      return 0x22;
    case -0x7ffbfc31:
      return 0x23;
    case -0x7ffbfc30:
      return 0x29;
    case -0x7ffbfc2f:
      return 0x35;
    case -0x7ffbfc2e:
      return 0x36;
    case -0x7ffbfc2d:
      return 0x37;
    case -0x7ffbfc2b:
      return 0xae;
    case -0x7ffbfc2a:
      return 0x28;
    case -0x7ffbfc29:
      return 0x24;
    case -0x7ffbfc28:
      return 0x25;
    case -0x7ffbfc27:
      return 0xb1;
    }
  }
  else {
    if (param_1 == -0x7ff8ffa9) {
      return 0x27;
    }
    if (param_1 == 0x40012) {
      return 0xad;
    }
  }
  return ((param_1 < 0) - 1 & 0x9c) + 0x14;
}


