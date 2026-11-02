/* Module: vegas30.exe
   Function: FUN_004b4020
   Address: 004b4020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b4020(HWND param_1,int param_2,undefined4 *param_3)

{
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xffffff35:
    if (param_3[2] != 0) {
      FUN_004f1ae0(param_3[1],*param_3);
      param_3[2] = 0;
      param_3[0x1d] = 0;
    }
    break;
  case 0xffffff36:
    FUN_004b3fb0(param_1,param_3);
    SetWindowLongA(param_1,0,0);
    GetParent(param_1);
    return 1;
  case 0xffffff37:
    SetWindowLongA(param_1,0,0);
    return 1;
  case 0xffffff38:
    SetWindowLongA(param_1,0,0);
    return 0;
  }
  return 0;
}


