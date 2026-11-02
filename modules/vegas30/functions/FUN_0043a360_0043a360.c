/* Module: vegas30.exe
   Function: FUN_0043a360
   Address: 0043a360
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0043a360(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0x65) {
    if (param_3 != 0x18) {
      return false;
    }
    piVar2 = &DAT_00611890;
  }
  else if (param_1 == 0x66) {
    if (param_3 != 0xb) {
      return false;
    }
    piVar2 = &DAT_00611950;
  }
  else if (param_1 == 0x67) {
    if (param_3 != 0xe) {
      return false;
    }
    piVar2 = &DAT_006119a8;
  }
  else {
    if (param_1 != 0x68) {
      return param_3 == 0;
    }
    if (param_3 != 8) {
      return false;
    }
    piVar2 = &DAT_00611a18;
  }
  uVar3 = 0;
  if (param_3 != 0) {
    iVar4 = (int)piVar2 - param_2;
    piVar1 = (int *)(param_2 + 4);
    do {
      if (piVar1[-1] != *piVar2) {
        return false;
      }
      if (*piVar1 != *(int *)(iVar4 + (int)piVar1)) {
        return false;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
      piVar1 = piVar1 + 2;
    } while (uVar3 < param_3);
  }
  return true;
}


