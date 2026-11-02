/* Module: vegas30.exe
   Function: FUN_005e4dc0
   Address: 005e4dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e4dc0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  LONG LVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x110) {
    SetWindowLongA(param_1,8,param_4);
    if (param_4 == 0) {
      return 1;
    }
    *(HWND *)(param_4 + 0x14) = param_1;
  }
  LVar1 = GetWindowLongA(param_1,8);
  if (LVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_005e4e20(param_1,param_2,param_3,param_4);
  return uVar2;
}


