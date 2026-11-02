/* Module: mp3plug.dll
   Function: FUN_5f68bad0
   Address: 5f68bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f68bad0(uint param_1)

{
  if (param_1 < 0x4b435255) {
    if (param_1 == 0x4b435254) {
      return 0x4b435254;
    }
    if (param_1 < 0x424c4155) {
      if (param_1 == 0x424c4154) {
        return 0x43525349;
      }
      if (param_1 == 0x31455054) {
        return 0x54524149;
      }
      if (param_1 == 0x32544954) {
        return 0x4d414e49;
      }
    }
    else {
      if (param_1 == 0x43525354) {
        return 0x43525349;
      }
      if (param_1 == 0x45504f54) {
        return 0x54524149;
      }
    }
  }
  else if (param_1 < 0x504f4355) {
    if (param_1 == 0x504f4354) {
      return 0x504f4349;
    }
    if (param_1 == 0x4d4d4f43) {
      return 0x544d4349;
    }
    if (param_1 == 0x4e4f4354) {
      return 0x524e4749;
    }
  }
  else if (param_1 == 0x52455954) {
    param_1 = 0x44524349;
  }
  return param_1;
}


