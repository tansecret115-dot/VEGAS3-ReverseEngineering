/* Module: g2plug.dll
   Function: FUN_5f811e00
   Address: 5f811e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f811e00(HWND param_1,uint param_2,uint param_3,int param_4)

{
  void *this;
  undefined4 uVar1;
  
  if (param_2 == 0x110) {
    SetWindowLongA(param_1,8,param_4);
    if (param_4 == 0) {
      return 1;
    }
    *(HWND *)(param_4 + 0x14) = param_1;
  }
  this = (void *)GetWindowLongA(param_1,8);
  if (this == (void *)0x0) {
    return 1;
  }
  uVar1 = FUN_5f8139a0(this,param_1,param_2,param_3,param_4);
  return uVar1;
}


