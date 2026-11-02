/* Module: vegas30.exe
   Function: FUN_005824a0
   Address: 005824a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_005824a0(int *param_1,HWND param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 *param_6)

{
  uint uVar1;
  HMENU pHVar2;
  int iVar3;
  
  iVar3 = 1;
  if (param_3 < 0x2d) {
    if (param_3 == 0x2c) {
      iVar3 = FUN_00581600(param_5);
    }
    else {
      if ((param_3 == 0x15) || (param_3 == 0x1a)) {
        uVar1 = GetWindowLongA(param_2,-0x10);
        if (((uVar1 & 0x40000000) == 0) && (pHVar2 = GetMenu(param_2), pHVar2 != (HMENU)0x0)) {
          FUN_00581550();
          FUN_005814b0();
          FUN_00582340(pHVar2);
          DrawMenuBar(param_2);
        }
        return 0;
      }
      if (param_3 != 0x2b) {
        return 0;
      }
      iVar3 = FUN_00581740(param_5);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  else if (param_3 == 0x117) {
    (**(code **)(*param_1 + 8))(param_2,param_4);
    if (((param_1[1] != 0) && (param_1[0x13] == 0)) && (param_5 >> 0x10 == 0)) {
      FUN_00582110(param_4,1);
      *param_6 = 0;
      return 1;
    }
  }
  else {
    if (param_3 != 0x125) {
      return 0;
    }
    if (((param_1[1] != 0) && (param_1[0x13] == 0)) && (param_5 >> 0x10 == 0)) {
      FUN_00582000(param_4,1);
      *param_6 = 0;
      return 1;
    }
  }
  *param_6 = 0;
  return iVar3;
}


