/* Module: vidcap30.exe
   Function: _SfErrorHandler_TranslateCommDlgError@4
   Address: 0047de10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfErrorHandler_TranslateCommDlgError_4(uint param_1)

{
                    /* 0x7de10  375  _SfErrorHandler_TranslateCommDlgError@4 */
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      switch(param_1) {
      case 0:
        return 0;
      case 1:
      case 3:
      case 4:
        break;
      case 2:
      case 5:
      case 7:
      case 8:
      case 9:
      case 10:
        return 0x8007000e;
      case 6:
        return 0x8004e00e;
      default:
        return 0x80004005;
      }
    }
  }
  else if (param_1 < 0x3004) {
    if (param_1 != 0x3003) {
      if (param_1 == 0x3001) {
        return 0x8007000e;
      }
      if (param_1 != 0x3002) {
        return 0x80004005;
      }
      return 0x8004e00d;
    }
  }
  else if ((param_1 != 0x4001) && (param_1 != 0xffff)) {
    return 0x80004005;
  }
  return 0x80070057;
}


