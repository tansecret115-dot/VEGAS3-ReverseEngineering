/* Module: vegas30.exe
   Function: FUN_004b4840
   Address: 004b4840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b4840(HWND param_1,undefined4 *param_2,int param_3)

{
  switch(*(undefined4 *)(param_3 + 8)) {
  case 0xffffff35:
    if (param_2[2] != 0) {
      FUN_004f1ae0(param_2[1],*param_2);
      param_2[2] = 0;
      param_2[0x1d] = 0;
    }
    break;
  case 0xffffff36:
    FUN_004b4820(param_1,param_2);
    SetWindowLongA(param_1,0,0);
    GetParent(param_1);
    return 1;
  case 0xffffff37:
    SetWindowLongA(param_1,0,0);
    return 1;
  case 0xffffff38:
    FUN_004b4590(param_1,param_2);
    SetWindowLongA(param_1,0,0);
    return 0;
  }
  return 0;
}


