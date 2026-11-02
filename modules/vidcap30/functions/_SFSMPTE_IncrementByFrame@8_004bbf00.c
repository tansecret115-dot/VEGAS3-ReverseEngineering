/* Module: vidcap30.exe
   Function: _SFSMPTE_IncrementByFrame@8
   Address: 004bbf00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SFSMPTE_IncrementByFrame_8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0xbbf00  209  _SFSMPTE_IncrementByFrame@8 */
  uVar2 = param_1[4] + 1;
  uVar1 = *param_1 - 2;
  param_1[4] = uVar2;
  switch(uVar1) {
  case 0:
  case 3:
    if (0x1d < uVar2) {
      param_1[4] = 0;
      uVar1 = param_1[3] + 1;
      param_1[3] = uVar1;
    }
    if ((uint)param_1[3] < 0x3c) {
      return uVar1;
    }
    uVar1 = param_1[2] + 1;
    param_1[2] = uVar1;
    param_1[3] = 0;
    if (uVar1 % 10 != 0) {
      param_1[4] = param_1[4] + 2;
    }
    if (uVar1 < 0x3c) {
      return uVar1 / 10;
    }
    param_1[2] = 0;
    uVar1 = (param_1[1] & 0x1fU) + 1;
    param_1[1] = uVar1;
    if (uVar1 < 0x18) {
      return uVar1;
    }
    param_1[1] = 0;
    return uVar1;
  case 1:
    if (uVar2 < 0x19) goto LAB_004bbf96;
    break;
  case 2:
    if (uVar2 < 0x18) goto LAB_004bbf96;
    break;
  default:
    if (uVar2 < 0x1e) goto LAB_004bbf96;
  }
  param_1[4] = 0;
  uVar1 = param_1[3] + 1;
  param_1[3] = uVar1;
LAB_004bbf96:
  if (0x3b < (uint)param_1[3]) {
    param_1[3] = 0;
    uVar1 = param_1[2] + 1;
    param_1[2] = uVar1;
    if (0x3b < uVar1) {
      param_1[2] = 0;
      uVar1 = (param_1[1] & 0x1fU) + 1;
      param_1[1] = uVar1;
      if (0x17 < uVar1) {
        param_1[1] = 0;
      }
    }
  }
  return uVar1;
}


