/* Module: extmondrv.dll
   Function: FUN_00409af0
   Address: 00409af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409af0(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  void *this;
  undefined4 uVar1;
  
  if (param_2 == 0x110) {
    SetWindowLongA(param_1,8,(LONG)param_4);
    if (param_4 == (HWND)0x0) {
      return 1;
    }
    param_4[5].unused = (int)param_1;
  }
  this = (void *)GetWindowLongA(param_1,8);
  if (this == (void *)0x0) {
    return 1;
  }
  uVar1 = FUN_00409b50(this,(int)param_1,param_2,param_3,param_4);
  return uVar1;
}


