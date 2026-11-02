/* Module: vidcap30.exe
   Function: FUN_00416150
   Address: 00416150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416150(HWND param_1,uint param_2,undefined2 param_3,int param_4)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      FUN_004161e0(param_1,param_4);
      return 0;
    }
    if (param_2 == 2) {
      FUN_004162c0(param_1,LVar1);
      return 0;
    }
    if (param_2 == 0x53) {
      FUN_0041f690(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_005b2828,0);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    FUN_00416300(param_1,param_3,LVar1);
  }
  return 0;
}


