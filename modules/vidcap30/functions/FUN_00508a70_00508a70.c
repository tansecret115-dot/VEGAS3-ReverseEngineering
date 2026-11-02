/* Module: vidcap30.exe
   Function: FUN_00508a70
   Address: 00508a70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00508a70(uint param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_3[2];
  uVar3 = param_1 >> 0x10;
  switch(param_1 & 0xffff) {
  case 0:
    if (*param_3 < uVar1) {
      return uVar1 - 1;
    }
    break;
  case 1:
    if (uVar1 < param_3[1]) {
      return uVar1 + 1;
    }
    break;
  case 2:
    if (*param_3 < uVar1) {
      uVar3 = param_3[3];
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      if (uVar1 < uVar3) {
        return 0;
      }
      return uVar1 - uVar3;
    }
    break;
  case 3:
    uVar3 = param_3[1];
    if (uVar1 < uVar3) {
      uVar2 = param_3[3];
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      uVar1 = uVar1 + uVar2;
      if (uVar3 < uVar1) {
        return uVar3;
      }
    }
    break;
  case 4:
  case 5:
    uVar1 = *param_3;
    if ((*param_3 <= uVar3) && (uVar1 = param_3[1], uVar3 <= param_3[1])) {
      uVar1 = uVar3;
    }
  }
  return uVar1;
}


