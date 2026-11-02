/* Module: vegas30.exe
   Function: FUN_004091b0
   Address: 004091b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004091b0(int param_1,int param_2)

{
  LONG LVar1;
  undefined4 uVar2;
  
  LVar1 = GetWindowLongA(*(HWND *)(param_1 + 4),-4);
  uVar2 = 0;
  if ((param_2 != 0) || (param_1 + 8 == LVar1)) {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 4),-4,*(LONG *)(param_1 + 0x1c));
    if (LVar1 == 0) {
      return 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(code **)(param_1 + 0x1c) = DefWindowProcA_exref;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return uVar2;
}


